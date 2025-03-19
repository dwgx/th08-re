
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004023d0(void)

{
  int in_ECX;
  
  th08::AsciiManager::FUN_00402b20();
  FUN_00407160();
  FUN_00404750();
  FUN_004052b0();
  if (*(short *)(in_ECX + 0xb452) != 0) {
    th08::AnmManager::DrawNoRotation(_g_AnmManager,in_ECX + 0xb238);
  }
  return 1;
}

