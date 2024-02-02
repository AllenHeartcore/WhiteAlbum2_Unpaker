
void __thiscall
FUN_00460e10(int param_1_00,int *param_1,undefined4 param_2,int param_4,undefined4 param_5,
            int param_6,int param_7,uint param_8)

{
  byte bVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  DWORD DVar6;
  uint uVar7;
  undefined2 in_FPUControlWord;
  int *local_38;
  undefined4 uStack_34;
  int iStack_30;
  DWORD DStack_2c;
  int iStack_28;
  CHAR local_24 [32];
  uint local_4;
  
  local_4 = DAT_004d1630 ^ (uint)&local_38;
  bVar1 = *(byte *)(param_1_00 + 200);
  local_38 = param_1;
  wsprintfA(local_24,"BGM_%03d.ogg",param_2);
  uVar7 = (uint)bVar1;
  iVar4 = FUN_00458620(uVar7,local_24,0);
  if (iVar4 == -1) {
    if (param_7 == 0) {
      wsprintfA(local_24,"BGM_%03d_a.ogg",param_2);
    }
    else {
      wsprintfA(local_24,"BGM_%03d_b.ogg",param_2);
    }
    iVar4 = FUN_00458620(uVar7,local_24,0);
  }
  if (((DAT_00a730ac != 0) || (DAT_00a730b0 != 0)) && (iVar4 == -1)) {
    bVar1 = *(byte *)(param_1_00 + 0xcb);
    wsprintfA(local_24,"BGM_%03d.ogg",param_2);
    uVar7 = (uint)bVar1;
    iVar4 = FUN_00458620(uVar7,local_24,0);
    if (iVar4 == -1) {
      if (param_7 == 0) {
        wsprintfA(local_24,"BGM_%03d_a.ogg",param_2);
      }
      else {
        wsprintfA(local_24,"BGM_%03d_b.ogg",param_2);
      }
      iVar4 = FUN_00458620(uVar7,local_24,0);
      if (iVar4 == -1) {
        ___security_check_cookie_4();
        return;
      }
    }
  }
  if (param_6 == 0) {
    param_4 = 0;
  }
  *(uint *)(param_1_00 + 0xc4) = param_8;
  *(undefined4 *)(param_1_00 + 0xc0) = param_2;
  *(undefined *)(param_1_00 + 0xd1) = 1;
  iVar5 = FUN_0045e460(*local_38);
  piVar3 = local_38;
  if (iVar5 == 0) {
    FUN_00460d40(local_38,uVar7,iVar4,1,0,1);
    iVar4 = *piVar3;
joined_r0x00461119:
    if (iVar4 == -1) goto LAB_0046115e;
    FUN_0045f990(*piVar3,param_8,*(undefined *)(param_1_00 + 0xce));
    FUN_004606f0(*piVar3,param_5);
  }
  else {
    iStack_28 = FUN_0045f920(*local_38);
    piVar3 = local_38;
    if (iStack_28 == 0) {
LAB_004610ea:
      iVar4 = FUN_0045fad0(*piVar3,uVar7,iVar4,1);
      goto joined_r0x00461119;
    }
    if ((*(int *)(iVar5 + 0x2c) == iVar4) && (iStack_28 != 2)) {
      if (param_8 != *(byte *)(iVar5 + 0x11)) {
        FUN_0045f990(*local_38,param_8,*(undefined *)(param_1_00 + 0xce));
      }
    }
    else {
      if (param_4 == 0) {
        FUN_0045f8a0(*local_38);
        goto LAB_004610ea;
      }
      if (iStack_28 == 2) {
        DStack_2c = timeGetTime();
        if (DStack_2c < *(uint *)(iVar5 + 0x38)) {
          DStack_2c = *(uint *)(iVar5 + 0x38) - DStack_2c;
          fVar2 = (float)DStack_2c;
          if ((int)DStack_2c < 0) {
            fVar2 = fVar2 + 4.294967e+09;
          }
          fVar2 = (fVar2 * (float)((uint)*(byte *)(iVar5 + 0x11) - *(int *)(iVar5 + 0x34))) /
                  (float)*(int *)(iVar5 + 0x30) + (float)*(int *)(iVar5 + 0x34);
        }
        else {
          fVar2 = (float)*(int *)(iVar5 + 0x34);
        }
        *(int *)(iVar5 + 0x30) = param_6;
        uStack_34 = CONCAT22((short)((uint)fVar2 >> 0x10),in_FPUControlWord);
        iStack_30 = (int)ROUND(fVar2);
        *(undefined *)(iVar5 + 0x11) = (undefined)iStack_30;
        DVar6 = timeGetTime();
        *(undefined4 *)(iVar5 + 0x34) = 0;
        *(DWORD *)(iVar5 + 0x38) = DVar6 + *(int *)(iVar5 + 0x30);
      }
      *(uint *)(iVar5 + 0x68) = uVar7;
      *(int *)(iVar5 + 0x6c) = iVar4;
      *(uint *)(iVar5 + 0x70) = param_8;
      *(undefined4 *)(iVar5 + 0x74) = param_5;
      if (iStack_28 != 2) {
        FUN_0045f880(*local_38,param_6);
      }
    }
  }
  *(uint *)(param_1_00 + 0xc4) = param_8;
  *(undefined4 *)(param_1_00 + 0xc0) = param_2;
LAB_0046115e:
  *(undefined *)(param_1_00 + 0xd1) = 0;
  ___security_check_cookie_4();
  return;
}

