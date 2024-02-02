
int FUN_00437010(LPCSTR param_1,LPCSTR param_2)

{
  HANDLE hFile;
  SIZE_T dwBytes;
  HANDLE pvVar1;
  LPVOID _Dst;
  void *lpBuffer;
  int iVar2;
  int iVar3;
  LPCSTR lpString1;
  DWORD DVar4;
  int iVar5;
  SIZE_T _Size;
  DWORD local_18;
  int local_14;
  int aiStack_10 [3];
  int iStack_4;
  
  local_14 = 0;
  local_18 = 0;
  hFile = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return 0;
  }
  ReadFile(hFile,aiStack_10,0x10,&local_18,(LPOVERLAPPED)0x0);
  if (aiStack_10[0] == 0x5041434b) {
    dwBytes = iStack_4 * 0x2c;
    iVar5 = 0;
    DVar4 = 0;
    _Size = dwBytes;
    pvVar1 = GetProcessHeap();
    _Dst = HeapAlloc(pvVar1,DVar4,dwBytes);
    lpBuffer = _memset(_Dst,iVar5,_Size);
    ReadFile(hFile,lpBuffer,iStack_4 * 0x2c,&local_18,(LPOVERLAPPED)0x0);
    iVar3 = 0;
    iVar5 = local_14;
    if (0 < iStack_4) {
      lpString1 = (LPCSTR)((int)lpBuffer + 4);
      do {
        iVar2 = lstrcmpiA(lpString1,param_2);
        iVar3 = iVar3 + 1;
        iVar5 = iVar3;
        if (iVar2 == 0) break;
        lpString1 = lpString1 + 0x2c;
        iVar5 = local_14;
      } while (iVar3 < iStack_4);
    }
    local_14 = iVar5;
    if (lpBuffer != (void *)0x0) {
      DVar4 = 0;
      pvVar1 = GetProcessHeap();
      HeapFree(pvVar1,DVar4,lpBuffer);
    }
  }
  CloseHandle(hFile);
  return local_14;
}

