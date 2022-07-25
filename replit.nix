{ pkgs }: {
	deps = [
		pkgs.libfsm
pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}