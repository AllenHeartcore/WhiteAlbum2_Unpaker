
DWORD FUN_00437100(LPCSTR param_1,LPCSTR param_2,void **param_3)

{
  HANDLE pvVar1;
  SIZE_T SVar2;
  HANDLE hHeap;
  LPVOID pvVar3;
  void *pvVar4;
  void *pvVar5;
  LPCSTR pCVar6;
  int *piVar7;
  DWORD DVar8;
  SIZE_T SVar9;
  int iVar10;
  DWORD local_24;
  HANDLE pvStack_20;
  LPCSTR pCStack_1c;
  void *pvStack_18;
  LONG LStack_14;
  int aiStack_10 [3];
  int iStack_4;
  
  local_24 = 0;
  pvVar1 = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (pvVar1 != (HANDLE)0xffffffff) {
    pvStack_20 = pvVar1;
    ReadFile(pvVar1,aiStack_10,0x10,&local_24,(LPOVERLAPPED)0x0);
    if (aiStack_10[0] == 0x5041434b) {
      SVar2 = iStack_4 * 0x2c;
      iVar10 = 0;
      DVar8 = 0;
      SVar9 = SVar2;
      hHeap = GetProcessHeap();
      pvVar3 = HeapAlloc(hHeap,DVar8,SVar2);
      pvVar4 = _memset(pvVar3,iVar10,SVar9);
      pvStack_18 = pvVar4;
      ReadFile(pvVar1,pvVar4,iStack_4 * 0x2c,&local_24,(LPOVERLAPPED)0x0);
      pCVar6 = (LPCSTR)0x0;
      if (0 < iStack_4) {
        pCStack_1c = (LPCSTR)((int)pvVar4 + 4);
        do {
          iVar10 = lstrcmpiA(pCStack_1c,param_2);
          if (iVar10 == 0) {
            piVar7 = (int *)((int)pvVar4 + (int)pCVar6 * 0x2c);
            LStack_14 = 0;
            pCStack_1c = pCVar6;
            SetFilePointer(pvStack_20,*(LONG *)((int)pvVar4 + (int)pCVar6 * 0x2c + 0x24),&LStack_14,
                           0);
            SVar9 = piVar7[10];
            iVar10 = 0;
            DVar8 = 0;
            if (*piVar7 == 0) {
              SVar2 = SVar9;
              pvVar1 = GetProcessHeap();
              pvVar3 = HeapAlloc(pvVar1,DVar8,SVar9);
              pvVar4 = _memset(pvVar3,iVar10,SVar2);
              *param_3 = pvVar4;
              ReadFile(pvStack_20,pvVar4,piVar7[10],&local_24,(LPOVERLAPPED)0x0);
            }
            else {
              SVar2 = SVar9;
              pvVar1 = GetProcessHeap();
              pvVar3 = HeapAlloc(pvVar1,DVar8,SVar9);
              pvVar4 = _memset(pvVar3,iVar10,SVar2);
              ReadFile(pvStack_20,pvVar4,piVar7[10],&local_24,(LPOVERLAPPED)0x0);
              SVar9 = *(SIZE_T *)((int)pvVar4 + 4);
              iVar10 = 0;
              DVar8 = 0;
              SVar2 = SVar9;
              pvVar1 = GetProcessHeap();
              pvVar3 = HeapAlloc(pvVar1,DVar8,SVar9);
              pvVar5 = _memset(pvVar3,iVar10,SVar2);
              *param_3 = pvVar5;
              local_24 = FUN_00436df0(pvVar5,(int)pvVar4 + 8,piVar7[10] + -8,
                                      *(undefined4 *)((int)pvVar4 + 4));
              if (*(DWORD *)((int)pvVar4 + 4) != local_24) {
                FUN_0044beb0(0,&DAT_004a40f0,param_2);
              }
              DVar8 = 0;
              pvVar1 = GetProcessHeap();
              HeapFree(pvVar1,DVar8,pvVar4);
              pCVar6 = pCStack_1c;
            }
            pvVar4 = pvStack_18;
            if (pCVar6 != (LPCSTR)0xffffffff) goto LAB_004372d9;
            break;
          }
          pCStack_1c = pCStack_1c + 0x2c;
          pCVar6 = pCVar6 + 1;
        } while ((int)pCVar6 < iStack_4);
      }
      local_24 = 0;
LAB_004372d9:
      pvVar1 = pvStack_20;
      if (pvVar4 != (void *)0x0) {
        DVar8 = 0;
        pvVar1 = GetProcessHeap();
        HeapFree(pvVar1,DVar8,pvVar4);
        pvVar1 = pvStack_20;
      }
    }
    CloseHandle(pvVar1);
  }
  return local_24;
}

