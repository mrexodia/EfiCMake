# EfiCMake

CMake template for a basic EFI application/bootkit.

![screenshot](https://i.imgur.com/0WhUFqM.png)

**Note**: This currently only links with the EDK2 headers. This means you will not be able to use global variables like `gST` or EDK2 functions like `Print`.

## Building (Visual Studio)

This is only tested on Windows with Visual Studio.

- Configure the project with `cmake -B build`
- Open `build\EfiCMake.sln` and build the solution
- `EfiCMake.efi` will be in the `build\Release` folder
