arch := $(shell dpkg --print-architecture)

all: casadi ipopt matplotlibcpp mumps rplidar bt-ros bt-cpp

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

bt-ros:
	./scripts/build_pkg.sh src/ghost-bt-ros-$(arch) deb

bt-cpp:
	./scripts/build_pkg.sh src/ghost-bt-cpp-$(arch) deb
