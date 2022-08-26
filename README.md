# EfiCMake

CMake template for a basic EFI application/bootkit.

![screenshot](https://i.imgur.com/0WhUFqM.png)

## Building (Visual Studio)

This is only tested on Windows with Visual Studio.

- Configure the project with `cmake -B build`
- Open `build\EfiCMake.sln` and build the solution
- `EfiCMake.efi` will be in the `build\Release` folder
