#include <psp2/kernel/modulemgr.h>
#include <taihen.h>
#include <vitasdk.h>

static SceUID hook;
static tai_hook_ref_t ref_hook;
int vshSysconReturnTrue()
{
  return 0x01;
}
int vshSysconReturnFalse()
{
  return 0x00;
}

void _start() __attribute__((weak, alias("module_start")));

int module_start(SceSize argc, const void *args)
{

  hook = taiHookFunctionImport(&ref_hook,
                               TAI_MAIN_MODULE,
                               TAI_ANY_LIBRARY,
                               0xCEC8B917, // vshSysconHasWWAN
                               vshSysconReturnFalse);

  return SCE_KERNEL_START_SUCCESS;
}

int module_stop(SceSize argc, const void *args)
{

  if (hook >= 0)
    taiHookRelease(hook, ref_hook);

  return SCE_KERNEL_STOP_SUCCESS;
}
