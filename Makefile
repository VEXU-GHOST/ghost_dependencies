arch := $(shell dpkg --print-architecture)

all: casadi ipopt matplotlibcpp mumps rplidar btcpp btros2 btros2-interfaces

casadi:
	./scripts/prepare_pkg.sh casadi
	./scripts/build_pkg.sh src/ghost-casadi-$(arch) deb

ipopt:
	./scripts/prepare_pkg.sh ipopt
	./scripts/build_pkg.sh src/ghost-ipopt-$(arch) deb

matplotlibcpp:
	./scripts/prepare_pkg.sh matplotlibcpp
	./scripts/build_pkg.sh src/ghost-matplotlibcpp-$(arch) deb

mumps:
	./scripts/prepare_pkg.sh mumps
	./scripts/build_pkg.sh src/ghost-mumps-$(arch) deb

rplidar:
	./scripts/build_pkg.sh src/ghost-rplidar-$(arch) deb

btcpp:
	./scripts/build_pkg.sh src/ghost-btcpp-$(arch) deb

btros2:
	./scripts/build_pkg.sh src/ghost-btros2-$(arch) deb

btros2-interfaces:
	./scripts/build_pkg.sh src/ghost-btros2-interfaces-$(arch) deb
