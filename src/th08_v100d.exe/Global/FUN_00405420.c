
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405420(void)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  undefined3 extraout_var_00;
  int iVar4;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  AsciiManager *in_ECX;
  ulonglong uVar5;
  undefined *local_44;
  D3DXVECTOR3 local_2c;
  AsciiManager *local_20;
  int local_1c;
  uint local_18;
  float local_14;
  float local_10;
  int local_c;
  AsciiManager *local_8;
  
  local_8 = in_ECX + 0xb4dc;
  D3DXVECTOR3::D3DXVECTOR3(&local_2c);
  uVar2 = th08::Supervisor::IsFogDisabled(&th08::g_Supervisor);
  if (uVar2 == 0) {
    th08::Supervisor::DisableFog(&th08::g_Supervisor);
  }
  th08::Supervisor::SetRenderState(&th08::g_Supervisor,0x17,8);
  for (local_1c = 0; local_1c < 0x2d3; local_1c = local_1c + 1) {
    if (local_8[0x30] != (AsciiManager)0x0) {
      *(float *)(in_ECX + 0x4ac) =
           *(float *)(local_8 + 0xc) - (float)((uint)(byte)local_8[0x31] << 2);
      *(undefined4 *)(in_ECX + 0x4b0) = *(undefined4 *)(local_8 + 0x10);
      *(undefined4 *)(in_ECX + 0x494) = *(undefined4 *)(local_8 + 0x18);
      local_14 = _DAT_017d61ac - *(float *)(local_8 + 0xc);
      local_10 = _DAT_017d61b0 - *(float *)(local_8 + 0x10);
      uVar5 = __ftol2((float10)local_10 * (float10)local_10 + (float10)local_14 * (float10)local_14)
      ;
      iVar4 = (int)uVar5;
      if (iVar4 < 0x1001) {
        if (iVar4 < 0x401) {
          local_c = 0x50;
        }
        else {
          local_c = ((iVar4 + -0x400) * 0x80) / 0xc00 + 0x50;
        }
      }
      else {
        local_c = 0xd0;
      }
      *(undefined4 *)(in_ECX + 700) = *(undefined4 *)(in_ECX + 0x826c);
      *(undefined4 *)(in_ECX + 0x2c0) = *(undefined4 *)(in_ECX + 0x8270);
      local_20 = local_8 + ((byte)local_8[0x31] - 1);
      for (local_18 = (uint)(byte)local_8[0x31]; 0 < (int)local_18; local_18 = local_18 - 1) {
        bVar1 = th08::ZunTimer::operator<((ZunTimer *)(local_8 + 0x1c),0x34);
        if (CONCAT31(extraout_var,bVar1) == 0) {
          bVar1 = th08::ZunTimer::operator<((ZunTimer *)(local_8 + 0x1c),0x38);
          if (CONCAT31(extraout_var_00,bVar1) == 0) {
            uVar3 = FUN_00406880((byte)*local_20 + 0x15);
            *(undefined4 *)(in_ECX + 0x4c8) = uVar3;
            in_ECX[0x497] = local_c._0_1_;
          }
          else {
            uVar3 = FUN_00406880((byte)*local_20 + 0xb);
            *(undefined4 *)(in_ECX + 0x4c8) = uVar3;
            in_ECX[0x497] = local_c._0_1_;
          }
        }
        else {
          uVar3 = FUN_00406880(*local_20);
          *(undefined4 *)(in_ECX + 0x4c8) = uVar3;
          in_ECX[0x497] = local_c._0_1_;
        }
        *(undefined4 *)(in_ECX + 0x2cc) = *(undefined4 *)(*(int *)(in_ECX + 0x4c8) + 0x34);
        th08::AnmManager::DrawNoRotation(_g_AnmManager,(int)(in_ECX + 0x2a4));
        *(float *)(in_ECX + 0x4ac) = *(float *)(in_ECX + 0x4ac) + 8.0;
        local_20 = local_20 + -1;
      }
    }
    local_8 = local_8 + 0x38;
  }
  if (0 < *(int *)(in_ECX + 0x16f08)) {
    if (32.0 < ((_DAT_017d61ac + 32.0) - *(float *)(in_ECX + 0x16f04)) +
               *(float *)(_g_AnmManager + 0x1c)) {
      FUN_0045b1e0();
    }
    if (_DAT_017d61ac + 32.0 + *(float *)(in_ECX + 0x16f04) + *(float *)(_g_AnmManager + 0x1c) <
        416.0) {
      FUN_0045b1e0();
    }
    if (16.0 < ((_DAT_017d61b0 + 16.0) - *(float *)(in_ECX + 0x16f04)) +
               *(float *)(_g_AnmManager + 0x20)) {
      FUN_0045b1e0();
    }
    if (_DAT_017d61b0 + 16.0 + *(float *)(in_ECX + 0x16f04) + *(float *)(_g_AnmManager + 0x20) <
        464.0) {
      FUN_0045b1e0();
    }
    FUN_004069f0(in_ECX + 0x16f0c,0x69);
    *(float *)(in_ECX + 0x16f28) = *(float *)(in_ECX + 0x16f04) / 63.0;
    *(undefined4 *)(in_ECX + 0x16f24) = *(undefined4 *)(in_ECX + 0x16f28);
    *(float *)(in_ECX + 0x17114) = _DAT_017d61ac;
    *(float *)(in_ECX + 0x17118) = _DAT_017d61b0;
    *(undefined4 *)(in_ECX + 0x1711c) = _DAT_017d61b4;
    *(float *)(in_ECX + 0x17114) = *(float *)(in_ECX + 0x17114) + 32.0;
    *(float *)(in_ECX + 0x17118) = *(float *)(in_ECX + 0x17118) + 16.0;
    in_ECX[0x170ff] = in_ECX[0x16f08];
    th08::AnmManager::DrawNoRotation(_g_AnmManager,(int)(in_ECX + 0x16f0c));
  }
  local_8 = in_ECX + 0x15304;
  for (local_1c = 0; local_1c < 0x80; local_1c = local_1c + 1) {
    if (local_8[0x30] != (AsciiManager)0x0) {
      *(float *)(in_ECX + 0x750) =
           *(float *)(local_8 + 0xc) - (float)(uint)(byte)local_8[0x31] * 3.5;
      *(undefined4 *)(in_ECX + 0x754) = *(undefined4 *)(local_8 + 0x10);
      *(undefined4 *)(in_ECX + 0x738) = *(undefined4 *)(local_8 + 0x18);
      local_14 = _DAT_017d61ac - *(float *)(local_8 + 0xc);
      local_10 = _DAT_017d61b0 - *(float *)(local_8 + 0x10);
      uVar5 = __ftol2((float10)local_10 * (float10)local_10 + (float10)local_14 * (float10)local_14)
      ;
      iVar4 = (int)uVar5;
      if (iVar4 < 0x1001) {
        if (iVar4 < 0x401) {
          local_c = 0x50;
        }
        else {
          local_c = ((iVar4 + -0x400) * 0x80) / 0xc00 + 0x50;
        }
      }
      else {
        local_c = 0xd0;
      }
      *(undefined4 *)(in_ECX + 0x560) = *(undefined4 *)(local_8 + 0x28);
      *(undefined4 *)(in_ECX + 0x564) = *(undefined4 *)(local_8 + 0x2c);
      local_20 = local_8 + ((byte)local_8[0x31] - 1);
      for (local_18 = (uint)(byte)local_8[0x31]; 0 < (int)local_18; local_18 = local_18 - 1) {
        uVar3 = FUN_00406880((byte)*local_20 + 0x88);
        *(undefined4 *)(in_ECX + 0x76c) = uVar3;
        in_ECX[0x73b] = local_c._0_1_;
        *(undefined4 *)(in_ECX + 0x570) = *(undefined4 *)(*(int *)(in_ECX + 0x76c) + 0x34);
        th08::AnmManager::DrawNoRotation(_g_AnmManager,(int)(in_ECX + 0x548));
        *(float *)(in_ECX + 0x750) = *(float *)(local_8 + 0x28) * 7.0 + *(float *)(in_ECX + 0x750);
        local_20 = local_20 + -1;
      }
    }
    local_8 = local_8 + 0x38;
  }
  *(undefined4 *)(_g_AnmManager + 0x20) = 0;
  *(undefined4 *)(_g_AnmManager + 0x1c) = 0;
  iVar4 = FUN_004066e0();
  if (iVar4 != 0) {
    iVar4 = th08::GameManager::GetYoukaiGauge(&th08::g_GameManager);
    *(float *)(in_ECX + 0x11e0) =
         (((float)iVar4 * 112.0) / 2.0) / 10000.0 + *(float *)(in_ECX + 0x9f4) + 64.0;
    FUN_00463470(in_ECX + 0xfd8);
    iVar4 = th08::GameManager::GetYoukaiGauge(&th08::g_GameManager);
    *(float *)(in_ECX + 0x1484) =
         (((float)iVar4 * 80.0) / 2.0) / 10000.0 + *(float *)(in_ECX + 0x9f4) + 64.0;
    *(float *)(in_ECX + 0x1488) = *(float *)(in_ECX + 0x11e4) - 7.0;
    *(undefined4 *)(in_ECX + 0x148c) = *(undefined4 *)(in_ECX + 0x11e8);
    in_ECX[0x146f] = in_ECX[0x9df];
    bVar1 = th08::GameManager::GaugeIsExtremelyHuman(&th08::g_GameManager);
    if (CONCAT31(extraout_var_01,bVar1) == 0) {
      bVar1 = th08::GameManager::GaugeIsModeratelyHuman(&th08::g_GameManager);
      if (CONCAT31(extraout_var_02,bVar1) == 0) {
        bVar1 = th08::GameManager::GaugeIsExtremelyYoukai(&th08::g_GameManager);
        if (CONCAT31(extraout_var_03,bVar1) == 0) {
          bVar1 = th08::GameManager::GaugeIsModeratelyYoukai(&th08::g_GameManager);
          if (CONCAT31(extraout_var_04,bVar1) == 0) {
            in_ECX[0x146e] = (AsciiManager)0xff;
            in_ECX[0x146d] = (AsciiManager)0xff;
            in_ECX[0x146c] = (AsciiManager)0xff;
          }
          else {
            in_ECX[0x146e] = (AsciiManager)0xff;
            in_ECX[0x146d] = (AsciiManager)0xb0;
            in_ECX[0x146c] = (AsciiManager)0xb0;
          }
        }
        else {
          in_ECX[0x146e] = (AsciiManager)0xff;
          in_ECX[0x146d] = (AsciiManager)0x70;
          in_ECX[0x146c] = (AsciiManager)0x70;
        }
      }
      else {
        in_ECX[0x146e] = (AsciiManager)0xb0;
        in_ECX[0x146d] = (AsciiManager)0xb0;
        in_ECX[0x146c] = (AsciiManager)0xff;
      }
    }
    else {
      in_ECX[0x146e] = (AsciiManager)0x70;
      in_ECX[0x146d] = (AsciiManager)0x70;
      in_ECX[0x146c] = (AsciiManager)0xff;
    }
    *(undefined4 *)(in_ECX + 0x9dc) = *(undefined4 *)(in_ECX + 0x146c);
    th08::AnmManager::DrawNoRotation(_g_AnmManager,(int)(in_ECX + 0x7ec));
    th08::AnmManager::DrawNoRotation(_g_AnmManager,(int)(in_ECX + 0xa90));
    th08::AnmManager::DrawNoRotation(_g_AnmManager,(int)(in_ECX + 0xd34));
    uVar3 = *(undefined4 *)(in_ECX + 0x146c);
    uVar2 = th08::GameManager::GetYoukaiGauge(&th08::g_GameManager);
    th08::AsciiManager::FUN_00405e10(in_ECX,(undefined4 *)(in_ECX + 0x1484),uVar2,uVar3);
    local_44 = &DAT_00989680;
    local_18 = (th08::g_GameManager.m_Globals)->field20_0x24;
    local_c = 0;
    *(float *)(in_ECX + 0x1484) = (*(float *)(in_ECX + 0x9f4) + 62.0) - 14.0;
    *(float *)(in_ECX + 0x1488) = *(float *)(in_ECX + 0x9f8) + 3.0 + 8.0;
    for (local_1c = 0; local_1c < 8; local_1c = local_1c + 1) {
      local_c = local_c + (int)local_18 / (int)local_44;
      if (local_c != 0) {
        FUN_0045e430(in_ECX + 0x127c,(int)local_18 / (int)local_44 + 0x88);
        th08::AnmManager::DrawNoRotation(_g_AnmManager,(int)(in_ECX + 0x127c));
        *(float *)(in_ECX + 0x1484) = *(float *)(in_ECX + 0x1484) + 7.0;
      }
      local_18 = (int)local_18 % (int)local_44;
      local_44 = (undefined *)((int)local_44 / 10);
    }
  }
  return;
}

