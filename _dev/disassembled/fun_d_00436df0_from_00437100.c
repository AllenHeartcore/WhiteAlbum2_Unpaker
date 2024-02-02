
int FUN_00436df0(byte *param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  uint local_c;
  int local_8;
  
  iVar7 = 0;
  local_8 = 0;
  bVar3 = false;
  _memset(&DAT_00a7cdc8,0x20,0xfee);
  uVar8 = 0xfee;
  for (local_c = 0; pbVar6 = param_2, (local_c & 0x100) != 0; local_c = local_c >> 1) {
LAB_00436e56:
    if (param_3 <= local_8) {
      puVar9 = &DAT_004a40e4;
      goto LAB_00436f0d;
    }
    bVar1 = *pbVar6;
    param_2 = pbVar6 + 1;
    if ((local_c & 1) == 0) {
      if (param_3 <= local_8 + 1) {
        puVar9 = &DAT_004a40e0;
        goto LAB_00436f0d;
      }
      bVar2 = *param_2;
      local_8 = local_8 + 2;
      param_2 = pbVar6 + 2;
      uVar4 = (uint)bVar1 | (bVar2 & 0xf0) << 4;
      iVar5 = (bVar2 & 0xf) + 2;
      do {
        if (param_4 < iVar7) {
          bVar3 = true;
          break;
        }
        bVar1 = (&DAT_00a7cdc8)[uVar4 & 0xfff];
        (&DAT_00a7cdc8)[uVar8 & 0xfff] = bVar1;
        *param_1 = bVar1;
        iVar5 = iVar5 + -1;
        uVar4 = uVar4 + 1;
        uVar8 = uVar8 + 1;
        param_1 = param_1 + 1;
        iVar7 = iVar7 + 1;
      } while (-1 < iVar5);
    }
    else {
      (&DAT_00a7cdc8)[uVar8 & 0xfff] = bVar1;
      *param_1 = bVar1;
      param_1 = param_1 + 1;
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + 1;
      local_8 = local_8 + 1;
    }
    if (param_4 < iVar7) goto LAB_00436f1c;
  }
  if (local_8 < param_3) {
    local_c = *param_2 | 0xff00;
    local_8 = local_8 + 1;
    pbVar6 = param_2 + 1;
    goto LAB_00436e56;
  }
  puVar9 = &DAT_004a40e8;
LAB_00436f0d:
  FUN_0044be20(puVar9);
  if (!bVar3) goto LAB_00436f2b;
LAB_00436f1c:
  FUN_0044beb0(0,&DAT_004a40d4);
LAB_00436f2b:
  return uVar8 - 0xfee;
}

