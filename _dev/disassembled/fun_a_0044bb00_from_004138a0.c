
void __thiscall FUN_0044bb00(int **param_1_00,LPCSTR param_1,HWND param_2)

{
  int **ppiVar1;
  HRESULT HVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int **ppiVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined auStack_228 [8];
  tagRECT tStack_220;
  int **ppiStack_210;
  WCHAR aWStack_20c [250];
  int iStack_18;
  uint local_4;
  
  local_4 = DAT_004d1630 ^ (uint)auStack_228;
  FUN_0044b8b0();
  HVar2 = CoCreateInstance((IID *)&DAT_004b662c,(LPUNKNOWN)0x0,1,(IID *)&DAT_004b8d3c,param_1_00);
  if (-1 < HVar2) {
    MultiByteToWideChar(0,0,param_1,-1,aWStack_20c,0x104);
    iVar3 = (**(code **)(**param_1_00 + 0x34))(*param_1_00,aWStack_20c,0);
    if (-1 < iVar3) {
      ppiStack_210 = param_1_00 + 1;
      (**(code **)**param_1_00)(*param_1_00,&DAT_004b859c,ppiStack_210);
      (**(code **)**param_1_00)(*param_1_00,&DAT_004b85bc,param_1_00 + 2);
      (**(code **)**param_1_00)(*param_1_00,&DAT_004b85dc,param_1_00 + 4);
      piVar9 = param_1_00[4];
      if (iStack_18 < 1) {
        (**(code **)(*piVar9 + 0x1c))(piVar9,0xffffd8f0);
      }
      else {
        iVar3 = *piVar9;
        FUN_00477800();
        uVar4 = FUN_00474c80();
        (**(code **)(iVar3 + 0x1c))(piVar9,uVar4);
      }
      Sleep(1);
      ppiVar1 = param_1_00 + 3;
      iVar3 = (**(code **)**param_1_00)(*param_1_00,&DAT_004b85ec,ppiVar1);
      if (-1 < iVar3) {
        piVar9 = param_1_00[2];
        (**(code **)(*piVar9 + 0x34))(piVar9,param_2,0x8001,0);
        iVar3 = (**(code **)(**ppiVar1 + 0x74))(*ppiVar1,param_2);
        if ((-1 < iVar3) &&
           (iVar3 = (**(code **)(**ppiVar1 + 0x24))(*ppiVar1,0x46000000), -1 < iVar3)) {
          GetClientRect(param_2,&tStack_220);
          iVar7 = tStack_220.bottom - tStack_220.top;
          iVar3 = iVar7 / 9;
          iVar8 = tStack_220.right - tStack_220.left;
          iVar5 = (int)(iVar8 + (iVar8 >> 0x1f & 0xfU)) >> 4;
          if (iVar5 < iVar3) {
            piVar9 = *ppiVar1;
            tStack_220.bottom = iVar5 * 9;
            tStack_220.top = (iVar7 + iVar5 * -9) / 2 + tStack_220.top;
            iVar3 = *piVar9;
            ppiVar6 = (int **)tStack_220.right;
          }
          else {
            piVar9 = *ppiVar1;
            ppiVar6 = (int **)(iVar3 * 0x10);
            tStack_220.left = (iVar8 + iVar3 * -0x10) / 2 + tStack_220.left;
            iVar3 = *piVar9;
          }
          iVar3 = (**(code **)(iVar3 + 0x9c))
                            (piVar9,tStack_220.left,tStack_220.top,ppiVar6,tStack_220.bottom);
          if (-1 < iVar3) {
            (**(code **)(**ppiVar1 + 0x94))(*ppiVar1,0);
            (**(code **)(**(int **)tStack_220.right + 0x1c))(*(int **)tStack_220.right);
            DAT_00b6f214 = 1;
            (**(code **)(**ppiVar1 + 0x34))(*ppiVar1,0xffffffff);
            (**(code **)(**ppiVar1 + 0x4c))(*ppiVar1,0xffffffff);
          }
        }
      }
    }
  }
  ___security_check_cookie_4();
  return;
}

