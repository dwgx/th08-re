
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00402200(void)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar2;
  int in_ECX;
  int local_c;
  int local_8;
  
  if ((th08::g_GameManager._252850_1_ == '\0') && (th08::g_GameManager._252851_1_ == '\0')) {
    local_c = in_ECX + 0xb4dc;
    if ((th08::g_GameManager.field451_0x3dbac >> 10 & 1) == 0) {
      for (local_8 = 0; local_8 < 0x2d3; local_8 = local_8 + 1) {
        if (*(char *)(local_c + 0x30) != '\0') {
          *(float *)(local_c + 0x10) =
               *(float *)(local_c + 0x10) - th08::g_Supervisor.m_FramerateMultiplier * 0.5;
          th08::ZunTimer::Tick((ZunTimer *)(local_c + 0x1c));
          bVar1 = th08::ZunTimer::operator>((ZunTimer *)(local_c + 0x1c),0x3c);
          if (CONCAT31(extraout_var,bVar1) != 0) {
            *(undefined *)(local_c + 0x30) = 0;
          }
        }
        local_c = local_c + 0x38;
      }
      local_c = in_ECX + 0x15304;
      for (local_8 = 0; local_8 < 0x80; local_8 = local_8 + 1) {
        if (*(char *)(local_c + 0x30) != '\0') {
          th08::ZunTimer::Tick((ZunTimer *)(local_c + 0x1c));
          bVar1 = th08::ZunTimer::operator>((ZunTimer *)(local_c + 0x1c),0x5a);
          if (CONCAT31(extraout_var_00,bVar1) != 0) {
            *(undefined *)(local_c + 0x30) = 0;
          }
        }
        local_c = local_c + 0x38;
      }
    }
  }
  else if (th08::g_GameManager._252850_1_ != '\0') {
    FUN_004037b0();
  }
  if (th08::g_GameManager._252851_1_ != '\0') {
    FUN_00404890();
  }
  FUN_00406fd0();
  uVar2 = th08::GameManager::GetFlag1(&th08::g_GameManager);
  if (uVar2 == 0) {
    *(undefined2 *)(in_ECX + 0xb452) = 0;
  }
  else {
    if (*(short *)(in_ECX + 0xb452) == 0) {
      FUN_004069f0(in_ECX + 0xb238,0xb);
    }
    th08::AnmManager::ExecuteScript(_g_AnmManager,(AnmVm *)(in_ECX + 0xb238));
  }
  *(int *)(in_ECX + 0x8284) = *(int *)(in_ECX + 0x8284) + 1;
  return 1;
}

