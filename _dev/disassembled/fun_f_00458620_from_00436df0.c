
int __thiscall FUN_00458620(int param_1_00,uint param_1,LPCSTR param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_8;
  int local_4;
  
  if ((uint)((*(int *)(param_1_00 + 0x10) - *(int *)(param_1_00 + 0xc)) / 0x148) <= param_1) {
    FUN_00475f14();
  }
  iVar2 = param_1 * 0x148;
  iVar1 = *(int *)(iVar2 + 4 + *(int *)(param_1_00 + 0xc));
  local_4 = 0;
  if ((uint)((*(int *)(param_1_00 + 0x10) - *(int *)(param_1_00 + 0xc)) / 0x148) <= param_1) {
    FUN_00475f14();
  }
  iVar1 = iVar1 / 2;
  local_8 = *(int *)(*(int *)(param_1_00 + 0xc) + 4 + iVar2);
  while( true ) {
    while( true ) {
      iVar3 = iVar1;
      if ((uint)((*(int *)(param_1_00 + 0x10) - *(int *)(param_1_00 + 0xc)) / 0x148) <= param_1) {
        FUN_00475f14();
      }
      iVar1 = FUN_00433d10(*(int *)(*(int *)(param_1_00 + 0xc) + iVar2 + 0x110) + iVar3 * 0x28,
                           param_2);
      if (iVar1 == 0) {
        if (iVar3 != -1) {
          return iVar3;
        }
        goto LAB_00458723;
      }
      if (-1 < iVar1) break;
      if (local_4 == iVar3) goto LAB_00458719;
      iVar1 = (iVar3 + local_8) / 2;
      local_4 = iVar3;
    }
    if (local_8 == iVar3) break;
    iVar1 = (local_4 + iVar3) / 2;
    local_8 = iVar3;
  }
LAB_00458719:
  iVar3 = -1;
LAB_00458723:
  if (param_3 != 0) {
    if ((uint)((*(int *)(param_1_00 + 0x10) - *(int *)(param_1_00 + 0xc)) / 0x148) <= param_1) {
      FUN_00475f14();
    }
    (*(code *)PTR_FUN_004c227c)(&DAT_004a6bc0,*(int *)(param_1_00 + 0xc) + 10 + iVar2,param_2);
    MessageBoxA((HWND)0x0,param_2,&DAT_004a6bb0,0x10);
  }
  return iVar3;
}

