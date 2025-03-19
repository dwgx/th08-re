
void th08::AsciiManager::FUN_00403330(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  int in_ECX;
  int local_c;
  
  if (2 < *(int *)(in_ECX + 0x8294)) {
    *(undefined4 *)(in_ECX + 0x8294) = 0;
  }
  puVar1 = (undefined *)(in_ECX + 0xb4dc + (*(int *)(in_ECX + 0x8294) + 0x2d0) * 0x38);
  puVar1[0x30] = 1;
  local_c = 0;
  if (param_2 < 0) {
    *puVar1 = 10;
    local_c = 1;
  }
  else {
    for (; param_2 != 0; param_2 = param_2 / 10) {
      puVar1[local_c] = (char)(param_2 % 10);
      local_c = local_c + 1;
    }
  }
  if (local_c == 0) {
    *puVar1 = 0;
    local_c = 1;
  }
  puVar1[0x31] = (undefined)local_c;
  *(undefined4 *)(puVar1 + 0x18) = param_3;
  ZunTimer::SetCurrent((ZunTimer *)(puVar1 + 0x1c),0);
  *(undefined4 *)(puVar1 + 0xc) = *param_1;
  *(undefined4 *)(puVar1 + 0x10) = param_1[1];
  *(undefined4 *)(puVar1 + 0x14) = param_1[2];
  *(float *)(puVar1 + 0xc) = g_GameManager.arcadeRegionTopLeftPos.x + *(float *)(puVar1 + 0xc);
  *(float *)(puVar1 + 0x10) = g_GameManager.arcadeRegionTopLeftPos.y + *(float *)(puVar1 + 0x10);
  *(int *)(in_ECX + 0x8294) = *(int *)(in_ECX + 0x8294) + 1;
  return;
}

