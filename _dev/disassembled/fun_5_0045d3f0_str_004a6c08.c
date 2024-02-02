
void __thiscall FUN_0045d3f0(int param_1_00,LPCSTR param_1,int param_3)

{
  HANDLE hFile;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  HANDLE *ppvVar5;
  LPCSTR local_274;
  int iStack_270;
  int local_26c;
  DWORD DStack_268;
  undefined auStack_264 [4];
  uint uStack_260;
  HANDLE local_25c;
  uint uStack_258;
  CHAR aCStack_252 [262];
  LPVOID pvStack_14c;
  undefined4 uStack_148;
  int iStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_12c;
  undefined auStack_124 [4];
  int iStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  CHAR local_114 [260];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a06bb;
  local_c = ExceptionList;
  local_10 = DAT_004d1630 ^ (uint)&local_274;
  ExceptionList = &local_c;
  local_274 = param_1;
  local_26c = param_1_00;
  FUN_0045b280(DAT_004d1630 ^ (uint)&stack0xfffffd7c);
  local_4 = 0;
  wsprintfA(local_114,"%s.PAK",param_1);
  hFile = CreateFileA(local_114,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    FUN_0045b300();
  }
  else {
    local_25c = hFile;
    lstrcpyA(aCStack_252,param_1);
    ReadFile(hFile,auStack_264,8,&DStack_268,(LPOVERLAPPED)0x0);
    uStack_258 = uStack_260;
    pvStack_14c = (LPVOID)FUN_00478b64(-(uint)((int)((ulonglong)uStack_260 * 0x28 >> 0x20) != 0) |
                                       (uint)((ulonglong)uStack_260 * 0x28));
    if ((param_3 == -1) || (*(int *)(param_1_00 + 0x18) <= param_3)) {
      FUN_0045d340(&local_25c);
    }
    else {
      iVar1 = FUN_004578c0(param_3);
      if (*(int *)(iVar1 + 0x110) != 0) {
        iVar1 = FUN_004578c0(param_3);
        FUN_00478b59(*(undefined4 *)(iVar1 + 0x110));
        iVar1 = FUN_004578c0(param_3);
        *(undefined4 *)(iVar1 + 0x110) = 0;
      }
      ppvVar5 = &local_25c;
      FUN_004578c0(param_3);
      FUN_0045c240(ppvVar5);
    }
    ReadFile(hFile,pvStack_14c,uStack_260 * 0x28,&DStack_268,(LPOVERLAPPED)0x0);
    iStack_270 = 0;
    if (0 < (int)uStack_258) {
      iVar1 = 0;
      do {
        iVar4 = 0;
        iVar2 = lstrlenA((LPCSTR)(iVar1 + (int)pvStack_14c));
        iVar3 = iVar1;
        if (0 < iVar2) {
          do {
            *(byte *)(iVar3 + (int)pvStack_14c) = ~*(byte *)(iVar3 + (int)pvStack_14c);
            iVar4 = iVar4 + 1;
            iVar2 = lstrlenA((LPCSTR)(iVar1 + (int)pvStack_14c));
            param_1_00 = local_26c;
            iVar3 = iVar3 + 1;
          } while (iVar4 < iVar2);
        }
        iStack_270 = iStack_270 + 1;
        iVar1 = iVar1 + 0x28;
        param_1 = local_274;
      } while (iStack_270 < (int)uStack_258);
    }
    if ((param_3 == -1) || (*(int *)(param_1_00 + 0x18) <= param_3)) {
      *(int *)(param_1_00 + 0x18) = *(int *)(param_1_00 + 0x18) + 1;
      param_3 = *(int *)(param_1_00 + 0x18) + -1;
    }
    FUN_0045c760(param_1,param_3,0);
    if (iStack_120 != 0) {
      FUN_0045a1f0(iStack_120,uStack_11c,auStack_124,local_274);
      FUN_004750ca(iStack_120);
    }
    iStack_120 = 0;
    uStack_11c = 0;
    uStack_118 = 0;
    FUN_004750ca(uStack_12c);
    if (iStack_13c != 0) {
      FUN_004750ca(iStack_13c);
    }
    iStack_13c = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    FUN_004750ca(uStack_148);
  }
  ExceptionList = local_c;
  ___security_check_cookie_4();
  return;
}

