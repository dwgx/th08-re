
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00409640(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int local_20;
  
  if (*(int *)(in_ECX + 0xb24) < 2) {
    iVar1 = FUN_00437d87();
    if (iVar1 == 0) {
      FUN_0040a1b0(2);
      FUN_0040a1b0(3);
      uVar2 = th08::Supervisor::IsFogDisabled(&th08::g_Supervisor);
      if (uVar2 == 0) {
        th08::Supervisor::DisableFog(&th08::g_Supervisor);
      }
      FUN_004281e0();
      if (*(int *)(in_ECX + 0xb24) == 1) {
        th08::AnmManager::FUN_00462e40(_g_AnmManager);
        th08::Supervisor::SetRenderState(&th08::g_Supervisor,0x17,8);
        uVar2 = th08::Supervisor::IsFogDisabled(&th08::g_Supervisor);
        if (uVar2 == 0) {
          th08::Supervisor::SetRenderState(&th08::g_Supervisor,0x1c,0);
        }
        FUN_0045b1e0();
      }
    }
  }
  th08::AnmManager::FUN_00462e40(_g_AnmManager);
  th08::Supervisor::SetRenderState(&th08::g_Supervisor,0x17,8);
  uVar2 = th08::Supervisor::IsFogDisabled(&th08::g_Supervisor);
  if (uVar2 == 0) {
    th08::Supervisor::DisableFog(&th08::g_Supervisor);
  }
  if (0 < *(int *)(in_ECX + 0xb24)) {
    for (local_20 = 0; local_20 < *(int *)(in_ECX + 0xb30); local_20 = local_20 + 1) {
      FUN_0040baf0(in_ECX + 0xb38 + local_20 * 0x2a4);
    }
    if (*(int *)(in_ECX + 0x625c) != 0) {
      (**(code **)(in_ECX + 0x625c))();
    }
  }
  FUN_0040ba90(0);
  FUN_0040b5a0();
  (*(th08::g_Supervisor.m_D3dDevice)->lpVtbl->SetViewport)
            (th08::g_Supervisor.m_D3dDevice,(D3DVIEWPORT8 *)0x17ce820);
  th08::Supervisor::SetRenderState(&th08::g_Supervisor,0x24,0x447a0000);
  th08::Supervisor::SetRenderState(&th08::g_Supervisor,0x25,0x44fa0000);
  if (*(int *)(in_ECX + 0x646c) == 0) {
    FUN_0040bab0();
  }
  *(undefined4 *)(in_ECX + 0x646c) = 0;
  *(undefined4 *)(in_ECX + 0x647c) = 0;
  return 1;
}

