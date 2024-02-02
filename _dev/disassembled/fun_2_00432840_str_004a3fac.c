
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00432840(HINSTANCE param_1,undefined4 param_2,char *param_3,int param_4)

{
  HACCEL hAccTable;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  DWORD DVar18;
  HWND hWnd;
  BOOL BVar19;
  uint uVar20;
  bool bVar21;
  undefined4 uVar22;
  char *pcVar23;
  HACCEL pHStack_248;
  HINSTANCE local_244;
  tagRECT tStack_240;
  timecaps_tag tStack_230;
  tagMSG tStack_228;
  CHAR local_20c [260];
  undefined uStack_108;
  undefined auStack_107 [259];
  uint local_4;
  
  local_4 = DAT_004d1630 ^ (uint)&pHStack_248;
  local_244 = param_1;
  FUN_0044bd80(1);
  FUN_0044ef30();
  FUN_0044f1a0(local_20c);
  bVar21 = 0x708 < DAT_00b9191c;
  GetCurrentDirectoryA(0x104,&DAT_00a72f90);
  iVar2 = FUN_0044c390("IC\\bak.pak");
  if (iVar2 != 0) {
    DAT_00a730b0 = 1;
  }
  iVar2 = FUN_0044c390("script\\GFLAG.dat");
  if (iVar2 != 0) {
    DAT_00a3a120 = 1;
  }
  FUN_00417410(5,&DAT_00a39d20,0);
  FUN_00417410(5,&DAT_00a39268,1);
  uStack_108 = 0;
  _memset(auStack_107,0,0x103);
  FUN_0044d4e0("SoftWare\\Leaf\\WHITE ALBUM2 -introductory chapter-");
  DAT_00a730ac = 0;
  iVar2 = FUN_0044d6e0("InstallDir",&uStack_108);
  if (iVar2 == 0) {
    wsprintfA(local_20c,"%sMV010.pak",&uStack_108);
    iVar2 = FUN_0044c390(local_20c);
    wsprintfA(local_20c,"%sMV011.pak",&uStack_108);
    iVar3 = FUN_0044c390(local_20c);
    wsprintfA(local_20c,"%sMV020.pak",&uStack_108);
    iVar4 = FUN_0044c390(local_20c);
    wsprintfA(local_20c,"%sMV021.pak",&uStack_108);
    iVar5 = FUN_0044c390(local_20c);
    wsprintfA(local_20c,"%sMV070.pak",&uStack_108);
    iVar6 = FUN_0044c390(local_20c);
    wsprintfA(local_20c,"%sMV071.pak",&uStack_108);
    iVar7 = FUN_0044c390(local_20c);
    wsprintfA(local_20c,"%sMV080.pak",&uStack_108);
    iVar8 = FUN_0044c390(local_20c);
    wsprintfA(local_20c,"%sMV081.pak",&uStack_108);
    iVar9 = FUN_0044c390(local_20c);
    wsprintfA(local_20c,"%sMV090.pak",&uStack_108);
    iVar10 = FUN_0044c390(local_20c);
    wsprintfA(local_20c,"%sMV091.pak",&uStack_108);
    iVar11 = FUN_0044c390(local_20c);
    wsprintfA(local_20c,"%sBAK.pak",&uStack_108);
    iVar12 = FUN_0044c390(local_20c);
    wsprintfA(local_20c,"%sCHAR.pak",&uStack_108);
    iVar13 = FUN_0044c390(local_20c);
    wsprintfA(local_20c,"%sGRP.pak",&uStack_108);
    iVar14 = FUN_0044c390(local_20c);
    wsprintfA(local_20c,"%sBGM.pak",&uStack_108);
    iVar15 = FUN_0044c390(local_20c);
    wsprintfA(local_20c,"%sSE.pak",&uStack_108);
    iVar16 = FUN_0044c390(local_20c);
    wsprintfA(local_20c,"%sVOICE.pak",&uStack_108);
    iVar17 = FUN_0044c390(local_20c);
    if (iVar17 == 0 ||
        ((((((((((((((iVar2 == 0 || iVar3 == 0) || iVar4 == 0) || iVar5 == 0) || iVar6 == 0) ||
                 iVar7 == 0) || iVar8 == 0) || iVar9 == 0) || iVar10 == 0) || iVar11 == 0) ||
            iVar12 == 0) || iVar13 == 0) || iVar14 == 0) || iVar15 == 0) || iVar16 == 0)) {
      FUN_0044beb0(0,&DAT_004a3ec8);
    }
    else {
      DAT_00a730ac = 1;
    }
  }
  FUN_00405460();
  FUN_00405160(&DAT_00a39d20);
  FUN_0044d080(&DAT_00a39d20,&DAT_004a3ec4,0);
  DAT_00a3a138 = FUN_0044d280("low_level",DAT_00a3a138,"DEFAULT",0);
  DAT_00a3a13c = FUN_0044d280("mip_map",DAT_00a3a13c,"DEFAULT",0);
  DAT_00a3a140 = FUN_0044d280("full_16bit",DAT_00a3a140,"DEFAULT",0);
  DAT_00a3a144 = FUN_0044d280("txsel05",DAT_00a3a144,"DEFAULT",0);
  DAT_00a3a148 = FUN_0044d280("next_start",DAT_00a3a148,"DEFAULT",0);
  iVar2 = GetSystemMetrics(0);
  if ((DAT_004c2250 < iVar2) && (iVar2 = GetSystemMetrics(1), DAT_004c2254 < iVar2)) {
    DAT_00b343fc = 1;
  }
  else {
    DAT_00b343fc = 0;
  }
  DAT_00b343fc = FUN_0044d280("window_mode",DAT_00b343fc,"DEFAULT",0);
  DAT_004be09c = FUN_0044d280("_Radeon8500",0,"DEFAULT",0);
  DAT_004be0ac = FUN_0044d280("VSYNC",0,"DEFAULT",0);
  if ((DAT_00b9191c < 0x6a4) || (iVar2 = FUN_0044f210(), iVar2 < 3)) {
    uVar22 = 0;
  }
  else {
    uVar22 = 1;
  }
  FUN_0044d280("StrechRect",uVar22,"DEFAULT",0);
  DAT_004be0b0 = 1;
  DAT_00b34424 = FUN_0044d280("ScaleLimit",0,"DEFAULT",0);
  DAT_004be0b4 = FUN_0044d280("RenderTarget",1,"DEFAULT",0);
  iVar2 = GetSystemMetrics(0);
  if (((iVar2 < 0x501) || (iVar2 = GetSystemMetrics(1), iVar2 < 0x2d1)) && (DAT_004c2250 == 0x500))
  {
    DAT_004c2250 = 0x400;
    DAT_004c2254 = 0x240;
  }
  iVar2 = GetSystemMetrics(0);
  if (((iVar2 < 0x401) || (iVar2 = GetSystemMetrics(1), iVar2 < 0x241)) && (DAT_004c2250 == 0x400))
  {
    DAT_004c2250 = 800;
    DAT_004c2254 = 0x1c2;
  }
  DAT_004c2250 = FUN_0044d280("WIN_SIZE_W",DAT_004c2250,"DEFAULT",0);
  DAT_004c2254 = FUN_0044d280("WIN_SIZE_H",DAT_004c2254,"DEFAULT",0);
  FUN_0044d080(&DAT_00a39d20,"SYSTEM",0);
  DAT_004be008 = FUN_0044d280("wheel",DAT_004be008,"DEFAULT",0);
  uVar22 = FUN_00474c80("DEFAULT",0);
  pHStack_248 = (HACCEL)FUN_0044d280(&DAT_004a3e10,uVar22);
  _DAT_004be004 = (float)(int)pHStack_248 * 0.5;
  uVar22 = FUN_00474c80("DEFAULT",0);
  pHStack_248 = (HACCEL)FUN_0044d280("msg_wait",uVar22);
  _DAT_004be010 = (float)(int)pHStack_248 * 0.5;
  DAT_004be00c = FUN_0044d280("msg_cut_optin",DAT_004be00c,"DEFAULT",0);
  DAT_004be01c = FUN_0044d280("all_sound",DAT_004be01c,"DEFAULT",0);
  DAT_004be020 = FUN_0044d280(&PTR_DAT_004a3de4,DAT_004be020,"DEFAULT",0);
  DAT_004be024 = FUN_0044d280(&DAT_004a3de0,DAT_004be024,"DEFAULT",0);
  DAT_004be028 = FUN_0044d280("voice",DAT_004be028,"DEFAULT",0);
  DAT_004be02c = FUN_0044d280("all_vol",DAT_004be02c,"DEFAULT",0);
  DAT_004be030 = FUN_0044d280("bgm_vol",DAT_004be030,"DEFAULT",0);
  DAT_004be034 = FUN_0044d280("se_vol",DAT_004be034,"DEFAULT",0);
  DAT_004be038 = FUN_0044d280("voice_vol",DAT_004be038,"DEFAULT",0);
  DAT_004be04c = FUN_0044d280("mov_lv",bVar21 + '\x01',"DEFAULT",0);
  DAT_004be068 = FUN_0044d280("ero_voice",0,"DEFAULT",0);
  DAT_004be0a0 = FUN_0044d280("page_voice",0,"DEFAULT",0);
  DAT_00566330 = FUN_0044d280("char_voice0",1,"DEFAULT",0);
  DAT_00566334 = FUN_0044d280("char_voice1",1,"DEFAULT",0);
  DAT_00566338 = FUN_0044d280("char_voice2",1,"DEFAULT",0);
  DAT_0056633c = FUN_0044d280("char_voice3",1,"DEFAULT",0);
  DAT_00566340 = FUN_0044d280("char_voice4",1,"DEFAULT",0);
  DAT_00566344 = FUN_0044d280("char_voice5",1,"DEFAULT",0);
  DAT_00566348 = FUN_0044d280("char_voice6",1,"DEFAULT",0);
  DAT_0056634c = FUN_0044d280("char_voice7",1,"DEFAULT",0);
  DAT_00566350 = FUN_0044d280("char_voice8",1,"DEFAULT",0);
  DAT_00566354 = FUN_0044d280("char_voice9",1,"DEFAULT",0);
  DAT_004be06c = FUN_0044d280(&DAT_004a3d14,0,"DEFAULT",0);
  DAT_004be060 = 0;
  DAT_004be05c = FUN_0044d280("auto_max",DAT_004be05c,"DEFAULT",0);
  DAT_004be078 = FUN_0044d280("win_color",0,"DEFAULT",0);
  DAT_004be07c = FUN_0044d280("win_alpha",0xcf,"DEFAULT",0);
  DAT_004be080 = FUN_0044d280("win_alpha_vis",0x86,"DEFAULT",0);
  DAT_004be084 = FUN_0044d280("win_alpha_novel",0x86,"DEFAULT",0);
  DAT_004be088 = FUN_0044d280("win_alpha_command",0x86,"DEFAULT",0);
  DAT_004be08c = FUN_0044d280("win_disp",1,"DEFAULT",0);
  DAT_004be090 = FUN_0044d280("yes_no",1,"DEFAULT",0);
  DAT_004be094 = FUN_0044d280("R_click",0,"DEFAULT",0);
  if (DAT_00a3a120 == 0) {
    DAT_004be0a4 = 0;
    DAT_004be0a8 = 0;
    DAT_004c2248 = 0xffffffff;
  }
  else {
    DAT_004be0a4 = FUN_0044d280("voice_window",0,"DEFAULT",0);
    DAT_004be0a8 = FUN_0044d280("gvflag_window",0,"DEFAULT",0);
    DAT_004c2248 = FUN_0044d280("debug_mouse",0xffffffff,"DEFAULT",0);
  }
  DAT_00a3a148 = 1;
  SetRect(&tStack_240,0,0,DAT_004c2250,DAT_004c2254);
  AdjustWindowRect(&tStack_240,0x92cb0000,1);
  uVar22 = 0;
  pcVar23 = "DEFAULT";
  iVar2 = GetSystemMetrics(0x10);
  DAT_00a73094 = FUN_0044d280("window_x",(iVar2 + (tStack_240.left - tStack_240.right)) / 2,pcVar23,
                              uVar22);
  uVar22 = 0;
  pcVar23 = "DEFAULT";
  iVar2 = GetSystemMetrics(0x11);
  DAT_00a73098 = FUN_0044d280("window_y",(iVar2 + (tStack_240.top - tStack_240.bottom)) / 2,pcVar23,
                              uVar22);
  uVar20 = ((int)DAT_00a73094 < 1) - 1 & DAT_00a73094;
  iVar2 = GetSystemMetrics(0x10);
  if (iVar2 - DAT_004c2250 <= (int)uVar20) {
    iVar2 = GetSystemMetrics(0x10);
    uVar20 = iVar2 - DAT_004c2250;
  }
  if ((int)uVar20 < 0) {
    DAT_00a73094 = 0;
    uVar20 = DAT_00a73094;
  }
  else {
    uVar20 = ((int)DAT_00a73094 < 1) - 1 & DAT_00a73094;
    iVar2 = GetSystemMetrics(0x10);
    if (iVar2 - DAT_004c2250 <= (int)uVar20) {
      iVar2 = GetSystemMetrics(0x10);
      uVar20 = iVar2 - DAT_004c2250;
    }
  }
  DAT_00a73094 = uVar20;
  uVar20 = ((int)DAT_00a73098 < 1) - 1 & DAT_00a73098;
  iVar2 = GetSystemMetrics(0x11);
  if (iVar2 - DAT_004c2254 <= (int)uVar20) {
    iVar2 = GetSystemMetrics(0x11);
    uVar20 = iVar2 - DAT_004c2254;
  }
  if ((int)uVar20 < 0) {
    DAT_00a73098 = 0;
    uVar20 = DAT_00a73098;
  }
  else {
    uVar20 = ((int)DAT_00a73098 < 1) - 1 & DAT_00a73098;
    iVar2 = GetSystemMetrics(0x11);
    if (iVar2 - DAT_004c2254 <= (int)uVar20) {
      iVar2 = GetSystemMetrics(0x11);
      uVar20 = iVar2 - DAT_004c2254;
    }
  }
  DAT_00a73098 = uVar20;
  pHStack_248 = LoadAcceleratorsA(local_244,(LPCSTR)0x65);
  CoInitialize((LPVOID)0x0);
  if (DAT_00a730b0 != 0) {
    PTR_s_WHITE_ALBUM2__closing_chapter__004c2214 = s_WHITE_ALBUM2_004a3c4c;
    PTR_s_WHITE_ALBUM2__closing_chapter_CN_004c2218 = s_WHITE_ALBUM2CN_004a3c3c;
  }
  CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,1,"WHITE_ALBUM2");
  DVar18 = GetLastError();
  if (DVar18 == 0xb7) {
    if (*param_3 == '\0') goto LAB_00433bb3;
    hWnd = FindWindowA(PTR_s_WHITE_ALBUM2__closing_chapter_CN_004c2218,(LPCSTR)0x0);
    if (hWnd != (HWND)0x0) {
      SendMessageA(hWnd,0x111,0x9c45,0);
    }
  }
  DAT_004c2220 = local_244;
  cVar1 = *param_3;
  if (cVar1 != '\0') {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      if (cVar1 == ' ') break;
      cVar1 = param_3[iVar2];
    } while (cVar1 != '\0');
    pcVar23 = param_3 + iVar2;
    iVar3 = 0;
    if (*pcVar23 != '\0') {
      iVar3 = 0;
      do {
        (&DAT_00a3a158)[iVar3] = pcVar23[iVar3];
        if (pcVar23[iVar3] == '.') {
          (&DAT_00a3a158)[iVar3] = 0;
        }
        if (pcVar23[iVar3] == ' ') {
          iVar3 = iVar3 + 1;
          break;
        }
        if (pcVar23[iVar3] == '\0') goto LAB_004334cb;
        iVar3 = iVar3 + 1;
      } while (pcVar23[iVar3] != '\0');
    }
    iVar4 = 0;
    cVar1 = param_3[iVar3 + iVar2];
    while (cVar1 != '\0') {
      if (cVar1 == ' ') {
        iVar4 = iVar4 + 1;
        break;
      }
      if (cVar1 == '\0') goto LAB_004334cb;
      iVar5 = iVar4 + 1;
      iVar4 = iVar4 + 1;
      cVar1 = (param_3 + iVar3 + iVar2)[iVar5];
    }
    param_3 = param_3 + iVar4 + iVar3 + iVar2;
    iVar2 = 0;
    cVar1 = *param_3;
    while (cVar1 != '\0') {
      (&DAT_004bf800)[iVar2] = param_3[iVar2];
      if (param_3[iVar2] == ' ') {
        (&DAT_004bf800)[iVar3] = 0;
        break;
      }
      if (param_3[iVar2] == '\0') {
        (&DAT_004bf800)[iVar2] = 0;
        break;
      }
      iVar2 = iVar2 + 1;
      cVar1 = param_3[iVar2];
    }
  }
