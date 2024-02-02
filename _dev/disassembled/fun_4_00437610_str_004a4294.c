
void FUN_00437610(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_30c;
  CHAR local_308 [256];
  undefined local_208;
  undefined local_207 [259];
  CHAR local_104 [256];
  uint local_4;
  
  local_4 = DAT_004d1630 ^ (uint)&local_30c;
  local_30c = param_3;
  local_208 = 0;
  _memset(local_207,0,0x103);
  if (param_1 == 0) {
    iVar1 = FUN_0044c2c0(param_2,param_3);
    if (iVar1 == 0) {
      FUN_0044beb0(0,&DAT_004a4240,param_2);
    }
  }
  else {
    wsprintfA(local_308,"%s\\%s",param_1,param_2);
    wsprintfA(local_104,"%s\\buf\\%s",param_1,param_2);
    CopyFileA(local_308,local_104,1);
    wsprintfA(local_308,"%s\\%s",param_1,param_2);
    iVar1 = FUN_0044c2c0(local_308,param_3);
    if (iVar1 == 0) {
      wsprintfA(local_308,"patch.pak");
      iVar1 = FUN_00437100(local_308,param_2,local_30c);
      if (iVar1 == 0) {
        wsprintfA(local_308,"%s.pak",param_1);
        iVar1 = FUN_00437100(local_308,param_2,local_30c);
        if (iVar1 == 0) {
          wsprintfA(local_308,"IC\\%s.pak",param_1);
          iVar1 = FUN_00437100(local_308,param_2,local_30c);
          if (iVar1 == 0) {
            wsprintfA(local_308,"pak\\%s.pak",param_1);
            iVar1 = FUN_00437100(local_308,param_2,local_30c);
            if (iVar1 == 0) {
              FUN_0044d4e0("SoftWare\\Leaf\\WHITE ALBUM2 -introductory chapter-");
              iVar1 = FUN_0044d6e0("InstallDir",&local_208);
              if (iVar1 != 0) {
                local_208 = 0;
              }
              wsprintfA(local_308,"%s%s.pak",&local_208,param_1);
              iVar1 = FUN_00437100(local_308,param_2,local_30c);
              if (iVar1 == 0) {
                FUN_0044beb0(0,&DAT_004a4278,local_308,param_2);
                FUN_0044beb0(0,&DAT_004a425c,param_1,param_2);
              }
            }
          }
        }
      }
    }
  }
  ___security_check_cookie_4();
  return;
}

