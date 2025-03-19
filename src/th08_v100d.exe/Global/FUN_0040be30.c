
void FUN_0040be30(undefined4 param_1,undefined4 param_2,i32 param_3,undefined4 param_4)

{
  undefined *in_ECX;
  undefined4 in_EDX;
  undefined4 *local_10;
  uint local_8;
  
  FUN_00415d60(in_EDX,param_1,param_4);
  *(undefined4 *)(in_ECX + 0xfe4) = param_2;
  th08::ZunTimer::SetCurrent((ZunTimer *)(in_ECX + 0xe2af4),param_3);
  *in_ECX = 3;
  FUN_0040bf00();
  local_10 = (undefined4 *)(in_ECX + 0x1028);
  for (local_8 = 0; local_8 < 0x80; local_8 = local_8 + 1) {
    *local_10 = 0;
    local_10 = local_10 + 0x5bc;
  }
  th08::ItemManager::FUN_004413e0((ItemManager *)&th08::g_ItemManager);
  *(undefined4 *)(in_ECX + 0xb8828) = *(undefined4 *)(in_ECX + 0x2b4);
  *(undefined4 *)(in_ECX + 0xb882c) = *(undefined4 *)(in_ECX + 0x2b8);
  *(undefined4 *)(in_ECX + 0xb8830) = *(undefined4 *)(in_ECX + 700);
  return;
}

