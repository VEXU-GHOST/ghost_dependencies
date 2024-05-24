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
    echo "  Example: 'src/ghost-casadi-amd64'."
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

# Validate pkg_src
if [[ ! -d $pkg_src ]]; then
    echo "Failure: pkg_src directory does not exist."
    exit -1
fi

if [[ $pkg_src =~ .*/$ ]]; then
    echo "Failure: pkg_src may not end in a '/'."
    exit -1
fi

# Create destination folder if necessary
if [[ ! -d $pkg_dest ]]; then
    mkdir -p $pkg_dest
fi

# Build package and move it to destination
dpkg --build $pkg_src
mv $pkg_src.deb $pkg_dest