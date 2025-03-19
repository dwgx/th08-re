
undefined4 FUN_0040a1b0(int param_1)

{
  float *pfVar1;
  D3DXVECTOR3 *pDVar2;
  uint uVar3;
  int *in_ECX;
  char cVar4;
  float10 fVar5;
  ulonglong uVar6;
  D3DXVECTOR3 local_1cc;
  D3DXVECTOR3 local_1c0;
  D3DXVECTOR3 local_1b4;
  D3DXVECTOR3 local_1a8;
  D3DXVECTOR3 local_19c;
  D3DXVECTOR3 local_190;
  D3DXVECTOR3 local_184;
  D3DXVECTOR3 local_178;
  D3DXVECTOR3 local_16c;
  D3DXVECTOR3 local_160;
  D3DXVECTOR3 local_154;
  D3DXVECTOR3 local_148;
  float local_13c;
  D3DXVECTOR3 local_138;
  float local_12c;
  float local_128;
  float local_124;
  undefined4 local_120;
  undefined4 local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  undefined4 local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  D3DXVECTOR3 local_b4;
  undefined4 local_a8;
  float local_a4;
  D3DXVECTOR3 local_a0;
  float local_94;
  undefined4 local_90;
  short *local_8c;
  D3DXVECTOR3 local_88;
  D3DXVECTOR3 local_7c;
  D3DXVECTOR3 local_70;
  float local_64;
  int local_60;
  D3DXMATRIX local_5c;
  int local_18;
  short *local_14;
  int local_10;
  int local_c;
  short *local_8;
  
  local_14 = (short *)in_ECX[0x201];
  local_10 = 0;
  local_90 = 0;
  D3DXVECTOR3::D3DXVECTOR3(&local_7c);
  D3DXVECTOR3::D3DXVECTOR3(&local_70);
  D3DXVECTOR3::D3DXVECTOR3(&local_88);
  D3DXVECTOR3::D3DXVECTOR3(&local_a0,0.0,0.0,0.0);
  D3DXVECTOR3::D3DXVECTOR3((D3DXVECTOR3 *)&local_5c);
  local_18 = 0xff;
  FUN_0040b6d0();
  FUN_0040ba90(1);
  D3DXMatrixIdentity(&local_5c);
  local_70.x = th08::g_Supervisor.m_ViewMatrix.field0_0x0.field0._11;
  local_70.y = th08::g_Supervisor.m_ViewMatrix.field0_0x0.field0._12;
  local_70.z = th08::g_Supervisor.m_ViewMatrix.field0_0x0.field0._13;
  D3DXVec3Normalize(&local_70,&local_70);
  do {
    if (*local_14 < 0) {
      return 0;
    }
    local_60 = *(int *)(in_ECX[0x200] + *local_14 * 4);
    if (*(char *)(local_60 + 2) == param_1) {
      local_8c = (short *)(local_60 + 0x1c);
      local_7c.x = *(float *)(local_60 + 0x10) / 2.0 +
                   ((*(float *)(local_60 + 4) + *(float *)(local_14 + 2)) - (float)in_ECX[0x209]);
      local_7c.y = *(float *)(local_60 + 0x14) / 2.0 +
                   ((*(float *)(local_60 + 8) + *(float *)(local_14 + 4)) - (float)in_ECX[0x20a]);
      local_7c.z = *(float *)(local_60 + 0x18) / 2.0 +
                   ((*(float *)(local_60 + 0xc) + *(float *)(local_14 + 6)) - (float)in_ECX[0x20b]);
      pDVar2 = D3DXVECTOR3::operator+
                         ((D3DXVECTOR3 *)(in_ECX + 0x18e5),&local_148,
                          (D3DXVECTOR3 *)(in_ECX + 0x18f4));
      pDVar2 = D3DXVECTOR3::operator-(&local_7c,&local_154,pDVar2);
      local_7c.x = pDVar2->x;
      local_7c.y = pDVar2->y;
      local_7c.z = pDVar2->z;
      fVar5 = (float10)FUN_0040b500();
      if (fVar5 <= (float10)(float)in_ECX[0x191c]) {
        fVar5 = (float10)FUN_0040b540();
        local_64 = (float)fVar5;
        fVar5 = (float10)FUN_0040b4c0();
        local_94 = (float)(fVar5 / (float10)2.0 + (float10)960.0);
        if ((local_64 <= local_94) && (local_64 < 80.0 == NAN(local_64))) {
          *(byte *)(local_60 + 3) = *(byte *)(local_60 + 3) | 2;
          local_90 = 1;
          for (; -1 < *local_8c; local_8c = (short *)((int)local_8c + (int)local_8c[1])) {
            local_c = local_8c[3] * 0x2a4 + *in_ECX;
            if (*local_8c == 0) {
              *(float *)(local_c + 0x208) =
                   (*(float *)(local_c + 0x288) + *(float *)(local_8c + 4) +
                   *(float *)(local_14 + 2)) - (float)in_ECX[0x209];
              *(float *)(local_c + 0x20c) =
                   (*(float *)(local_c + 0x28c) + *(float *)(local_8c + 6) +
                   *(float *)(local_14 + 4)) - (float)in_ECX[0x20a];
              *(float *)(local_c + 0x210) =
                   (*(float *)(local_c + 0x290) + *(float *)(local_8c + 8) +
                   *(float *)(local_14 + 6)) - (float)in_ECX[0x20b];
              if (NAN(*(float *)(local_8c + 10)) == (*(float *)(local_8c + 10) == 0.0)) {
                *(float *)(local_c + 0x18) =
                     *(float *)(local_8c + 10) / *(float *)(*(int *)(local_c + 0x224) + 0x34);
              }
              if (NAN(*(float *)(local_8c + 0xc)) == (*(float *)(local_8c + 0xc) == 0.0)) {
                *(float *)(local_c + 0x1c) =
                     *(float *)(local_8c + 0xc) / *(float *)(*(int *)(local_c + 0x224) + 0x30);
              }
              if ((*(ushort *)(local_c + 0x1fc) & 0xf) == 2) {
                pDVar2 = D3DXVECTOR3::D3DXVECTOR3((D3DXVECTOR3 *)(local_c + 0x208));
                local_5c.field0_0x0.field0._41 = pDVar2->x;
                pDVar2 = D3DXVECTOR3::D3DXVECTOR3((D3DXVECTOR3 *)(local_c + 0x208));
                local_5c.field0_0x0.field0._42 = pDVar2->y;
                pDVar2 = D3DXVECTOR3::D3DXVECTOR3((D3DXVECTOR3 *)(local_c + 0x208));
                local_5c.field0_0x0.field0._43 = pDVar2->z;
                thunk_FUN_0047a355(&local_7c,&local_a0,0x17ce820,0x17ce7e0,0x17ce7a0,&local_5c);
                if (NAN(*(float *)(local_8c + 10)) == (*(float *)(local_8c + 10) == 0.0)) {
                  local_a4 = *(float *)(local_8c + 10);
                }
                else {
                  local_a4 = *(float *)(*(int *)(local_c + 0x224) + 0x34);
                }
                local_5c.field0_0x0.field0._41 =
                     local_70.x * local_a4 * *(float *)(local_c + 0x18) +
                     local_5c.field0_0x0.field0._41;
                local_5c.field0_0x0.field0._42 =
                     local_70.y * local_a4 * *(float *)(local_c + 0x18) +
                     local_5c.field0_0x0.field0._42;
                local_5c.field0_0x0.field0._43 =
                     local_70.z * local_a4 * *(float *)(local_c + 0x18) +
                     local_5c.field0_0x0.field0._43;
                thunk_FUN_0047a355(&local_88,&local_a0,0x17ce820,0x17ce7e0,0x17ce7a0,&local_5c);
                pDVar2 = D3DXVECTOR3::operator-(&local_88,&local_160,&local_7c);
                local_88.x = pDVar2->x;
                local_88.y = pDVar2->y;
                local_88.z = pDVar2->z;
                fVar5 = (float10)FUN_0040b4c0();
                *(float *)(local_c + 0x18) = (float)(fVar5 / (float10)local_a4);
                *(undefined4 *)(local_c + 0x1c) = *(undefined4 *)(local_c + 0x18);
                if (local_a4 < 0.0 != NAN(local_a4)) {
                  *(float *)(local_c + 0x1c) = -*(float *)(local_c + 0x1c);
                }
                pDVar2 = D3DXVECTOR3::operator+
                                   ((D3DXVECTOR3 *)(in_ECX + 0x18e5),&local_16c,
                                    (D3DXVECTOR3 *)(in_ECX + 0x18f4));
                pDVar2 = D3DXVECTOR3::operator-((D3DXVECTOR3 *)(local_c + 0x208),&local_178,pDVar2);
                local_88.x = pDVar2->x;
                local_88.y = pDVar2->y;
                local_88.z = pDVar2->z;
                fVar5 = (float10)FUN_0040b4c0();
                local_a4 = (float)fVar5;
                local_a8 = *(undefined4 *)(local_c + 0x1f0);
                if ((float)in_ECX[699] < local_a4 != (NAN((float)in_ECX[699]) || NAN(local_a4))) {
                  local_a4 = ((float)in_ECX[699] - local_a4) /
                             ((float)in_ECX[699] - (float)in_ECX[700]);
                  if (1.0 <= local_a4) goto LAB_0040b3fd;
                  cVar4 = *(char *)(local_c + 0x1f0);
                  uVar6 = __ftol2((float10)((uint)*(byte *)(local_c + 0x1f0) -
                                           (uint)*(byte *)(in_ECX + 0x2bd)) * (float10)local_a4);
                  *(char *)(local_c + 0x1f0) = cVar4 - (char)uVar6;
                  cVar4 = *(char *)(local_c + 0x1f1);
                  uVar6 = __ftol2((float10)((uint)*(byte *)(local_c + 0x1f1) -
                                           (uint)*(byte *)((int)in_ECX + 0xaf5)) * (float10)local_a4
                                 );
                  *(char *)(local_c + 0x1f1) = cVar4 - (char)uVar6;
                  cVar4 = *(char *)(local_c + 0x1f2);
                  uVar6 = __ftol2((float10)((uint)*(byte *)(local_c + 0x1f2) -
                                           (uint)*(byte *)((int)in_ECX + 0xaf6)) * (float10)local_a4
                                 );
                  *(char *)(local_c + 0x1f2) = cVar4 - (char)uVar6;
                  uVar6 = __ftol2(((float10)1.0 - (float10)local_a4) *
                                  (float10)(uint)*(byte *)(local_c + 499));
                  *(char *)(local_c + 499) = (char)uVar6;
                }
                *(float *)(local_c + 0x208) = local_7c.x;
                *(float *)(local_c + 0x20c) = local_7c.y;
                *(float *)(local_c + 0x210) = local_7c.z;
                if ((*(float *)(local_c + 0x210) < 0.0 == NAN(*(float *)(local_c + 0x210))) &&
                   (*(float *)(local_c + 0x210) <= 1.0)) {
                  if (local_18 != 0) {
                    uVar3 = th08::Supervisor::IsFogDisabled(&th08::g_Supervisor);
                    if (uVar3 == 0) {
                      th08::Supervisor::DisableFog(&th08::g_Supervisor);
                    }
                    local_18 = 0;
                  }
                  FUN_00463800(local_c);
                  if ((((*(ushort *)(local_c + 0x1fc) & 0xf0) == 0x10) &&
                      (local_a4 < (float)in_ECX[699])) && (in_ECX[0x191f] != 0)) {
                    pfVar1 = (float *)(in_ECX + in_ECX[0x191e] * 3 + 0x1920);
                    *pfVar1 = local_7c.x;
                    pfVar1[1] = local_7c.y;
                    pfVar1[2] = local_7c.z;
                    in_ECX[in_ECX[0x191e] * 3 + 0x1922] = 0;
                    in_ECX[0x191e] = in_ECX[0x191e] + 1;
                  }
                }
                *(undefined4 *)(local_c + 0x1f0) = local_a8;
              }
              else {
                uVar3 = th08::Supervisor::IsFogDisabled(&th08::g_Supervisor);
                if ((uVar3 == 0) && (local_18 != 1)) {
                  uVar3 = th08::Supervisor::IsFogDisabled(&th08::g_Supervisor);
                  if (uVar3 == 0) {
                    th08::Supervisor::EnableFog(&th08::g_Supervisor);
                  }
                  local_18 = 1;
                }
                FUN_00464470(local_c);
              }
            }
            else if (*local_8c == 1) {
              local_8 = local_8c;
              D3DXVECTOR3::D3DXVECTOR3(&local_b4);
              D3DXVECTOR3::D3DXVECTOR3(&local_138);
              _eh_vector_constructor_iterator_
                        (&local_12c,0x1c,4,th08::VertexDiffiuseXyzrwh::VertexDiffiuseXyzrwh);
              local_b4.x = (*(float *)(local_8 + 4) + *(float *)(local_14 + 2)) -
                           (float)in_ECX[0x209];
              local_b4.y = (*(float *)(local_8 + 6) + *(float *)(local_14 + 4)) -
                           (float)in_ECX[0x20a];
              local_b4.z = (*(float *)(local_8 + 8) + *(float *)(local_14 + 6)) -
                           (float)in_ECX[0x20b];
              local_5c.field0_0x0.field0._41 = local_b4.x;
              local_5c.field0_0x0.field0._42 = local_b4.y;
              local_5c.field0_0x0.field0._43 = local_b4.z;
              thunk_FUN_0047a355(&local_7c,&local_a0,0x17ce820,0x17ce7e0,0x17ce7a0,&local_5c);
              if (NAN(*(float *)(local_8 + 0x10)) == (*(float *)(local_8 + 0x10) == 0.0)) {
                local_bc = *(float *)(local_8 + 0x10);
              }
              else {
                local_bc = *(float *)(*(int *)(local_c + 0x224) + 0x34);
              }
              local_5c.field0_0x0.field0._41 =
                   local_70.x * local_bc + local_5c.field0_0x0.field0._41;
              local_5c.field0_0x0.field0._42 =
                   local_70.y * local_bc + local_5c.field0_0x0.field0._42;
              local_5c.field0_0x0.field0._43 =
                   local_70.z * local_bc + local_5c.field0_0x0.field0._43;
              thunk_FUN_0047a355(&local_88,&local_a0,0x17ce820,0x17ce7e0,0x17ce7a0,&local_5c);
              pDVar2 = D3DXVECTOR3::operator-(&local_88,&local_184,&local_7c);
              local_88.x = pDVar2->x;
              local_88.y = pDVar2->y;
              local_88.z = pDVar2->z;
              fVar5 = (float10)FUN_0040b4c0();
              local_13c = (float)(fVar5 / (float10)2.0);
              pDVar2 = D3DXVECTOR3::operator+
                                 ((D3DXVECTOR3 *)(in_ECX + 0x18e5),&local_190,
                                  (D3DXVECTOR3 *)(in_ECX + 0x18f4));
              pDVar2 = D3DXVECTOR3::operator-(&local_b4,&local_19c,pDVar2);
              local_88.x = pDVar2->x;
              local_88.y = pDVar2->y;
              local_88.z = pDVar2->z;
              fVar5 = (float10)FUN_0040b4c0();
              local_bc = (float)fVar5;
              if ((float)in_ECX[699] < local_bc == (NAN((float)in_ECX[699]) || NAN(local_bc))) {
                local_11c = *(uint *)(local_c + 0x1f0);
                local_100 = local_11c;
              }
              else {
                local_bc = ((float)in_ECX[699] - local_bc) /
                           ((float)in_ECX[699] - (float)in_ECX[700]);
                if (local_bc < 1.0 == NAN(local_bc)) {
                  local_100 = local_100 & 0xffffff;
                  local_11c = local_11c & 0xffffff;
                }
                else {
                  cVar4 = *(char *)(local_c + 0x1f0);
                  uVar6 = __ftol2((float10)((uint)*(byte *)(local_c + 0x1f0) -
                                           (uint)*(byte *)(in_ECX + 0x2bd)) * (float10)local_bc);
                  cVar4 = cVar4 - (char)uVar6;
                  local_100 = CONCAT31(local_100._1_3_,cVar4);
                  local_11c = CONCAT31(local_11c._1_3_,cVar4);
                  cVar4 = *(char *)(local_c + 0x1f1);
                  uVar6 = __ftol2((float10)((uint)*(byte *)(local_c + 0x1f1) -
                                           (uint)*(byte *)((int)in_ECX + 0xaf5)) * (float10)local_bc
                                 );
                  cVar4 = cVar4 - (char)uVar6;
                  local_100._0_2_ = CONCAT11(cVar4,(undefined)local_100);
                  local_11c._0_2_ = CONCAT11(cVar4,(undefined)local_11c);
                  cVar4 = *(char *)(local_c + 0x1f2);
                  uVar6 = __ftol2((float10)((uint)*(byte *)(local_c + 0x1f2) -
                                           (uint)*(byte *)((int)in_ECX + 0xaf6)) * (float10)local_bc
                                 );
                  cVar4 = cVar4 - (char)uVar6;
                  local_100._0_3_ = CONCAT12(cVar4,(undefined2)local_100);
                  local_11c._0_3_ = CONCAT12(cVar4,(undefined2)local_11c);
                  uVar6 = __ftol2(((float10)1.0 - (float10)local_bc) *
                                  (float10)(uint)*(byte *)(local_c + 499));
                  local_100 = CONCAT13((char)uVar6,(undefined3)local_100);
                  local_11c = CONCAT13((char)uVar6,(undefined3)local_11c);
                }
              }
              local_b4.x = (*(float *)(local_8 + 10) + *(float *)(local_14 + 2)) -
                           (float)in_ECX[0x209];
              local_b4.y = (*(float *)(local_8 + 0xc) + *(float *)(local_14 + 4)) -
                           (float)in_ECX[0x20a];
              local_b4.z = (*(float *)(local_8 + 0xe) + *(float *)(local_14 + 6)) -
                           (float)in_ECX[0x20b];
              local_5c.field0_0x0.field0._41 = local_b4.x;
              local_5c.field0_0x0.field0._42 = local_b4.y;
              local_5c.field0_0x0.field0._43 = local_b4.z;
              thunk_FUN_0047a355(&local_138,&local_a0,0x17ce820,0x17ce7e0,0x17ce7a0,&local_5c);
              if (NAN(*(float *)(local_8 + 0x10)) == (*(float *)(local_8 + 0x10) == 0.0)) {
                local_bc = *(float *)(local_8 + 0x10);
              }
              else {
                local_bc = *(float *)(*(int *)(local_c + 0x224) + 0x34);
              }
              local_5c.field0_0x0.field0._41 =
                   local_70.x * local_bc + local_5c.field0_0x0.field0._41;
              local_5c.field0_0x0.field0._42 =
                   local_70.y * local_bc + local_5c.field0_0x0.field0._42;
              local_5c.field0_0x0.field0._43 =
                   local_70.z * local_bc + local_5c.field0_0x0.field0._43;
              thunk_FUN_0047a355(&local_88,&local_a0,0x17ce820,0x17ce7e0,0x17ce7a0,&local_5c);
              pDVar2 = D3DXVECTOR3::operator-(&local_88,&local_1a8,&local_138);
              local_88.x = pDVar2->x;
              local_88.y = pDVar2->y;
              local_88.z = pDVar2->z;
              fVar5 = (float10)FUN_0040b4c0();
              local_b8 = (float)(fVar5 / (float10)2.0);
              pDVar2 = D3DXVECTOR3::operator+
                                 ((D3DXVECTOR3 *)(in_ECX + 0x18e5),&local_1b4,
                                  (D3DXVECTOR3 *)(in_ECX + 0x18f4));
              pDVar2 = D3DXVECTOR3::operator-(&local_b4,&local_1c0,pDVar2);
              local_88.x = pDVar2->x;
              local_88.y = pDVar2->y;
              local_88.z = pDVar2->z;
              fVar5 = (float10)FUN_0040b4c0();
              local_bc = (float)fVar5;
              if ((float)in_ECX[699] < local_bc == (NAN((float)in_ECX[699]) || NAN(local_bc))) {
                local_e4 = *(uint *)(local_c + 0x1f0);
                local_c8 = local_e4;
              }
              else {
                local_bc = ((float)in_ECX[699] - local_bc) /
                           ((float)in_ECX[699] - (float)in_ECX[700]);
                if (local_bc < 1.0 == NAN(local_bc)) {
                  local_c8 = local_c8 & 0xffffff;
                  local_e4 = local_e4 & 0xffffff;
                }
                else {
                  cVar4 = *(char *)(local_c + 0x1f0);
                  uVar6 = __ftol2((float10)((uint)*(byte *)(local_c + 0x1f0) -
                                           (uint)*(byte *)(in_ECX + 0x2bd)) * (float10)local_bc);
                  cVar4 = cVar4 - (char)uVar6;
                  local_c8 = CONCAT31(local_c8._1_3_,cVar4);
                  local_e4 = CONCAT31(local_e4._1_3_,cVar4);
                  cVar4 = *(char *)(local_c + 0x1f1);
                  uVar6 = __ftol2((float10)((uint)*(byte *)(local_c + 0x1f1) -
                                           (uint)*(byte *)((int)in_ECX + 0xaf5)) * (float10)local_bc
                                 );
                  cVar4 = cVar4 - (char)uVar6;
                  local_c8._0_2_ = CONCAT11(cVar4,(undefined)local_c8);
                  local_e4._0_2_ = CONCAT11(cVar4,(undefined)local_e4);
                  cVar4 = *(char *)(local_c + 0x1f2);
                  uVar6 = __ftol2((float10)((uint)*(byte *)(local_c + 0x1f2) -
                                           (uint)*(byte *)((int)in_ECX + 0xaf6)) * (float10)local_bc
                                 );
                  cVar4 = cVar4 - (char)uVar6;
                  local_c8._0_3_ = CONCAT12(cVar4,(undefined2)local_c8);
                  local_e4._0_3_ = CONCAT12(cVar4,(undefined2)local_e4);
                  uVar6 = __ftol2(((float10)1.0 - (float10)local_bc) *
                                  (float10)(uint)*(byte *)(local_c + 499));
                  local_c8 = CONCAT13((char)uVar6,(undefined3)local_c8);
                  local_e4 = CONCAT13((char)uVar6,(undefined3)local_e4);
                }
              }
              pDVar2 = D3DXVECTOR3::operator-(&local_138,&local_1cc,&local_7c);
              local_a0.x = pDVar2->x;
              local_a0.y = pDVar2->y;
              local_a0.z = pDVar2->z;
              fVar5 = (float10)FUN_0040b440(local_a0.y * local_a0.y + local_a0.x * local_a0.x);
              local_bc = (float)fVar5;
              if (((local_bc < 1e-05 == NAN(local_bc)) &&
                  (FUN_0040b470(local_bc), local_7c.z < 0.0 == NAN(local_7c.z))) &&
                 ((local_7c.z <= 1.0 &&
                  ((local_138.z < 0.0 == NAN(local_138.z) && (local_138.z <= 1.0)))))) {
                local_12c = local_a0.y * local_13c + local_7c.x;
                local_128 = local_7c.y - local_a0.x * local_13c;
                local_124 = local_7c.z;
                local_110 = local_7c.x - local_a0.y * local_13c;
                local_10c = local_a0.x * local_13c + local_7c.y;
                local_108 = local_7c.z;
                local_f4 = local_a0.y * local_b8 + local_138.x;
                local_f0 = local_138.y - local_a0.x * local_b8;
                local_ec = local_138.z;
                local_d8 = local_138.x - local_a0.y * local_b8;
                local_d4 = local_a0.x * local_b8 + local_138.y;
                local_d0 = local_138.z;
                local_118 = *(float *)(*(int *)(local_c + 0x224) + 0x20) +
                            *(float *)(local_c + 0x30);
                local_fc = *(float *)(*(int *)(local_c + 0x224) + 0x28) + *(float *)(local_c + 0x30)
                ;
                local_114 = *(float *)(*(int *)(local_c + 0x224) + 0x24) +
                            *(float *)(local_c + 0x34);
                local_dc = *(float *)(*(int *)(local_c + 0x224) + 0x2c) + *(float *)(local_c + 0x34)
                ;
                local_cc = 0x3f800000;
                local_e8 = 0x3f800000;
                local_104 = 0x3f800000;
                local_120 = 0x3f800000;
                local_f8 = local_114;
                local_e0 = local_118;
                local_c4 = local_fc;
                local_c0 = local_dc;
                if (local_18 != 0) {
                  uVar3 = th08::Supervisor::IsFogDisabled(&th08::g_Supervisor);
                  if (uVar3 == 0) {
                    th08::Supervisor::DisableFog(&th08::g_Supervisor);
                  }
                  local_18 = 0;
                }
                FUN_00464dd0(local_c,&local_12c);
              }
            }
LAB_0040b3fd:
          }
          local_10 = local_10 + 1;
        }
      }
    }
    local_14 = local_14 + 8;
  } while( true );
}

