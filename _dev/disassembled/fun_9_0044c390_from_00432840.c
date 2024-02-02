
undefined4 FUN_0044c390(LPCSTR param_1)

{
  HANDLE hObject;
  
  hObject = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    return 0;
  }
  CloseHandle(hObject);
  return 1;
}

