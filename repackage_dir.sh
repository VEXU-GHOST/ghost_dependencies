#! /bin/bash

print_help() {
    echo "Usage: $0 [pkg_src] [pkg_dest]"
    echo
    echo "Copies source files from /usr/local/** to the new package directory."
    echo
    echo
    echo "--- OPTIONS ---"
    echo 
    echo "PKG_SRC (string):"
    echo "  Package source folder (must contain a 'DEBIAN' folder)."
    echo "  Example: 'ghost-casadi-amd64'."
    echo 
    echo "PKG_DEST (string):"
    echo "  Debian destination folder (must contain a 'DEBIAN' folder)."
    echo "  Example: 'deb'."
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
    echo "Usage: $0 [pkg_src] [pkg_dest]"
    exit -1
fi

pkg_src=$1
pkg_dest=$2
arch=$(dpkg --print-architecture)

cd src
dpkg --build $pkg_src
cd ..
mv src/$pkg_src.deb $pkg_dest/