LAB_004334cb:
  timeGetDevCaps(&tStack_230,8);
  timeBeginPeriod(tStack_230.wPeriodMin);
  WINNLSEnableIME(DAT_004c2224,0);
  DVar18 = timeGetTime();
  FUN_00475d44(DVar18);
  iVar2 = FUN_004326b0();
  if (iVar2 != 0) {
    ShowWindow(DAT_004c2224,param_4);
    UpdateWindow(DAT_004c2224);
    SetFocus(DAT_004c2224);
    DAT_004c221c = 1;
    FUN_00417540(DAT_004be0a4);
    hAccTable = pHStack_248;
LAB_00433560:
    BVar19 = PeekMessageA(&tStack_228,(HWND)0x0,0,0,0);
    if (BVar19 == 0) goto LAB_004335ae;
    BVar19 = GetMessageA(&tStack_228,(HWND)0x0,0,0);
    if (BVar19 != 0) goto code_r0x00433581;
    FUN_00430b00();
    timeEndPeriod(1);
    FUN_00430b90(1);
    timeEndPeriod(tStack_230.wPeriodMin);
    FUN_0044d080(&DAT_00a39d20,&DAT_004a3ec4,0);
    FUN_0044d200("low_level",DAT_00a3a138,"DEFAULT",0);
    FUN_0044d200("mip_map",DAT_00a3a13c,"DEFAULT",0);
    FUN_0044d200("full_16bit",DAT_00a3a140,"DEFAULT",0);
    FUN_0044d200("txsel05",DAT_00a3a144,"DEFAULT",0);
    FUN_0044d200("next_start",DAT_00a3a148,"DEFAULT",0);
    FUN_0044d200("window_mode",DAT_00b343fc,"DEFAULT",0);
    FUN_0044d200("_Radeon8500",DAT_004be09c,"DEFAULT",0);
    FUN_0044d200("VSYNC",DAT_004be0ac,"DEFAULT",0);
    FUN_0044d200("StrechRect",DAT_004be0b0,"DEFAULT",0);
    FUN_0044d200("ScaleLimit",DAT_00b34424,"DEFAULT",0);
    FUN_0044d200("RenderTarget",DAT_004be0b4,"DEFAULT",0);
    FUN_0044d200("WIN_SIZE_W",DAT_004c2250,"DEFAULT",0);
    FUN_0044d200("WIN_SIZE_H",DAT_004c2254,"DEFAULT",0);
    FUN_0044d080(&DAT_00a39d20,"SYSTEM",0);
    FUN_0044d200("wheel",DAT_004be008,"DEFAULT",0);
    uVar22 = FUN_00474c80("DEFAULT",0);
    FUN_0044d200(&DAT_004a3e10,uVar22);
    uVar22 = FUN_00474c80("DEFAULT",0);
    FUN_0044d200("msg_wait",uVar22);
    FUN_0044d200("msg_cut_optin",DAT_004be00c,"DEFAULT",0);
    FUN_0044d200("all_sound",DAT_004be01c,"DEFAULT",0);
    FUN_0044d200(&PTR_DAT_004a3de4,DAT_004be020,"DEFAULT",0);
    FUN_0044d200(&DAT_004a3de0,DAT_004be024,"DEFAULT",0);
    FUN_0044d200("voice",DAT_004be028,"DEFAULT",0);
    FUN_0044d200("all_vol",DAT_004be02c,"DEFAULT",0);
    FUN_0044d200("bgm_vol",DAT_004be030,"DEFAULT",0);
    FUN_0044d200("se_vol",DAT_004be034,"DEFAULT",0);
    FUN_0044d200("voice_vol",DAT_004be038,"DEFAULT",0);
    FUN_0044d200("mov_lv",DAT_004be04c,"DEFAULT",0);
    FUN_0044d200("ero_voice",DAT_004be068,"DEFAULT",0);
    FUN_0044d200("page_voice",DAT_004be0a0,"DEFAULT",0);
    FUN_0044d200("char_voice0",DAT_00566330,"DEFAULT",0);
    FUN_0044d200("char_voice1",DAT_00566334,"DEFAULT",0);
    FUN_0044d200("char_voice2",DAT_00566338,"DEFAULT",0);
    FUN_0044d200("char_voice3",DAT_0056633c,"DEFAULT",0);
    FUN_0044d200("char_voice4",DAT_00566340,"DEFAULT",0);
    FUN_0044d200("char_voice5",DAT_00566344,"DEFAULT",0);
    FUN_0044d200("char_voice6",DAT_00566348,"DEFAULT",0);
    FUN_0044d200("char_voice7",DAT_0056634c,"DEFAULT",0);
    FUN_0044d200("char_voice8",DAT_00566350,"DEFAULT",0);
    FUN_0044d200("char_voice9",DAT_00566354,"DEFAULT",0);
    FUN_0044d200(&DAT_004a3d14,DAT_004be06c,"DEFAULT",0);
    FUN_0044d200("auto_max",DAT_004be05c,"DEFAULT",0);
    FUN_0044d200("win_color",DAT_004be078,"DEFAULT",0);
    FUN_0044d200("win_alpha",DAT_004be07c,"DEFAULT",0);
    FUN_0044d200("win_alpha_vis",DAT_004be080,"DEFAULT",0);
    FUN_0044d200("win_alpha_novel",DAT_004be084,"DEFAULT",0);
    FUN_0044d200("win_alpha_command",DAT_004be088,"DEFAULT",0);
    FUN_0044d200("win_disp",DAT_004be08c,"DEFAULT",0);
    FUN_0044d200("yes_no",DAT_004be090,"DEFAULT",0);
    FUN_0044d200("R_click",DAT_004be094,"DEFAULT",0);
    FUN_0044d200("voice_window",DAT_004be0a4,"DEFAULT",0);
    FUN_0044d200("gvflag_window",DAT_004be0a8,"DEFAULT",0);
    FUN_0044d200("debug_mouse",DAT_004c2248,"DEFAULT",0);
    FUN_0044d200("window_x",DAT_00a73094,"DEFAULT",0);
    FUN_0044d200("window_y",DAT_00a73098,"DEFAULT",0);
  }
