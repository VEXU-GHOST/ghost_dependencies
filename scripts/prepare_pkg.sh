#! /bin/bash

print_help() {
    echo "Usage: $0 [pkg_name]"
    echo
    echo "Prepares the given package for building."
    echo
    echo
    echo "--- OPTIONS ---"
    echo 
    echo "PKG_NAME (string):"
    echo "  Determines the package to build. Must have a matching filelist!"
    echo "  Output package name will be wrapped by 'ghost-' and the invoking machine architecture."
    echo "  Example: '$0 casadi' on an x86_64 machine will prepare 'ghost-casadi-amd64'."
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
if [[ $# -ne 1 ]]; then
    echo "Usage: $0 [pkg_name]"
    exit -1
fi

pkg=$1
arch=$(dpkg --print-architecture)

# Check if package list file exists
if [[ ! -f ./manifests/$pkg ]]; then
    echo "Failure: missing manifest for package $pkg."
    exit -1
fi

# Create directory if needed
mkdir -p ./src/ghost-$pkg-$arch

# Remove old files
find ./src/ghost-$pkg-$arch -mindepth 1 -maxdepth 1 | grep -v DEBIAN | xargs rm -rf

# Copy package files
mode=d
while read line; do

    # Switch from mkdir to cp upon reaching a "---"
    if [[ $line =~ --- ]]; then
        mode='f'
        continue
    fi

    # Replace 'VEXU_HOME' with real value
    echo "${line/VEXU_HOME/"$VEXU_HOME"}"

    # case $mode in
    #     'd')
    #         mkdir -p src/ghost-$pkg-$arch$line
    #         ;;
    #     'f')
    #         cp -r $line src/ghost-$pkg-$arch$line
    #         ;;
    # esac

done < "./manifests/$pkg"