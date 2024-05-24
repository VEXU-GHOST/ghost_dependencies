arch := $(shell dpkg --print-architecture)

all: casadi

casadi:
	./scripts/prepare_pkg.sh casadi
	./scripts/build_pkg.sh src/ghost-casadi-$(arch) deb