LAB_00433bb3:
  ___security_check_cookie_4();
  return;
code_r0x00433581:
  iVar2 = TranslateAcceleratorA(DAT_004c2224,hAccTable,&tStack_228);
  if (iVar2 == 0) {
    TranslateMessage(&tStack_228);
    DispatchMessageA(&tStack_228);
LAB_004335ae:
    if (DAT_00b6f214 == 0) {
      FUN_00418c00(0x3c);
      Sleep(2);
      goto LAB_00433560;
    }
    if (DAT_00b6f210 == 0) {
      DAT_00b6f214 = 0;
    }
    else {
      FUN_0044a350(DAT_004c2228);
      FUN_0044a600(DAT_004c2224,DAT_004c2228,0);
      iVar2 = FUN_0044b630(0);
      if ((((iVar2 != 0) || (iVar2 = FUN_0044b630(1), iVar2 != 0)) ||
          ((DAT_00b5ffa6 != '\0' || ((DAT_00b5ffa7 != '\0' || (DAT_00b5ffad != '\0')))))) &&
         ((*(int *)(DAT_00b6f210 + 0x14) < 200 ||
          (iVar2 = FUN_00401200(*(int *)(DAT_00b6f210 + 0x14)), iVar2 != 0)))) {
        FUN_00430b30();
      }
      if ((DAT_00b6f210 != 0) && (iVar2 = FUN_0044bac0(), iVar2 != 0)) {
        FUN_00430b30();
        Sleep(2);
        goto LAB_00433560;
      }
    }
    Sleep(2);
  }
  goto LAB_00433560;
}

