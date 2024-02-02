
void FUN_00415920(int param_1,int param_2,undefined4 *param_3,int *param_4,int param_5)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  int iVar9;
  float10 fVar10;
  undefined auStack_3c8 [4];
  uint uStack_3c4;
  undefined4 uStack_3b4;
  uint uStack_3b0;
  undefined4 *local_3ac;
  int iStack_3a8;
  int *local_3a4;
  undefined **local_3a0 [4];
  undefined **local_390;
  undefined **local_38c;
  undefined *local_388;
  undefined *local_384;
  undefined *local_380;
  undefined *local_37c;
  undefined **local_378;
  undefined **local_374;
  undefined **local_370;
  undefined **local_36c;
  undefined **local_368;
  undefined **local_364;
  undefined **local_360;
  undefined **local_35c;
  undefined **local_358;
  undefined **local_354;
  undefined **local_350;
  undefined **local_34c;
  undefined **local_348;
  undefined **local_344;
  undefined **local_340;
  undefined **local_33c;
  undefined **local_338;
  undefined **local_334;
  undefined **local_330;
  undefined **local_32c;
  undefined **local_328;
  undefined **local_324;
  undefined **local_320;
  undefined **local_31c;
  undefined **local_318;
  undefined **local_314;
  undefined **local_310;
  undefined **local_30c;
  undefined local_308 [248];
  CHAR local_210 [256];
  CHAR local_110 [256];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004a017c;
  local_c = ExceptionList;
  local_10 = DAT_004d1630 ^ (uint)auStack_3c8;
  uVar3 = DAT_004d1630 ^ (uint)&stack0xfffffc28;
  ExceptionList = &local_c;
  local_3ac = param_3;
  local_3a4 = param_4;
  if (param_5 != 0) {
    (&DAT_00526822)[param_1 * 0x3a] = (ushort)((&DAT_00526822)[param_1 * 0x3a] == 0);
  }
  local_388 = &DAT_004a2988;
  local_384 = &DAT_004a2988;
  local_380 = &DAT_004a2988;
  local_37c = &DAT_004a2988;
  DAT_004c223c = 1;
  local_3a0[0] = &PTR_DAT_004a2980;
  local_3a0[1] = &PTR_DAT_004a297c;
  local_3a0[2] = &PTR_DAT_004a2978;
  local_3a0[3] = &PTR_DAT_004a2974;
  local_390 = &PTR_DAT_004a2970;
  local_38c = &PTR_DAT_004a296c;
  local_378 = &PTR_DAT_004a2968;
  local_374 = &PTR_DAT_004a2964;
  local_370 = &PTR_DAT_004a2960;
  local_36c = &PTR_DAT_004a295c;
  local_368 = &PTR_DAT_004a2958;
  local_364 = &PTR_DAT_004a2954;
  local_360 = &PTR_DAT_004a2950;
  local_35c = &PTR_DAT_004a2984;
  local_358 = &PTR_DAT_004a294c;
  local_354 = &PTR_DAT_004a2948;
  local_350 = &PTR_DAT_004a2944;
  local_34c = &PTR_DAT_004a2940;
  local_348 = &PTR_DAT_004a293c;
  local_344 = &PTR_DAT_004a2938;
  local_340 = &PTR_DAT_004a2934;
  local_33c = &PTR_DAT_004a2930;
  local_338 = &PTR_DAT_004a292c;
  local_334 = &PTR_DAT_004a2928;
  local_330 = &PTR_DAT_004a2924;
  local_32c = &PTR_DAT_004a2984;
  local_328 = &PTR_DAT_004a2920;
  local_324 = &PTR_DAT_004a291c;
  local_320 = &PTR_DAT_004a2918;
  local_31c = &PTR_DAT_004a2914;
  local_318 = &PTR_DAT_004a2910;
  local_314 = &PTR_DAT_004a290c;
  local_310 = &PTR_DAT_004a2908;
  local_30c = &PTR_DAT_004a2904;
  _memset(local_308,0,0xf8);
  iVar9 = param_1 * 0x74;
  wsprintfA(local_210,"%s%06d.tga",local_3a0[(short)(&DAT_005267f6)[param_1 * 0x3a]],
            (&DAT_005267f8)[param_1 * 0x1d]);
  uVar4 = FUN_00437b60(&DAT_005218b0,uVar3);
  iVar5 = FUN_004374b0(uVar4);
  if (iVar5 == 0) {
    puVar8 = *(undefined4 **)(&DAT_004be328 + DAT_005218ac * 4);
  }
  else {
    puVar8 = &DAT_005218b0;
  }
  wsprintfA((LPSTR)local_3a0,"char\\%s",local_210);
  wsprintfA(local_110,"char\\buf\\%s",local_210);
  CopyFileA((LPCSTR)local_3a0,local_110,1);
  iStack_3a8 = FUN_004493b0((short)(&DAT_00526822)[param_1 * 0x3a] + 0x75 + param_1 * 2,local_210,
                            0x802,0,0,puVar8,&DAT_005218f0,DAT_00521914,&DAT_004a28dc,0x80,0);
  pcVar6 = local_210;
  uStack_3b0 = 0xf;
  uStack_3b4 = 0;
  uStack_3c4 = uStack_3c4 & 0xffffff00;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00414630(local_210,(int)pcVar6 - (int)(local_210 + 1));
  uStack_4 = 2;
  puVar7 = (undefined *)FUN_00415770(auStack_3c8);
  *puVar7 = 1;
  uStack_4 = 0xffffffff;
  if (0xf < uStack_3b0) {
    FUN_004750ca(uStack_3c4);
  }
  pcVar6 = local_210;
  uStack_3b0 = 0xf;
  uStack_3b4 = 0;
  uStack_3c4 = uStack_3c4 & 0xffffff00;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00414630(local_210,(int)pcVar6 - (int)(local_210 + 1));
  uStack_4 = 3;
  puVar7 = (undefined *)FUN_00415770(auStack_3c8);
  *puVar7 = 1;
  uStack_4 = 0xffffffff;
  if (0xf < uStack_3b0) {
    FUN_004750ca(uStack_3c4);
  }
  piVar2 = local_3a4;
  puVar8 = local_3ac;
  if (iStack_3a8 == 0) {
    pcVar6 = local_210;
    uStack_3b0 = 0xf;
    uStack_3b4 = 0;
    uStack_3c4 = uStack_3c4 & 0xffffff00;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00414630(local_210,(int)pcVar6 - (int)(local_210 + 1));
    uStack_4 = 4;
    puVar7 = (undefined *)FUN_00415770(auStack_3c8);
    *puVar7 = 1;
    uStack_4 = 0xffffffff;
    if (0xf < uStack_3b0) {
      FUN_004750ca(uStack_3c4);
    }
    pcVar6 = local_210;
    uStack_3b0 = 0xf;
    uStack_3b4 = 0;
    uStack_3c4 = uStack_3c4 & 0xffffff00;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00414630(local_210,(int)pcVar6 - (int)(local_210 + 1));
    uStack_4 = 5;
    puVar7 = (undefined *)FUN_00415770(auStack_3c8);
    *puVar7 = 1;
    if (0xf < uStack_3b0) {
      FUN_004750ca(uStack_3c4);
    }
  }
  else {
    FUN_00449440((short)(&DAT_00526822)[param_1 * 0x3a] + 0x75 + param_1 * 2,local_3ac,local_3a4);
    iVar5 = (int)(short)(&DAT_00526822)[param_1 * 0x3a] + param_1 * 2;
    thunk_FUN_00439640(iVar5 + 0x379,iVar5 + 0x75,
                       (short)(&DAT_005267fe)[param_1 * 0x3a] + 2 + param_2,1);
    local_3ac = (undefined4 *)(0x2d0 - *piVar2);
    fVar10 = (float10)FUN_00402270(*puVar8,param_1,1,(float)(int)local_3ac);
    FUN_00449910((short)(&DAT_00526822)[param_1 * 0x3a] + 0x379 + param_1 * 2,(float)fVar10);
    thunk_FUN_0043a4b0((short)(&DAT_00526822)[param_1 * 0x3a] + 0x379 + param_1 * 2,2);
    thunk_FUN_0043b220((short)(&DAT_00526822)[param_1 * 0x3a] + 0x379 + param_1 * 2,
                       (&DAT_00526810)[iVar9],(&DAT_00526811)[iVar9],(&DAT_00526812)[iVar9]);
    thunk_FUN_0043b2a0((short)(&DAT_00526822)[param_1 * 0x3a] + 0x379 + param_1 * 2,
                       (int)(short)(&DAT_00526816)[param_1 * 0x3a]);
    thunk_FUN_0043aef0((short)(&DAT_00526822)[param_1 * 0x3a] + 0x379 + param_1 * 2,0);
    iVar5 = FUN_00437ba0();
    if (iVar5 != 0) {
      uVar3 = DAT_005216d8;
      if ((&DAT_005267f2)[param_1 * 0x3a] == 3) {
        uVar3 = (uint)(DAT_005216d8 == 0);
      }
      thunk_FUN_0043a470((short)(&DAT_00526822)[param_1 * 0x3a] + 0x379 + param_1 * 2,uVar3 + 0x105)
      ;
    }
  }
  ExceptionList = local_c;
  ___security_check_cookie_4();
  return;
}

