all: casadi

casadi:
	./scripts/prepare_pkg.sh casadi
	./scripts/build_pkg.sh src/ghost-casadi-$(dpkg --print-architecture) deb
