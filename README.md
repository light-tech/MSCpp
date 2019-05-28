Microsoft VC++ Headers and Libraries and Windows SDK

Current version:

  * MSVC  14.20.27508
  * SDK   10.0.17763.0

Simply do

    mklink /j msvc "%VS_INSTALL_DIR%\VC\Tools\MSVC\14.20.27508\include"
    mklink /j winsdk "%WINSDK_INSTALL_DIR%\Windows Kits\10\Include\10.0.17763.0"

in `include/` and

    mklink /j msvc "%VS_INSTALL_DIR%\VC\Tools\MSVC\14.20.27508\lib"
    mklink /j winsdk "%WINSDK_INSTALL_DIR%\Windows Kits\10\lib\10.0.17763.0"

in `lib/` to create this repo. For libraries, we exclude `arm`, `arm64`, `x64`, `onecore` and `store` versions and the heavy debug `libucrtd.lib` to save space.