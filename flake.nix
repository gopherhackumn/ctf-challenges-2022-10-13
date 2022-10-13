{
  outputs = { self, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system:
      let
        pkgs = import nixpkgs { inherit system; };
        pythonPkgs = pkgs.python310Packages;
      in rec {
        devShell = pkgs.mkShell {
          packages = with pkgs; with pythonPkgs; [ python ipython openssl ];
        };
      });
}
