## Install vscode on archlinux

Steps [I](#i---install-git) and [II](#ii---clone-vscode) can be
replaced by downloading with `wget` and unpacking.

### I - Install git
```console
> sudo pacman -Sy git
```

### Ib - Install devel (for makepkg)
```console
> sudo pacman -Sy base-devel
```

### II - Clone vscode
```console
> cd ~/Downloads
> git clone https://AUR.archlinux.org/visual-studio-code-bin.git
```

### III - Build vscode package
```console
> cd visual-studio-code-bin/
> makepkg -s
```

### IV - Install vscode package
```
> sudo pacman -U visual-studio-code-bin-*.pkg.tar.zst
```

### V - Cleanup
```console
> cd ..
> rm -rf visual-studio-code-bin
```
