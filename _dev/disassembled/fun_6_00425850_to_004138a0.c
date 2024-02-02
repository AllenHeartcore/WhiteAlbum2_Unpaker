
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00425850(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  float10 fVar21;
  char *pcVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float local_1c;
  int *local_14;
  int *local_10;
  
  iVar3 = FUN_0044b6f0(0xffffffff);
  iVar4 = FUN_00401200(0);
  iVar5 = FUN_00401200(3);
  FUN_00401200(4);
  iVar6 = FUN_00401200(5);
  uVar7 = FUN_00401200(0x14);
  uVar8 = FUN_00401200(0x15);
  uVar9 = FUN_00401200(0x16);
  uVar10 = FUN_00401200(0x17);
  uVar11 = FUN_00401200(0x18);
  uVar12 = FUN_00401200(0x19);
  uVar13 = FUN_00401200(0x1e);
  uVar14 = FUN_00401200(0x1f);
  uVar15 = FUN_00401200(0x20);
  uVar16 = FUN_00401200(0x21);
  uVar16 = uVar7 & 1 & uVar8 & uVar9 & uVar10 & uVar11 & uVar12 & uVar13 & uVar14 & uVar15 & uVar16;
  switch(DAT_00a72f10) {
  case 0:
    EnableMenuItem(DAT_004c2230,0x9c84,1);
    if (DAT_004be048 == 0) {
      FUN_00406d50(0);
      DAT_00a391f0 = 0;
      FUN_004138a0(&DAT_004a3258,0);
      DAT_00a72f10 = 1;
      FUN_00407900();
      return -1;
    }
    goto LAB_00425a6e;
  case 1:
    iVar3 = FUN_00409d20();
    if (iVar3 != 0) break;
    DAT_00a72f0c = 0;
    if (DAT_00a730b0 != 1) {
      iVar3 = FUN_00401200(0xd2);
      DAT_00a72f10 = (-(uint)(iVar3 != 0) & 0xfffffffe) + 4;
      FUN_00407900();
      return -1;
    }
    iVar3 = FUN_00401200(0xd2);
    if ((iVar3 != 0) || (iVar3 = FUN_00401200(0xca), iVar3 != 0)) {
      DAT_00a72f10 = 2;
      FUN_00407900();
      return -1;
    }
    goto LAB_00425a6e;
  case 2:
    if (2 < (int)DAT_00a72f0c) {
      if ((DAT_00a730b0 == 1) && (iVar3 = FUN_00401200(0xd2), iVar3 == 0)) {
        FUN_00405370(0x68,1);
        DAT_00a391f0 = 1;
        FUN_004138a0(&DAT_004a3250,0);
      }
      else {
        DAT_00a391f0 = 0;
        FUN_004138a0(&DAT_004a3248,0);
      }
      DAT_00a72f10 = 3;
    }
    DAT_00a72f0c = DAT_00a72f0c + 1;
    FUN_00407900();
    return -1;
  case 3:
    iVar3 = FUN_00409d20();
    if (iVar3 != 0) break;
    DAT_00a72f0c = 0;
LAB_00425a6e:
    DAT_00a72f10 = 4;
    FUN_00407900();
    return -1;
  case 4:
    EnableMenuItem(DAT_004c2230,0x9c84,1);
    FUN_004493b0(0x1c4,&DAT_004a2bb4,0x805,0,0,0,0,0x100,&PTR_DAT_004a2bc0,0x100,0);
    FUN_004493b0(0x1c5,&DAT_004a2ba8,0x805,0,0,0,0,0x100,&PTR_DAT_004a2bc0,0x100,0);
    FUN_004493b0(0x1c6,&DAT_004a2b98,0x805,0,0,0,0,0x100,&PTR_DAT_004a2bc0,0x100,0);
    FUN_004493b0(0x1c7,&DAT_004a2b8c,0x805,0,0,0,0,0x100,&PTR_DAT_004a2bc0,0x100,0);
    FUN_004493b0(0,"T0000.tga",2,0,0,0,0,0x100,0,0x100,0);
    FUN_004493b0(1,"T0100.tga",2,0,0,0,0,0x100,0,0x100,0);
    if (DAT_00a730b0 == 0) {
      pcVar22 = "T0010.tga";
    }
    else {
      pcVar22 = "T0011.tga";
    }
    FUN_004493b0(2,pcVar22,2,0,0,0,0,0x100,0,0x100,0);
    FUN_004493b0(3,"T0020.tga",2,0,0,0,0,0x100,0,0x100,0);
    FUN_004493b0(4,"T0050.tga",2,0,0,0,0,0x100,0,0x100,0);
    FUN_004493b0(5,"T0101.tga",1,0,0,0,0,0x100,0,0x100,0);
    FUN_004493b0(6,"T0200.tga",1,0,0,0,0,0x100,0,0x100,0);
    FUN_004493b0(7,"T0201.tga",1,0,0,0,0,0x100,0,0x100,0);
    FUN_0040a3a0();
    _DAT_00a72f08 = 0x280;
    _DAT_00a72f04 = 0x168;
    FUN_0044b350();
    FUN_0044b070(0);
    thunk_FUN_0043b510(0,0,0,0,0);
    thunk_FUN_00439640(1,0,2,1);
    FUN_00449760(1,0,0,0,0,0x44a00000,0x44340000);
    _DAT_00a72f00 = 0.0;
    thunk_FUN_0043af30(1,0xff,0,0,0);
    FUN_00449990(1,0x42c80000,(float)_DAT_00a72f04);
    thunk_FUN_00439640(2,2,0x104e,0);
    FUN_00449760(2,0x43840000,0,0,0,0x443c0000,0x43e00000);
    thunk_FUN_0043aed0(2,1);
    thunk_FUN_0043aef0(2,2);
    FUN_00449990(2,0x44200000,0x43600000);
    thunk_FUN_00439640(3,3,0x104e,0);
    FUN_00449760(3,0x44780000,0x442b0000,0,0,0x43840000,0x41c00000);
    thunk_FUN_0043aed0(3,1);
    thunk_FUN_0043aef0(3,2);
    if ((DAT_00a730ac != 0) && (DAT_00a730b0 == 0)) {
      thunk_FUN_00439640(4,4,0x104e,0);
      FUN_00449760(4,0x43d80000,0x442b0000,0,0,0x43cc0000,0x41c00000);
      thunk_FUN_0043aed0(4,1);
      thunk_FUN_0043aef0(4,2);
    }
    thunk_FUN_00439640(0x29,7,0x104f,0);
    FUN_004497d0(0x29,0,0,0x43900000,0x42200000);
    FUN_004497a0(0x29,0x43f80000,0x44180000,0x43900000,0x42200000);
    thunk_FUN_00439640(0x2a,6,0x104f,0);
    FUN_004497d0(0x2a,0,0,0x43900000,0x41a00000);
    FUN_004497a0(0x2a,0x43f80000,0x44180000,0x43900000,0x41a00000);
    local_14 = (int *)0x168;
    local_10 = &DAT_004c00e8;
    iVar6 = 0;
    iVar3 = 0x15;
    do {
      iVar20 = *local_10;
      *(undefined4 *)((int)&DAT_00a72ea0 + iVar6) = 0;
      *(undefined4 *)((int)&DAT_00a72eb8 + iVar6) = 0;
      FUN_0044b210(0,iVar3 + -0x15,0x280 - iVar20 / 2,local_14,iVar20,0x20,1);
      iVar20 = iVar3 + -10;
      thunk_FUN_00439640(iVar20,1,0x1050,0);
      FUN_004497d0(iVar20,0,(float)(*(int *)((int)&DAT_004c0088 + iVar6) * 0x28),0x43a00000,
                   0x42200000);
      fVar1 = (float)(int)local_14;
      FUN_004497a0(iVar20,0x43f00000,fVar1,0x43a00000,0x42200000);
      fVar2 = (float)((int)local_14 + 0x14);
      FUN_00449990(iVar20,0x44200000,fVar2);
      thunk_FUN_00439640(iVar3,5,0x104e,0);
      FUN_004497d0(iVar3,0,0,0x43a00000,0x42200000);
      FUN_004497a0(iVar3,0x43f00000,fVar1,0x43a00000,0x42200000);
      FUN_00449990(iVar3,0x44200000,fVar2);
      iVar20 = iVar3 + 10;
      thunk_FUN_00439640(iVar20,5,0x104f,0);
      FUN_004497d0(iVar20,0,0x42200000,0x43a00000,0x42200000);
      FUN_004497a0(iVar20,0x43f00000,fVar1,0x43a00000,0x42200000);
      FUN_00449990(iVar20,0x44200000,fVar2);
      thunk_FUN_0043aed0(iVar20,3);
      local_10 = local_10 + 2;
      local_14 = (int *)((int)local_14 + 0x28);
      iVar20 = iVar3 + -0x14;
      iVar6 = iVar6 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar20 < 6);
    if ((iVar4 == 0) && (DAT_00a730b0 != 0)) {
      FUN_0044b310(0,3,0);
      thunk_FUN_004395d0(0xe);
      thunk_FUN_004395d0(0x18);
      thunk_FUN_004395d0(0x22);
    }
    DAT_004c0080 = 3;
    _DAT_004c01ac = 0xffffffff;
    DAT_004c01a8 = -1;
    DAT_00a72f0c = 0;
    thunk_FUN_0043b510(0,0,0,0,0);
    if (DAT_004be048 == 0) {
      DAT_004c223c = 1;
      DAT_00a72f10 = 6;
      FUN_00407900();
      return -1;
    }
    DAT_00a72f0c = 0;
    DAT_00a72f10 = 0xd;
    if (DAT_00b9191c < 0x6a4) {
      uVar25 = 200;
      uVar24 = 5;
      uVar23 = 0x703;
    }
    else {
      uVar25 = 400;
      uVar24 = 3;
      uVar23 = 0xf03;
    }
    FUN_0040fd20(uVar23,0,uVar24,0,uVar25,1,1);
    iVar3 = 0;
    iVar6 = 0x168;
    do {
      FUN_0044b210(1,iVar3,0x280 - (int)(&DAT_004c0148)[iVar3 * 2] / 2,iVar6,
                   (&DAT_004c0148)[iVar3 * 2],0x20,1);
      iVar6 = iVar6 + 0x28;
      iVar3 = iVar3 + 1;
    } while (iVar6 < 600);
    if ((iVar4 == 0) && (DAT_00a730b0 != 0)) {
      FUN_0044b310(1,0,0);
      FUN_0044b310(1,3,0);
    }
    if (iVar5 == 0) {
      FUN_0044b310(1,1,0);
      FUN_0044b310(1,2,0);
    }
    if (uVar16 == 0) {
      FUN_0044b310(1,4,0);
      FUN_00407900();
      return -1;
    }
    break;
  case 5:
    FUN_00406e00(1);
    iVar3 = 0;
    do {
      thunk_FUN_004395d0(iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x572);
    iVar3 = 0;
    do {
      thunk_FUN_0043e180(iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x1ba);
    iVar3 = 0;
    do {
      thunk_FUN_00448400(iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x13b);
    FUN_0044b350();
    FUN_0044b070(0);
    iVar3 = DAT_004c0080;
    FUN_004493b0(0x1c4,&DAT_004a2bb4,0x805,0,0,0,0,0x100,&PTR_DAT_004a2bc0,0x100,0);
    FUN_004493b0(0x1c5,&DAT_004a2ba8,0x805,0,0,0,0,0x100,&PTR_DAT_004a2bc0,0x100,0);
    FUN_004493b0(0x1c6,&DAT_004a2b98,0x805,0,0,0,0,0x100,&PTR_DAT_004a2bc0,0x100,0);
    FUN_004493b0(0x1c7,&DAT_004a2b8c,0x805,0,0,0,0,0x100,&PTR_DAT_004a2bc0,0x100,0);
    if ((iVar3 == 3) && (DAT_00a72e9c == 0)) {
      FUN_004178b0(&DAT_00a3a158,0);
      FUN_0040e960(&DAT_00a3a158);
    }
    DAT_00a72f0c = 0;
    DAT_00a72f10 = 0;
    thunk_FUN_0043b510(0x80,0x80,0x80,0,0);
    FUN_00407900();
    return iVar3;
  case 6:
    DAT_00a72f0c = DAT_00a72f0c + 1;
    uVar7 = 2;
    do {
      uVar7 = uVar7 >> 1;
    } while (uVar7 != 0);
    _DAT_00a72f00 = _DAT_00a72f00 + 1.2;
    FUN_00449760(1,0,0,0,_DAT_00a72f00,0x44a00000,0x44340000);
    uVar23 = FUN_00474c80();
    thunk_FUN_0043b510(uVar23,uVar23,uVar23,0,0);
    thunk_FUN_0043ac90(1,1);
    thunk_FUN_0043b1b0(1,0x80);
    if (0x1e < (int)DAT_00a72f0c) {
      DAT_00a72f0c = 0;
      thunk_FUN_0043b1b0(1,0x80);
      thunk_FUN_0043b510(0x80,0x80,0x80,0,0);
      DAT_00a72f10 = 7;
      FUN_00407900();
      return -1;
    }
    break;
  case 7:
    _DAT_00a72f00 = _DAT_00a72f00 + 1.2;
    FUN_00449760(1,0,0,0,_DAT_00a72f00,0x44a00000,0x44340000);
    if (DAT_00a72f0c == 0) {
      FUN_0040fa50(0x1f,0,1,0xff,0,0);
    }
    DAT_00a72f0c = DAT_00a72f0c + 1;
    thunk_FUN_0043ac90(2,1);
    thunk_FUN_0043ac90(3,1);
    thunk_FUN_0043ac90(4,1);
    thunk_FUN_0043ac90(5,1);
    uVar7 = ((int)DAT_00a72f0c < 1) - 1 & DAT_00a72f0c;
    if (0x3b < (int)uVar7) {
      uVar7 = 0x3c;
    }
    local_14 = (int *)(float)(0x3c - uVar7);
    uVar7 = 2;
    local_10 = (int *)0x3f800000;
    while( true ) {
      if ((uVar7 & 1) != 0) {
        local_10 = (int *)((float)local_10 * (float)local_14);
      }
      uVar7 = uVar7 >> 1;
      if (uVar7 == 0) break;
      local_14 = (int *)((float)local_14 * (float)local_14);
    }
    fVar21 = (float10)FUN_00474840();
    FUN_004499d0(2,((float)local_10 / (float)fVar21) / 5.0 + 1.0);
    uVar23 = FUN_00474c80();
    thunk_FUN_0043b2a0(2,uVar23);
    thunk_FUN_0043b2a0(3,uVar23);
    thunk_FUN_0043b2a0(4,uVar23);
    thunk_FUN_0043b2a0(5,uVar23);
    iVar5 = 0;
    local_14 = &DAT_004c0088;
    iVar3 = 0x15;
    do {
      if ((*local_14 != -1) && (((iVar4 != 0 || (DAT_00a730b0 == 0)) || (iVar3 != 0x18)))) {
        iVar6 = iVar3 + -10;
        thunk_FUN_0043ac90(iVar6,1);
        thunk_FUN_0043ac90(iVar3,1);
        uVar7 = (DAT_00a72f0c - iVar5) - 10;
        if (((int)uVar7 < 1) || ((int)uVar7 < 0x14)) {
          uVar7 = uVar7 & ((int)uVar7 < 1) - 1;
        }
        else {
          uVar7 = 0x14;
        }
        uVar23 = FUN_00474c80();
        thunk_FUN_0043b2a0(iVar6,uVar23);
        thunk_FUN_0043b2a0(iVar3,uVar23);
        uVar8 = 2;
        local_1c = 20.0 - (float)uVar7;
        local_10 = (int *)0x3f800000;
        while( true ) {
          if ((uVar8 & 1) != 0) {
            local_10 = (int *)(local_1c * (float)local_10);
          }
          uVar8 = uVar8 >> 1;
          if (uVar8 == 0) break;
          local_1c = local_1c * local_1c;
        }
        fVar21 = (float10)FUN_00474840();
        fVar1 = ((float)local_10 / (float)fVar21) / 5.0 + 1.0;
        FUN_004499d0(iVar6,fVar1);
        FUN_004499d0(iVar3,fVar1);
      }
      local_14 = local_14 + 1;
      iVar6 = iVar3 + -0x14;
      iVar5 = iVar5 + 10;
      iVar3 = iVar3 + 1;
    } while (iVar6 < 6);
    if ((0x50 < (int)DAT_00a72f0c) || (DAT_00a39770 != 0)) {
      DAT_00a72f0c = 0x1e;
      thunk_FUN_0043b2a0(2,0xff);
      FUN_004499d0(2,0x3f800000);
      thunk_FUN_0043b2a0(3,0xff);
      thunk_FUN_0043b2a0(4,0xff);
      thunk_FUN_0043b2a0(5,0xff);
      iVar4 = 0x15;
      iVar3 = 6;
      do {
        thunk_FUN_0043b2a0(iVar4 + -10,0xff);
        FUN_004499d0(iVar4 + -10,0x3f800000);
        thunk_FUN_0043b2a0(iVar4,0xff);
        FUN_004499d0(iVar4,0x3f800000);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if (DAT_00a39770 != 0) {
        _DAT_00a72f00 = 136.0;
      }
      DAT_00a72f10 = 0x10;
      FUN_00407900();
      return -1;
    }
    break;
  case 8:
    if (DAT_00a72f0c == 0) {
      FUN_00406e00(0);
      FUN_00406d50(0x1d);
    }
    DAT_00a72f0c = DAT_00a72f0c + 1;
    uVar7 = 2;
    do {
      uVar7 = uVar7 >> 1;
    } while (uVar7 != 0);
    uVar23 = FUN_00474c80();
    thunk_FUN_0043b510(uVar23,uVar23,uVar23,0,0);
    if (0x2c < (int)DAT_00a72f0c) {
      FUN_00406d50(0);
      DAT_00a72f10 = 5;
      FUN_00407900();
      return -1;
    }
    break;
  case 9:
    if (DAT_00a72f0c == 0) {
      FUN_00406d50(0x1e);
    }
    DAT_00a72f0c = DAT_00a72f0c + 1;
    uVar23 = FUN_00474c80();
    thunk_FUN_0043b2a0(2,uVar23);
    thunk_FUN_0043b2a0(3,uVar23);
    thunk_FUN_0043b2a0(4,uVar23);
    thunk_FUN_0043b2a0(5,uVar23);
    iVar4 = 0x15;
    iVar3 = 6;
    do {
      thunk_FUN_0043b2a0(iVar4 + -10,uVar23);
      thunk_FUN_0043b2a0(iVar4,uVar23);
      thunk_FUN_0043b2a0(iVar4 + 10,uVar23);
      thunk_FUN_0043b2a0(iVar4 + 0x14,uVar23);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar23 = FUN_00474c80();
    thunk_FUN_0043b510(uVar23,uVar23,uVar23,0,0);
    if (0x77 < (int)DAT_00a72f0c) {
      DAT_00a72f10 = 5;
      FUN_00407900();
      return -1;
    }
    break;
  case 10:
    DAT_00a72f0c = ((int)(DAT_00a72f0c - 1) < 0) - 1 & DAT_00a72f0c - 1;
    iVar3 = FUN_0041a6d0();
    if (iVar3 != 0) {
      if (iVar3 != 1) {
        DAT_00a72e9c = 1;
        DAT_004c0080 = 3;
        DAT_00a72f0c = 0;
        DAT_00a72f10 = 8;
        FUN_00407900();
        return -1;
      }
LAB_00427cd1:
      DAT_00a72f0c = 0x40;
      FUN_0044b070(0);
      DAT_00a72f10 = 0x10;
      FUN_00407900();
      return -1;
    }
    break;
  case 0xb:
    DAT_00a72f0c = ((int)(DAT_00a72f0c - 1) < 0) - 1 & DAT_00a72f0c - 1;
    iVar3 = FUN_0041f800(1);
    if (iVar3 != 0) {
      if (iVar3 == 2) {
        DAT_00a72f0c = 0x10;
        DAT_00a72f10 = 10;
        FUN_00407900();
        return -1;
      }
      goto LAB_00427cd1;
    }
    break;
  case 0xc:
    DAT_00a72f0c = ((int)(DAT_00a72f0c - 1) < 0) - 1 & DAT_00a72f0c - 1;
    iVar3 = FUN_0042b300(1,0,0x4a4,10,0,0x1050,3);
    goto LAB_00427fa1;
  case 0xd:
    if (DAT_004be048 == 0) {
      thunk_FUN_0043b510(0x80,0x80,0x80,0,0);
      thunk_FUN_0043ac90(1,1);
      thunk_FUN_0043b1b0(1,0x80);
      _DAT_00a72f00 = 136.0;
      FUN_00449760(1,0,0,0,0x43080000,0x44a00000,0x44340000);
      thunk_FUN_0043ac90(2,1);
      thunk_FUN_0043ac90(3,1);
      thunk_FUN_0043ac90(4,1);
      thunk_FUN_0043ac90(5,1);
      piVar19 = &DAT_004c00b8;
      iVar3 = 0xb;
      do {
        if ((*piVar19 == -1) || (iVar4 = FUN_0044b040(1,iVar3 + -0xb), iVar4 == 0)) {
          thunk_FUN_0043ac90(iVar3,0);
          thunk_FUN_0043ac90(iVar3 + 10,0);
        }
        else {
          thunk_FUN_0043ac90(iVar3,1);
          thunk_FUN_0043ac90(iVar3 + 10,1);
          FUN_00449950(iVar3,0,(float)(*piVar19 * 0x28));
        }
        iVar4 = iVar3 + -10;
        piVar19 = piVar19 + 1;
        iVar3 = iVar3 + 1;
      } while (iVar4 < 6);
    }
    DAT_00a72f0c = ((int)(DAT_00a72f0c - 1) < 0) - 1 & DAT_00a72f0c - 1;
    iVar3 = FUN_0042d910(1,0,0x4a4,10,0,0x1050,3);
    if (iVar3 == 0) break;
    if (iVar3 != 1) {
      DAT_004c0080 = iVar3 + -2;
      DAT_00a72f0c = 0;
      DAT_00a72f10 = 8;
      FUN_00407900();
      return -1;
    }
    _DAT_00a72f00 = 136.0;
    goto LAB_00427fa9;
  case 0xe:
    DAT_00a72f0c = ((int)(DAT_00a72f0c - 1) < 0) - 1 & DAT_00a72f0c - 1;
    iVar3 = FUN_00428250(1,0,0x4a4,10,0,0x1050,3);
    goto LAB_00427fa1;
  case 0xf:
    DAT_00a72f0c = ((int)(DAT_00a72f0c - 1) < 0) - 1 & DAT_00a72f0c - 1;
    iVar3 = FUN_0042a520(1,0,0x4a4,10,0,0x1050,3);
LAB_00427fa1:
    if (iVar3 == 1) {
LAB_00427fa9:
      DAT_00a72f0c = 0x40;
      FUN_0044b070(1);
      DAT_00a72f10 = 0x11;
    }
    break;
  case 0x10:
    _DAT_00a72f00 = _DAT_00a72f00 + 1.2;
    if ((DAT_00a39770 != 0) || (_DAT_00a72f00 < 136.0 == NAN(_DAT_00a72f00))) {
      _DAT_00a72f00 = 136.0;
    }
    FUN_00449760(1,0,0,0,_DAT_00a72f00,0x44a00000,0x44340000);
    if ((NAN(_DAT_00a72f00) != (_DAT_00a72f00 == 136.0)) && (DAT_00522930 == 0)) {
      if (DAT_00b9191c < 0x6a4) {
        uVar25 = 200;
        uVar24 = 5;
        uVar23 = 0x603;
      }
      else {
        uVar25 = 400;
        uVar24 = 3;
        uVar23 = 0xe03;
      }
      FUN_0040fd20(uVar23,0,uVar24,0,uVar25,1,1);
    }
    iVar18 = 0;
    DAT_00a72e9c = 0;
    iVar20 = 0xb;
    piVar19 = &DAT_004c0088;
    local_10 = (int *)0x6;
    do {
      if (*piVar19 == -1) {
        thunk_FUN_0043ac90(iVar20,0);
        thunk_FUN_0043ac90(iVar20 + 10,0);
      }
      else {
        thunk_FUN_0043ac90(iVar20,1);
        thunk_FUN_0043ac90(iVar20 + 10,1);
        thunk_FUN_0043b2a0(iVar20,(DAT_00a72f0c - iVar18) * 0x10);
        thunk_FUN_0043b2a0(iVar20 + 10,(DAT_00a72f0c - iVar18) * 0x10);
        thunk_FUN_0043b2a0(iVar20 + 0x14,(DAT_00a72f0c - iVar18) * 0x10);
        FUN_00449950(iVar20,0,(float)(*piVar19 * 0x28));
      }
      thunk_FUN_0043ac90(iVar20 + 0x14,0);
      iVar18 = iVar18 + 2;
      piVar19 = piVar19 + 1;
      iVar20 = iVar20 + 1;
      local_10 = (int *)((int)local_10 + -1);
    } while (local_10 != (int *)0x0);
    thunk_FUN_0043ac90(0x29,1);
    FUN_004497d0(0x29,0,0,0x43900000,0x42200000);
    thunk_FUN_0043b2a0(0x29,DAT_00a72f0c << 4);
    thunk_FUN_0043ac90(0x2a,0);
    DAT_00a72f0c = DAT_00a72f0c + 1;
    if (iVar3 != -1) {
      uVar7 = 0x10;
      if (iVar3 < 6) {
        FUN_00449950(iVar3 + 0xb,0x43a00000,(float)((&DAT_004c0088)[iVar3] * 0x28));
        thunk_FUN_0043ac90(iVar3 + 0x1f,1);
        thunk_FUN_0043ac90(0x2a,1);
        FUN_004497d0(0x2a,0,(float)((&DAT_004c0088)[iVar3] * 0x14),0x43900000,0x41a00000);
        uVar8 = (&DAT_00a72ea0)[iVar3] + 2;
        if (((int)uVar8 < 1) || ((int)uVar8 < 0x10)) {
          uVar7 = uVar8 & ((int)uVar8 < 1) - 1;
        }
        (&DAT_00a72ea0)[iVar3] = uVar7;
      }
      if (DAT_004c01a8 != iVar3) {
        FUN_00405af0();
      }
      if (DAT_00a39770 != 0) {
        thunk_FUN_0043ac90(iVar3 + 0x1f,1);
        _DAT_004c01ac = 0x10;
        switch(iVar3) {
        case 0:
          if (DAT_00a730b0 == 1) {
            if (iVar4 == 0) {
              wsprintfA(&DAT_00a3a158,"1001");
              DAT_00a72f0c = 0;
              DAT_00a72f10 = 8;
              FUN_0040ea30();
              DAT_004c01a8 = iVar3;
              FUN_00407900();
              return -1;
            }
          }
          else if (((DAT_00a730b0 == 0) && (DAT_00a730ac == 0)) && (iVar6 == 0)) {
            wsprintfA(&DAT_00a3a158,"2001");
            DAT_00a72f0c = 0;
            DAT_00a72f10 = 8;
            FUN_0040ea30();
            DAT_004c01a8 = iVar3;
            FUN_00407900();
            return -1;
          }
          FUN_00405b90();
          if ((DAT_00a730ac == 0) && (DAT_00a730b0 == 0)) {
            FUN_0044b310(1,0,0);
            iVar5 = 0;
            do {
              if (iVar5 == 4) {
                iVar17 = iVar5 * 0x28 + 400;
                iVar20 = 5;
                iVar18 = DAT_004c0140;
              }
              else {
                iVar18 = (&DAT_004c0120)[iVar5 * 2];
                iVar17 = iVar5 * 0x28 + 0x168;
                iVar20 = iVar5 + 1;
              }
              FUN_0044b210(1,iVar20,0x280 - iVar18 / 2,iVar17,iVar18,0x20,1);
              iVar5 = iVar5 + 1;
            } while (iVar5 < 5);
          }
          else {
            iVar5 = 0;
            iVar20 = 0x168;
            do {
              FUN_0044b210(1,iVar5,0x280 - (int)(&DAT_004c0118)[iVar5 * 2] / 2,iVar20,
                           (&DAT_004c0118)[iVar5 * 2],0x20,1);
              iVar20 = iVar20 + 0x28;
              iVar5 = iVar5 + 1;
            } while (iVar20 < 600);
          }
          if (iVar4 == 0) {
            FUN_0044b310(1,1,0);
          }
          if (DAT_00a730b0 == 0) {
            FUN_0044b310(1,1,1);
          }
          if (iVar6 == 0) {
            FUN_0044b310(1,2,0);
          }
          FUN_0044b070(1);
          DAT_00a72f0c = 0;
          if (NAN(_DAT_004be004) == (_DAT_004be004 == 1.0)) {
            DAT_00a72f0c = 0x40;
          }
          DAT_00a72f10 = 0x12;
          DAT_004c01a8 = iVar3;
          FUN_00407900();
          return -1;
        case 1:
          DAT_00a72f0c = 0x10;
          FUN_0041a5e0(2,0);
          DAT_00a72f10 = 10;
          FUN_00405b90();
          DAT_004c01a8 = iVar3;
          FUN_00407900();
          return -1;
        case 2:
          FUN_00419140(1,0);
          DAT_00a72f0c = 0x10;
          DAT_00a72f10 = 0xb;
          FUN_00405b90();
          DAT_004c01a8 = iVar3;
          FUN_00407900();
          return -1;
        case 3:
          FUN_00405b90();
          iVar20 = 0;
          iVar6 = 0x168;
          do {
            FUN_0044b210(1,iVar20,0x280 - (int)(&DAT_004c0148)[iVar20 * 2] / 2,iVar6,
                         (&DAT_004c0148)[iVar20 * 2],0x20,1);
            iVar6 = iVar6 + 0x28;
            iVar20 = iVar20 + 1;
          } while (iVar6 < 600);
          if ((iVar4 == 0) && (DAT_00a730b0 != 0)) {
            FUN_0044b310(1,0,0);
            FUN_0044b310(1,3,0);
          }
          if (iVar5 == 0) {
            FUN_0044b310(1,1,0);
            FUN_0044b310(1,2,0);
          }
          if (uVar16 == 0) {
            FUN_0044b310(1,4,0);
          }
          FUN_0044b070(1);
          DAT_00a72f0c = 0;
          if (NAN(_DAT_004be004) == (_DAT_004be004 == 1.0)) {
            DAT_00a72f0c = 0x40;
          }
          DAT_00a72f10 = 0x11;
          DAT_004c01a8 = iVar3;
          FUN_00407900();
          return -1;
        case 5:
          DAT_004c0080 = 1;
          DAT_00a72f0c = 0;
          DAT_00a72f10 = 9;
          FUN_00405b90();
        }
      }
    }
    DAT_004c01a8 = iVar3;
    FUN_00407900();
    return -1;
  case 0x11:
    FUN_0040fa50(0x1f,0,1,0xff,0,0);
    iVar5 = 0;
    piVar19 = &DAT_004c00b8;
    iVar4 = 0xb;
    do {
      if ((*piVar19 == -1) || (iVar6 = FUN_0044b040(1,iVar4 + -0xb), iVar6 == 0)) {
        thunk_FUN_0043ac90(iVar4,0);
        thunk_FUN_0043ac90(iVar4 + 10,0);
      }
      else {
        thunk_FUN_0043ac90(iVar4,1);
        thunk_FUN_0043ac90(iVar4 + 10,1);
        thunk_FUN_0043b2a0(iVar4,(DAT_00a72f0c - iVar5) * 0x10);
        thunk_FUN_0043b2a0(iVar4 + 10,(DAT_00a72f0c - iVar5) * 0x10);
        thunk_FUN_0043b2a0(iVar4 + 0x14,(DAT_00a72f0c - iVar5) * 0x10);
        FUN_00449950(iVar4,0,(float)(*piVar19 * 0x28));
      }
      thunk_FUN_0043ac90(iVar4 + 0x14,0);
      iVar6 = iVar4 + -10;
      iVar5 = iVar5 + 2;
      piVar19 = piVar19 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar6 < 6);
    thunk_FUN_0043ac90(0x29,1);
    FUN_004497d0(0x29,0,0x42a00000,0x43900000,0x42200000);
    thunk_FUN_0043b2a0(0x29,DAT_00a72f0c << 4);
    thunk_FUN_0043ac90(0x2a,0);
    DAT_00a72f0c = DAT_00a72f0c + 1;
    if (iVar3 != -1) {
      FUN_00449950(iVar3 + 0xb,0x43a00000,(float)((&DAT_004c00b8)[iVar3] * 0x28));
      thunk_FUN_0043ac90(iVar3 + 0x1f,1);
      thunk_FUN_0043ac90(0x2a,1);
      FUN_004497d0(0x2a,0,(float)((&DAT_004c00b8)[iVar3] * 0x14),0x43900000,0x41a00000);
      if (DAT_004c01a8 != iVar3) {
        FUN_00405af0();
      }
      if (DAT_00a39770 != 0) {
        thunk_FUN_0043ac90(iVar3 + 0x1f,1);
        _DAT_004c01ac = 0x11;
        switch(iVar3) {
        case 0:
          FUN_00405b90();
          iVar4 = 0;
          iVar5 = 0x168;
          do {
            FUN_0044b210(2,iVar4,0x280 - (int)(&DAT_004c0178)[iVar4 * 2] / 2,iVar5,
                         (&DAT_004c0178)[iVar4 * 2],0x20,1);
            iVar5 = iVar5 + 0x28;
            iVar4 = iVar4 + 1;
          } while (iVar5 < 600);
          FUN_0044b070(2);
          DAT_00a72f0c = 0;
          if (NAN(_DAT_004be004) == (_DAT_004be004 == 1.0)) {
            DAT_00a72f0c = 0x40;
          }
          DAT_00a72f10 = 0x13;
          break;
        case 1:
          DAT_00a72f0c = 0x10;
          DAT_00a72f10 = 0xc;
          FUN_00405b90();
          break;
        case 2:
          DAT_00a72f0c = 0x10;
          DAT_00a72f10 = 0xd;
          FUN_00405b90();
          break;
        case 3:
          DAT_00a72f0c = 0x10;
          DAT_00a72f10 = 0xe;
          FUN_00405b90();
          break;
        case 4:
          DAT_00a72f0c = 0x10;
          DAT_00a72f10 = 0xf;
          FUN_00405b90();
          break;
        case 5:
          _DAT_004c01ac = 0x11;
          FUN_0044b070(0);
          DAT_00a72f0c = 0;
          if (NAN(_DAT_004be004) == (_DAT_004be004 == 1.0)) {
            DAT_00a72f0c = 0x40;
          }
          DAT_00a72f10 = 0x10;
          FUN_00405c30();
        }
      }
    }
    if (DAT_00a39778 != 0) {
      _DAT_004c01ac = 0x11;
      FUN_0044b070(0);
      DAT_00a72f0c = 0;
      if (NAN(_DAT_004be004) == (_DAT_004be004 == 1.0)) {
        DAT_00a72f0c = 0x40;
      }
      DAT_00a72f10 = 0x10;
      FUN_00405c30();
    }
    DAT_004c01a8 = iVar3;
    FUN_00407900();
    return -1;
  case 0x12:
    if ((DAT_00a730ac == 0) && (DAT_00a730b0 == 0)) {
      iVar4 = 0;
      do {
        iVar5 = iVar4;
        if (((&DAT_004c00a4)[iVar5] == -1) || (iVar4 = FUN_0044b040(1,iVar5 + 1), iVar4 == 0)) {
          thunk_FUN_0043ac90(iVar5 + 0xb,0);
          thunk_FUN_0043ac90(iVar5 + 0x15,0);
        }
        else {
          iVar4 = iVar5 + 0xb;
          thunk_FUN_0043ac90(iVar4,1);
          thunk_FUN_0043ac90(iVar5 + 0x15,1);
          thunk_FUN_0043b2a0(iVar4,(DAT_00a72f0c + iVar5 * -2) * 0x10);
          thunk_FUN_0043b2a0(iVar5 + 0x15,(DAT_00a72f0c + iVar5 * -2) * 0x10);
          thunk_FUN_0043b2a0(iVar5 + 0x1f,(DAT_00a72f0c + iVar5 * -2) * 0x10);
          if (iVar5 == 4) {
            thunk_FUN_0043ac90(0xf,0);
            thunk_FUN_0043ac90(0x19,0);
            FUN_00449950(0x10,0,(float)(DAT_004c00b4 * 0x28));
          }
          else {
            FUN_00449950(iVar4,0,(float)((&DAT_004c00a4)[iVar5] * 0x28));
          }
        }
        thunk_FUN_0043ac90(iVar5 + 0x1f,0);
        iVar4 = iVar5 + 1;
      } while (iVar5 + 1 < 5);
      thunk_FUN_0043ac90(0x10,1);
      thunk_FUN_0043ac90(0x1a,1);
      thunk_FUN_0043b2a0(0x10,(DAT_00a72f0c - 10) * 0x10);
      thunk_FUN_0043b2a0(0x1a,(DAT_00a72f0c - 10) * 0x10);
      thunk_FUN_0043b2a0(iVar5 + 0x20,(DAT_00a72f0c - 10) * 0x10);
      thunk_FUN_0043ac90(0x24,0);
    }
    else {
      iVar5 = 0;
      piVar19 = &DAT_004c00a0;
      iVar4 = 0xb;
      do {
        if ((*piVar19 == -1) || (iVar6 = FUN_0044b040(1,iVar4 + -0xb), iVar6 == 0)) {
          thunk_FUN_0043ac90(iVar4,0);
          thunk_FUN_0043ac90(iVar4 + 10,0);
        }
        else {
          thunk_FUN_0043ac90(iVar4,1);
          thunk_FUN_0043ac90(iVar4 + 10,1);
          thunk_FUN_0043b2a0(iVar4,(DAT_00a72f0c - iVar5) * 0x10);
          thunk_FUN_0043b2a0(iVar4 + 10,(DAT_00a72f0c - iVar5) * 0x10);
          thunk_FUN_0043b2a0(iVar4 + 0x14,(DAT_00a72f0c - iVar5) * 0x10);
          FUN_00449950(iVar4,0,(float)(*piVar19 * 0x28));
        }
        thunk_FUN_0043ac90(iVar4 + 0x14,0);
        iVar6 = iVar4 + -10;
        iVar5 = iVar5 + 2;
        piVar19 = piVar19 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar6 < 6);
    }
    thunk_FUN_0043ac90(0x29,1);
    FUN_004497d0(0x29,0,0x42200000,0x43900000,0x42200000);
    thunk_FUN_0043b2a0(0x29,DAT_00a72f0c << 4);
    thunk_FUN_0043ac90(0x2a,0);
    DAT_00a72f0c = DAT_00a72f0c + 1;
    if (iVar3 != -1) {
      if ((DAT_00a730ac == 0) && (DAT_00a730b0 == 0)) {
        if (iVar3 == 5) {
          FUN_00449950(0x10,0x43a00000,(float)(DAT_004c00b4 * 0x28));
          iVar4 = 0x24;
        }
        else {
          FUN_00449950(iVar3 + 10,0x43a00000,(float)((&DAT_004c00a0)[iVar3] * 0x28));
          iVar4 = iVar3 + 0x1e;
        }
      }
      else {
        FUN_00449950(iVar3 + 0xb,0x43a00000,(float)((&DAT_004c00a0)[iVar3] * 0x28));
        iVar4 = iVar3 + 0x1f;
      }
      thunk_FUN_0043ac90(iVar4,1);
      thunk_FUN_0043ac90(0x2a,1);
      FUN_004497d0(0x2a,0,(float)((&DAT_004c00a0)[iVar3] * 0x14),0x43900000,0x41a00000);
      if (DAT_004c01a8 != iVar3) {
        FUN_00405af0();
      }
      if (DAT_00a39770 != 0) {
        _DAT_004c01ac = 0x12;
        switch(iVar3) {
        case 0:
          wsprintfA(&DAT_00a3a158,"1001");
          DAT_00a72f0c = 0;
          DAT_00a72f10 = 8;
          FUN_0040ea30();
          break;
        case 1:
          wsprintfA(&DAT_00a3a158,"2001");
          DAT_00a72f0c = 0;
          DAT_00a72f10 = 8;
          FUN_0040ea30();
          break;
        case 2:
          wsprintfA(&DAT_00a3a158,"3001");
          DAT_00a72f0c = 0;
          DAT_00a72f10 = 8;
          FUN_0040ea30();
          break;
        case 5:
          _DAT_004c01ac = 0x12;
          FUN_0044b070(0);
          DAT_00a72f0c = 0;
          if (NAN(_DAT_004be004) == (_DAT_004be004 == 1.0)) {
            DAT_00a72f0c = 0x40;
          }
          DAT_00a72f10 = 0x10;
          FUN_00405c30();
        }
      }
    }
    if (DAT_00a39778 != 0) {
      _DAT_004c01ac = 0x12;
      FUN_0044b070(0);
      DAT_00a72f0c = 0;
      if (NAN(_DAT_004be004) == (_DAT_004be004 == 1.0)) {
        DAT_00a72f0c = 0x40;
      }
      DAT_00a72f10 = 0x10;
      FUN_00405c30();
    }
    DAT_004c01a8 = iVar3;
    FUN_00407900();
    return -1;
  case 0x13:
    iVar5 = 0;
    piVar19 = &DAT_004c00d0;
    iVar4 = 0xb;
    do {
      if ((*piVar19 == -1) || (iVar6 = FUN_0044b040(2,iVar4 + -0xb), iVar6 == 0)) {
        thunk_FUN_0043ac90(iVar4,0);
        thunk_FUN_0043ac90(iVar4 + 10,0);
      }
      else {
        thunk_FUN_0043ac90(iVar4,1);
        thunk_FUN_0043ac90(iVar4 + 10,1);
        thunk_FUN_0043b2a0(iVar4,(DAT_00a72f0c - iVar5) * 0x10);
        thunk_FUN_0043b2a0(iVar4 + 10,(DAT_00a72f0c - iVar5) * 0x10);
        thunk_FUN_0043b2a0(iVar4 + 0x14,(DAT_00a72f0c - iVar5) * 0x10);
        FUN_00449950(iVar4,0,(float)(*piVar19 * 0x28));
      }
      thunk_FUN_0043ac90(iVar4 + 0x14,0);
      iVar6 = iVar4 + -10;
      iVar5 = iVar5 + 2;
      piVar19 = piVar19 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar6 < 6);
    thunk_FUN_0043ac90(0x29,1);
    FUN_004497d0(0x29,0,0x42f00000,0x43900000,0x42200000);
    thunk_FUN_0043b2a0(0x29,DAT_00a72f0c << 4);
    thunk_FUN_0043ac90(0x2a,0);
    DAT_00a72f0c = DAT_00a72f0c + 1;
    if (iVar3 != -1) {
      FUN_00449950(iVar3 + 0xb,0x43a00000,(float)((&DAT_004c00d0)[iVar3] * 0x28));
      thunk_FUN_0043ac90(iVar3 + 0x1f,1);
      thunk_FUN_0043ac90(0x2a,1);
      FUN_004497d0(0x2a,0,(float)((&DAT_004c00d0)[iVar3] * 0x14),0x43900000,0x41a00000);
      if (DAT_004c01a8 != iVar3) {
        FUN_00405af0();
      }
      if (DAT_00a39770 != 0) {
        thunk_FUN_0043ac90(iVar3 + 0x1f,1);
        _DAT_004c01ac = 0x13;
        if (iVar3 == 0) {
          wsprintfA(&DAT_00a3a158,"5000");
          DAT_00a72f0c = 0;
          DAT_00a72f10 = 8;
          FUN_0040ea30();
        }
        else if (iVar3 == 1) {
          wsprintfA(&DAT_00a3a158,"5100");
          DAT_00a72f0c = 0;
          DAT_00a72f10 = 8;
          FUN_0040ea30();
        }
        else if (iVar3 == 5) {
          _DAT_004c01ac = 0x13;
          FUN_0044b070(1);
          FUN_0044b330(2);
          DAT_00a72f0c = 0;
          if (NAN(_DAT_004be004) == (_DAT_004be004 == 1.0)) {
            DAT_00a72f0c = 0x40;
          }
          DAT_00a72f10 = 0x11;
          FUN_00405c30();
        }
      }
    }
    if (DAT_00a39778 != 0) {
      _DAT_004c01ac = 0x13;
      FUN_0044b070(1);
      FUN_0044b330(2);
      DAT_00a72f0c = 0;
      if (NAN(_DAT_004be004) == (_DAT_004be004 == 1.0)) {
        DAT_00a72f0c = 0x40;
      }
      DAT_00a72f10 = 0x11;
      FUN_00405c30();
    }
    DAT_004c01a8 = iVar3;
    FUN_00407900();
    return -1;
  }
  FUN_00407900();
  return -1;
}

