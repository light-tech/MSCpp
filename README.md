Microsoft VC++ Headers and Libraries and Windows SDK
====================================================

Packaged for use with [DevMax](https://www.microsoft.com/en-us/p/devmax/9mzqlt5d5b39).

Current version:

  * MSVC  14.27.29110
  * SDK   10.0.19041.0

Simply do

    mklink /j msvc "%VS_INSTALL_DIR%\VC\Tools\MSVC\14.27.29110\include"
    mklink /j winsdk "%WINSDK_INSTALL_DIR%\Windows Kits\10\Include\10.0.19041.0"

in `include/` and

    mklink /j msvc "%VS_INSTALL_DIR%\VC\Tools\MSVC\14.27.29110\lib"
    mklink /j winsdk "%WINSDK_INSTALL_DIR%\Windows Kits\10\lib\10.0.19041.0"

in `lib/` to create this repo. For libraries, we exclude `arm`, `arm64`, `x64`, `onecore` and `store` versions and the heavy debug `libucrtd.lib` to save space.