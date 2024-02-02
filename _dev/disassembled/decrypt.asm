                             *************************************************************
                             *                           FUNCTION                         
                             *************************************************************
                             undefined  FUN_00436df0 (undefined4  param_1 ,  undefined4 
                               assume FS_OFFSET = 0xffdff000
             undefined         AL:1           <RETURN>
             undefined4        Stack[0x4]:4   param_1                                 XREF[3]:     00436e12 (R) , 
                                                                                                   00436ea7 (W) , 
                                                                                                   00436ed2 (R)   
             undefined4        Stack[0x8]:4   param_2                                 XREF[1]:     00436e16 (R)   
             undefined4        Stack[0xc]:4   param_3                                 XREF[3]:     00436e3e (R) , 
                                                                                                   00436e56 (R) , 
                                                                                                   00436e85 (R)   
             undefined4        Stack[0x10]:4  param_4                                 XREF[2]:     00436eb0 (R) , 
                                                                                                   00436eeb (R)   
             undefined4        Stack[-0x4]:4  local_4                                 XREF[3]:     00436e09 (W) , 
                                                                                                   00436ee3 (W) , 
                                                                                                   00436f15 (R)   
             undefined4        Stack[-0x8]:4  local_8                                 XREF[4]:     00436e05 (W) , 
                                                                                                   00436e38 (R) , 
                                                                                                   00436e6a (W) , 
                                                                                                   00436e8f (W)   
             undefined4        Stack[-0xc]:4  local_c                                 XREF[5]:     00436e22 (W) , 
                                                                                                   00436e30 (R) , 
                                                                                                   00436e51 (W) , 
                                                                                                   00436e65 (R) , 
                                                                                                   00436ef1 (R W)   
                             FUN_00436df0                                    XREF[2]:     FUN_00436f40:00436f88 (c) , 
                                                                                          FUN_00437100:00437293 (c)   
        00436df0 83  ec  0c       SUB        ESP ,0xc
        00436df3 53              PUSH       EBX
        00436df4 55              PUSH       EBP
        00436df5 56              PUSH       ESI
        00436df6 57              PUSH       EDI
        00436df7 68  ee  0f       PUSH       0xfee
                 00  00
        00436dfc 33  ed           XOR        EBP ,EBP
        00436dfe 6a  20           PUSH       0x20
        00436e00 68  c8  cd       PUSH       DAT_00a7cdc8                                     = ??
                 a7  00
        00436e05 89  6c  24       MOV        dword ptr [ESP  + local_8 ],EBP
                 20
        00436e09 89  6c  24       MOV        dword ptr [ESP  + local_4 ],EBP
                 24
        00436e0d e8  9e  e3       CALL       _memset                                          void * _memset(void * _Dst, int 
                 03  00
        00436e12 8b  7c  24       MOV        EDI ,dword ptr [ESP  + param_1 ]
                 2c
        00436e16 8b  5c  24       MOV        EBX ,dword ptr [ESP  + param_2 ]
                 30
        00436e1a 83  c4  0c       ADD        ESP ,0xc
        00436e1d be  ee  0f       MOV        ESI ,0xfee
                 00  00
        00436e22 89  6c  24       MOV        dword ptr [ESP  + local_c ],EBP
                 10
        00436e26 eb  08           JMP        LAB_00436e30
        00436e28 8d              ??         8Dh
        00436e29 a4              ??         A4h
        00436e2a 24              ??         24h    $
        00436e2b 00              ??         00h
        00436e2c 00              ??         00h
        00436e2d 00              ??         00h
        00436e2e 00              ??         00h
        00436e2f 90              ??         90h
                             LAB_00436e30                                    XREF[2]:     00436e26 (j) ,  00436ef5 (j)   
        00436e30 f7  44  24       TEST       dword ptr [ESP  + local_c ],0x100
                 10  00  01 
                 00  00
        00436e38 8b  54  24       MOV        EDX ,dword ptr [ESP  + local_8 ]
                 14
        00436e3c 75  18           JNZ        LAB_00436e56
        00436e3e 3b  54  24       CMP        EDX ,dword ptr [ESP  + param_3 ]
                 28
        00436e42 0f  8d  b2       JGE        LAB_00436efa
                 00  00  00
        00436e48 0f  b6  03       MOVZX      EAX ,byte ptr [EBX ]
        00436e4b 0d  00  ff       OR         EAX ,0xff00
                 00  00
        00436e50 42              INC        EDX
        00436e51 89  44  24       MOV        dword ptr [ESP  + local_c ],EAX
                 10
        00436e55 43              INC        EBX
                             LAB_00436e56                                    XREF[1]:     00436e3c (j)   
        00436e56 3b  54  24       CMP        EDX ,dword ptr [ESP  + param_3 ]
                 28
        00436e5a 0f  8d  a1       JGE        LAB_00436f01
                 00  00  00
        00436e60 0f  b6  03       MOVZX      EAX ,byte ptr [EBX ]
        00436e63 42              INC        EDX
        00436e64 43              INC        EBX
        00436e65 f6  44  24       TEST       byte ptr [ESP  + local_c ],0x1
                 10  01
        00436e6a 89  54  24       MOV        dword ptr [ESP  + local_8 ],EDX
                 14
        00436e6e 74  15           JZ         LAB_00436e85
        00436e70 8b  ce           MOV        ECX ,ESI
        00436e72 81  e1  ff       AND        ECX ,0xfff
                 0f  00  00
        00436e78 88  81  c8       MOV        byte ptr [ECX  + 0xa7cdc8 ]=> DAT_00a7ddb6 ,AL     = ??
                 cd  a7  00
        00436e7e 88  07           MOV        byte ptr [EDI ],AL
        00436e80 47              INC        EDI
        00436e81 46              INC        ESI
        00436e82 45              INC        EBP
        00436e83 eb  66           JMP        LAB_00436eeb
                             LAB_00436e85                                    XREF[1]:     00436e6e (j)   
        00436e85 3b  54  24       CMP        EDX ,dword ptr [ESP  + param_3 ]
                 28
        00436e89 7d  7d           JGE        LAB_00436f08
        00436e8b 0f  b6  0b       MOVZX      ECX ,byte ptr [EBX ]
        00436e8e 42              INC        EDX
        00436e8f 89  54  24       MOV        dword ptr [ESP  + local_8 ],EDX
                 14
        00436e93 8b  d1           MOV        EDX ,ECX
        00436e95 81  e2  f0       AND        EDX ,0xf0
                 00  00  00
        00436e9b c1  e2  04       SHL        EDX ,0x4
        00436e9e 43              INC        EBX
        00436e9f 0b  c2           OR         EAX ,EDX
        00436ea1 83  e1  0f       AND        ECX ,0xf
        00436ea4 83  c1  02       ADD        ECX ,0x2
        00436ea7 89  5c  24       MOV        dword ptr [ESP  + param_1 ],EBX
                 20
        00436eab 8b  d1           MOV        EDX ,ECX
        00436ead 78  3c           JS         LAB_00436eeb
        00436eaf 90              NOP
                             LAB_00436eb0                                    XREF[1]:     00436edf (j)   
        00436eb0 3b  6c  24       CMP        EBP ,dword ptr [ESP  + param_4 ]
                 2c
        00436eb4 7f  2d           JG         LAB_00436ee3
        00436eb6 8b  c8           MOV        ECX ,EAX
        00436eb8 81  e1  ff       AND        ECX ,0xfff
                 0f  00  00
        00436ebe 8a  89  c8       MOV        CL ,byte ptr [ECX  + DAT_00a7cdc8 ]                = ??
                 cd  a7  00
        00436ec4 8b  de           MOV        EBX ,ESI
        00436ec6 81  e3  ff       AND        EBX ,0xfff
                 0f  00  00
        00436ecc 88  8b  c8       MOV        byte ptr [EBX  + 0xa7cdc8 ]=> DAT_00a7ddb6 ,CL     = ??
                 cd  a7  00
        00436ed2 8b  5c  24       MOV        EBX ,dword ptr [ESP  + param_1 ]
                 20
        00436ed6 88  0f           MOV        byte ptr [EDI ],CL
        00436ed8 4a              DEC        EDX
        00436ed9 40              INC        EAX
        00436eda 46              INC        ESI
        00436edb 47              INC        EDI
        00436edc 45              INC        EBP
        00436edd 85  d2           TEST       EDX ,EDX
        00436edf 7d  cf           JGE        LAB_00436eb0
        00436ee1 eb  08           JMP        LAB_00436eeb
                             LAB_00436ee3                                    XREF[1]:     00436eb4 (j)   
        00436ee3 c7  44  24       MOV        dword ptr [ESP  + local_4 ],0x1
                 18  01  00 
                 00  00
                             LAB_00436eeb                                    XREF[3]:     00436e83 (j) ,  00436ead (j) , 
                                                                                          00436ee1 (j)   
        00436eeb 3b  6c  24       CMP        EBP ,dword ptr [ESP  + param_4 ]
                 2c
        00436eef 7f  2b           JG         LAB_00436f1c
        00436ef1 d1  6c  24       SHR        dword ptr [ESP  + local_c ],0x1
                 10
        00436ef5 e9  36  ff       JMP        LAB_00436e30
                 ff  ff
                             LAB_00436efa                                    XREF[1]:     00436e42 (j)   
        00436efa 68  e8  40       PUSH       DAT_004a40e8                                     = 82h
                 4a  00
        00436eff eb  0c           JMP        LAB_00436f0d
                             LAB_00436f01                                    XREF[1]:     00436e5a (j)   
        00436f01 68  e4  40       PUSH       DAT_004a40e4                                     = 82h
                 4a  00
        00436f06 eb  05           JMP        LAB_00436f0d
                             LAB_00436f08                                    XREF[1]:     00436e89 (j)   
        00436f08 68  e0  40       PUSH       DAT_004a40e0                                     = 82h
                 4a  00
                             LAB_00436f0d                                    XREF[2]:     00436eff (j) ,  00436f06 (j)   
        00436f0d e8  0e  4f       CALL       FUN_0044be20                                     undefined FUN_0044be20(undefined
                 01  00
        00436f12 83  c4  04       ADD        ESP ,0x4
        00436f15 83  7c  24       CMP        dword ptr [ESP  + local_4 ],0x0
                 18  00
        00436f1a 74  0f           JZ         LAB_00436f2b
                             LAB_00436f1c                                    XREF[1]:     00436eef (j)   
        00436f1c 68  d4  40       PUSH       DAT_004a40d4                                     = 83h
                 4a  00
        00436f21 6a  00           PUSH       0x0
        00436f23 e8  88  4f       CALL       FUN_0044beb0                                     undefined FUN_0044beb0(undefined
                 01  00
        00436f28 83  c4  08       ADD        ESP ,0x8
                             LAB_00436f2b                                    XREF[1]:     00436f1a (j)   
        00436f2b 5f              POP        EDI
        00436f2c 8d  86  12       LEA        EAX ,[ESI  + 0xfffff012 ]
                 f0  ff  ff
        00436f32 5e              POP        ESI
        00436f33 5d              POP        EBP
        00436f34 5b              POP        EBX
        00436f35 83  c4  0c       ADD        ESP ,0xc
        00436f38 c3              RET
        00436f39 cc              ??         CCh
        00436f3a cc              ??         CCh
        00436f3b cc              ??         CCh
        00436f3c cc              ??         CCh
        00436f3d cc              ??         CCh
        00436f3e cc              ??         CCh
        00436f3f cc              ??         CCh
