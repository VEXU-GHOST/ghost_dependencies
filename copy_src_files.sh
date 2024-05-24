#! /bin/bash

print_help() {
    echo "Usage: $0 [keyword] [pkg_name]"
    echo
    echo "Copies source files from /usr/local/** to the new package directory."
    echo "Clears [pkg_dir]/usr/local/** before copying new files."
    echo
    echo
    echo "--- OPTIONS ---"
    echo
    echo "KEYWORD (string):"
    echo "  Files and directories found in /usr/local/** must contain the keyword to be copied into the new package's directory."
    echo 
    echo "PKG_NAME (string):"
    echo "  Prepended by 'ghost-' and postpended by your dpkg architecture. Used as the file destination directory."
    echo
    echo "  Example: 'casadi', on an amd64 machine, will result in 'ghost-casadi-amd64'."
}

# Check if help option set
for arg in $@; do
    if [[ $arg =~ ^--help$ ]]; then
        print_help
        exit 0
    fi
done

# Require repo base as current dir
if [[ ! $(pwd) == *"ghost_dependencies" ]]; then
    echo "Failure: script must be ran in ghost_dependencies base directory."
    exit -1
fi

# Check argument count
if [[ $# -ne 2 ]]; then
    echo "Usage: $0 [filter] [pkg_name]"
    exit -1
fi

filter=$1
pkg=$2
arch=$(dpkg --print-architecture)

# Remove old files
rm -rf ./src/ghost-$pkg-$arch/usr/local

# Create package directory tree
find /usr/local -type f -name *$filter* | sed -r 's|/[^/]+$||' | sort -u | xargs -I % mkdir -p ./src/ghost-$pkg-$arch%

# Copy files to package directorys
find /usr/local -type f -name *$filter* | xargs -I % cp % ./src/ghost-$pkg-$arch%