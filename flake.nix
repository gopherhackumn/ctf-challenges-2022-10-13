{
  outputs = { self, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system:
      let
        pkgs = import nixpkgs { inherit system; };
        pythonPkgs = pkgs.python310Packages;

        flakePkgs = with pkgs; with pythonPkgs; rec { };
      in rec {
        packages = flake-utils.lib.flattenTree flakePkgs;

        devShell = pkgs.mkShell {
          packages = with pkgs;
            with pythonPkgs; [
              clang-tools
              gcc
              gnumake
              ipython
              openssl
              python
              virtualenv
            ];
        };
      });
}
