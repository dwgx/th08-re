
void FUN_00403600(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined *puVar1;
  int in_ECX;
  int local_c;
  
  if (0x7f < *(int *)(in_ECX + 0x8298)) {
    *(undefined4 *)(in_ECX + 0x8298) = 0;
  }
  puVar1 = (undefined *)(in_ECX + 0x15304 + *(int *)(in_ECX + 0x8298) * 0x38);
  puVar1[0x30] = 1;
  local_c = 0;
  if (0 < param_3) {
    *puVar1 = 0xf;
    local_c = 1;
    for (; param_3 != 0; param_3 = param_3 / 10) {
      puVar1[local_c] = (char)(param_3 % 10);
      local_c = local_c + 1;
    }
    puVar1[local_c] = 0xe;
    local_c = local_c + 1;
  }
  if (param_2 < 1) {
    puVar1[local_c] = 0;
    local_c = local_c + 1;
  }
  else {
    for (; param_2 != 0; param_2 = param_2 / 10) {
      puVar1[local_c] = (char)(param_2 % 10);
      local_c = local_c + 1;
    }
  }
  puVar1[local_c] = 0xd;
  local_c = local_c + 1;
  puVar1[0x31] = (undefined)local_c;
  *(undefined4 *)(puVar1 + 0x18) = param_4;
  th08::ZunTimer::SetCurrent((ZunTimer *)(puVar1 + 0x1c),0x58);
  *(undefined4 *)(puVar1 + 0xc) = *param_1;
  *(undefined4 *)(puVar1 + 0x10) = param_1[1];
  *(undefined4 *)(puVar1 + 0x14) = param_1[2];
  *(float *)(puVar1 + 0xc) =
       (float)local_c * 3.5 + th08::g_GameManager.arcadeRegionTopLeftPos.x +
       *(float *)(puVar1 + 0xc);
  *(float *)(puVar1 + 0x10) =
       th08::g_GameManager.arcadeRegionTopLeftPos.y + *(float *)(puVar1 + 0x10);
  *(undefined4 *)(puVar1 + 0x28) = *(undefined4 *)(in_ECX + 0x826c);
  *(undefined4 *)(puVar1 + 0x2c) = *(undefined4 *)(in_ECX + 0x8270);
  *(int *)(in_ECX + 0x8298) = *(int *)(in_ECX + 0x8298) + 1;
  return;
}

