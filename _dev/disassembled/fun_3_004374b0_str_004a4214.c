
void FUN_004374b0(int param_1,undefined4 param_2)

{
  int iVar1;
  CHAR local_208 [256];
  undefined local_108;
  undefined local_107 [259];
  uint local_4;
  
  local_4 = DAT_004d1630 ^ (uint)local_208;
  if (param_1 == 0) {
    FUN_0044c390(param_2);
    ___security_check_cookie_4();
    return;
  }
  local_108 = 0;
  _memset(local_107,0,0x103);
  wsprintfA(local_208,"%s.pak",param_1);
  iVar1 = FUN_00437010(local_208,param_2);
  if (iVar1 == 0) {
    wsprintfA(local_208,"IC\\%s.pak",param_1);
    iVar1 = FUN_00437010(local_208,param_2);
    if (iVar1 == 0) {
      wsprintfA(local_208,"pak\\%s.pak",param_1);
      iVar1 = FUN_00437010(local_208,param_2);
      if (iVar1 == 0) {
        wsprintfA(local_208,"%s\\%s",param_1,param_2);
        iVar1 = FUN_0044c390(local_208);
        if (iVar1 == 0) {
          FUN_0044d4e0("SoftWare\\Leaf\\WHITE ALBUM2 -introductory chapter-");
          iVar1 = FUN_0044d6e0("InstallDir",&local_108);
          if (iVar1 == 0) {
            wsprintfA(local_208,"%s%s.pak",&local_108,param_1);
            FUN_00437010(local_208,param_2);
          }
        }
      }
    }
  }
  ___security_check_cookie_4();
  return;
}

