
void FUN_004138a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  CHAR local_204 [256];
  undefined local_104 [256];
  uint local_4;
  
  local_4 = DAT_004d1630 ^ (uint)local_204;
  iVar3 = 0;
  if ((DAT_004be020 != 0) && (DAT_004be01c != 0)) {
    iVar3 = (int)(DAT_004be02c * DAT_004be030 + (DAT_004be02c * DAT_004be030 >> 0x1f & 0xffU)) >> 8;
  }
  FUN_0040eb80(0,0);
  FUN_004137f0();
  DAT_00b6f210 = (undefined4 *)operator_new(0x18);
  if (DAT_00b6f210 == (undefined4 *)0x0) {
    DAT_00b6f210 = (undefined4 *)0x0;
  }
  else {
    *DAT_00b6f210 = 0;
    DAT_00b6f210[1] = 0;
    DAT_00b6f210[2] = 0;
    DAT_00b6f210[3] = 0;
    DAT_00b6f210[4] = 0;
  }
  if (DAT_00a391f0 == 1) {
    if (DAT_00a730ac == 0) {
      if (DAT_00a730b0 == 0) goto LAB_00413a10;
    }
    else if (DAT_00a730b0 == 0) {
      FUN_0044d4e0("SoftWare\\Leaf\\WHITE ALBUM2 -introductory chapter-");
      iVar2 = FUN_0044d6e0("InstallDir",local_104);
      if (iVar2 != 0) {
        local_104[0] = 0;
      }
      if (DAT_004be04c == 1) {
        wsprintfA(local_204,"%s%s1.pak",local_104,param_1);
      }
      else if (DAT_004be04c == 2) {
        wsprintfA(local_204,"%s%s0.pak",local_104,param_1);
      }
      else {
        wsprintfA(local_204,"%s%s2.pak",local_104,param_1);
      }
      goto LAB_00413a4b;
    }
    if (DAT_004be04c == 1) {
      pcVar4 = "IC\\%s1.pak";
    }
    else if (DAT_004be04c == 2) {
      pcVar4 = "IC\\%s0.pak";
    }
    else {
      pcVar4 = "IC\\%s2.pak";
    }
  }
  else {
LAB_00413a10:
    if (DAT_004be04c == 1) {
      pcVar4 = "%s1.pak";
    }
    else if (DAT_004be04c == 2) {
      pcVar4 = "%s0.pak";
    }
    else {
      pcVar4 = "%s2.pak";
    }
  }
  wsprintfA(local_204,pcVar4,param_1);
LAB_00413a4b:
  DAT_00b6f210[5] = param_2;
  iVar3 = FUN_0044bb00(local_204,DAT_004c2224,iVar3);
  if (iVar3 == 0) {
    FUN_0044beb0(0,&DAT_004a27c0,param_1);
    puVar1 = DAT_00b6f210;
    if (DAT_00b6f210 != (undefined4 *)0x0) {
      FUN_0044b8b0();
      FUN_004750ca(puVar1);
    }
    DAT_00b6f210 = (undefined4 *)0x0;
  }
  ___security_check_cookie_4();
  return;
}

