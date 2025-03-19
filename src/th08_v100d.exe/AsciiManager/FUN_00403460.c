
void __thiscall
th08::AsciiManager::FUN_00403460
          (AsciiManager *this,undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  AsciiManager *pAVar1;
  int local_c;
  
  if (0x7f < *(int *)(this + 0x8298)) {
    *(undefined4 *)(this + 0x8298) = 0;
  }
  pAVar1 = this + *(int *)(this + 0x8298) * 0x38 + 0x15304;
  pAVar1[0x30] = (AsciiManager)0x1;
  local_c = 0;
  if (0 < param_3) {
    *pAVar1 = (AsciiManager)0xf;
    local_c = 1;
    for (; param_3 != 0; param_3 = param_3 / 10) {
      pAVar1[local_c] = SUB41(param_3 % 10,0);
      local_c = local_c + 1;
    }
    pAVar1[local_c] = (AsciiManager)0xe;
    local_c = local_c + 1;
  }
  if (param_2 < 1) {
    pAVar1[local_c] = (AsciiManager)0x0;
    local_c = local_c + 1;
  }
  else {
    for (; param_2 != 0; param_2 = param_2 / 10) {
      pAVar1[local_c] = SUB41(param_2 % 10,0);
      local_c = local_c + 1;
    }
  }
  pAVar1[local_c] = (AsciiManager)0xd;
  local_c._0_1_ = (AsciiManager)((char)local_c + '\x01');
  pAVar1[0x31] = local_c._0_1_;
  *(undefined4 *)(pAVar1 + 0x18) = param_4;
  ZunTimer::SetCurrent((ZunTimer *)(pAVar1 + 0x1c),0);
  *(undefined4 *)(pAVar1 + 0xc) = *param_1;
  *(undefined4 *)(pAVar1 + 0x10) = param_1[1];
  *(undefined4 *)(pAVar1 + 0x14) = param_1[2];
  *(float *)(pAVar1 + 0xc) = g_GameManager.arcadeRegionTopLeftPos.x + *(float *)(pAVar1 + 0xc);
  *(float *)(pAVar1 + 0x10) = g_GameManager.arcadeRegionTopLeftPos.y + *(float *)(pAVar1 + 0x10);
  *(undefined4 *)(pAVar1 + 0x28) = *(undefined4 *)(this + 0x826c);
  *(undefined4 *)(pAVar1 + 0x2c) = *(undefined4 *)(this + 0x8270);
  *(int *)(this + 0x8298) = *(int *)(this + 0x8298) + 1;
  return;
}

