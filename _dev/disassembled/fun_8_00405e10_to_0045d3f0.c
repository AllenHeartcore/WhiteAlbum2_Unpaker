
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405e10(void)

{
  uint uVar1;
  int iVar2;
  void *local_21c;
  CHAR local_218 [260];
  CHAR local_114;
  undefined local_113 [259];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049ff7c;
  local_c = ExceptionList;
  local_10 = DAT_004d1630 ^ (uint)&local_21c;
  uVar1 = DAT_004d1630 ^ (uint)&stack0xfffffddc;
  ExceptionList = &local_c;
  DAT_004bf63c = 0xffffffff;
  _DAT_004bf668 = 0xffffffff;
  _DAT_004bf694 = 0xffffffff;
  _DAT_004bf6c0 = 0xffffffff;
  local_21c = operator_new(0x1c);
  local_4 = 0;
  if (local_21c == (void *)0x0) {
    DAT_00bc663c = 0;
  }
  else {
    DAT_00bc663c = FUN_0045d210(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_0045d3f0(&PTR_DAT_004a210c,0xffffffff);
  FUN_0045d3f0(&DAT_004a2108,0xffffffff);
  FUN_0045d3f0("Voice",0xffffffff);
  local_114 = '\0';
  _memset(local_113,0,0x103);
  if (DAT_00a730b0 == 1) {
    wsprintfA(&local_114,(LPCSTR)&PTR_DAT_004a20fc);
    wsprintfA(local_218,"%s%s",&local_114,&PTR_DAT_004a210c);
    FUN_0045d3f0(local_218,0xffffffff);
    wsprintfA(local_218,"%s%s",&local_114,&DAT_004a2108);
    FUN_0045d3f0(local_218,0xffffffff);
    wsprintfA(local_218,"%s%s",&local_114,"Voice");
  }
  else {
    FUN_0044d4e0("SoftWare\\Leaf\\WHITE ALBUM2 -introductory chapter-");
    iVar2 = FUN_0044d6e0("InstallDir",&local_114);
    if (iVar2 != 0) goto LAB_00406041;
    wsprintfA(local_218,"%s%s",&local_114,&PTR_DAT_004a210c);
    FUN_0045d3f0(local_218,0xffffffff);
    wsprintfA(local_218,"%s%s",&local_114,&DAT_004a2108);
    FUN_0045d3f0(local_218,0xffffffff);
    wsprintfA(local_218,"%s%s",&local_114,"Voice");
  }
  FUN_0045d3f0(local_218,0xffffffff);
LAB_00406041:
  local_21c = operator_new(0xe4);
  local_4 = 1;
  if (local_21c == (void *)0x0) {
    DAT_00bc668c = 0;
  }
  else {
    DAT_00bc668c = FUN_0045f440(DAT_004c2224,DAT_00bc663c,0,1,2,3,4,5,10,10,10,0);
  }
  local_4 = 0xffffffff;
  DAT_00a390c8 = 0xffffffff;
  DAT_00a39100 = 0xffffffff;
  _DAT_00a39138 = 0xffffffff;
  _DAT_00a39170 = 0xffffffff;
  FUN_00405710(&DAT_004bf70c,0x23fb);
  FUN_00405710(&DAT_004bf710,0x23fc);
  FUN_00405710(&DAT_004bf714,0x23fd);
  FUN_00405710(&DAT_004bf718,0x23fe);
  FUN_00405710(&DAT_004bf71c,0x2337);
  ExceptionList = local_c;
  ___security_check_cookie_4();
  return;
}

