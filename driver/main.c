#include <ntddk.h>

VOID DriverUnload(PDRIVER_OBJECT DriverObject) {
    DbgPrint("[Template] Driver unloaded\n");
}

NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath) {
    UNREFERENCED_PARAMETER(RegistryPath);
    
    DriverObject->DriverUnload = DriverUnload;
    
    DbgPrint("[Template] Kernel driver loaded successfully\n");
    DbgPrint("[Template] Ready for hooking/research\n");

    return STATUS_SUCCESS;
}
