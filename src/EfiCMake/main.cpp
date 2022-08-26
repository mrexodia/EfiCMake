#include "Efi.hpp"

EFI_STATUS EFIAPI EfiEntry(EFI_HANDLE imageHandle, EFI_SYSTEM_TABLE* systemTable)
{
	systemTable->ConOut->OutputString(systemTable->ConOut, L"Hello from CMake!\n");
	return EFI_SUCCESS;
}
