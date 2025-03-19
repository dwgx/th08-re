
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404750(void)

{
  int *in_ECX;
  int iVar1;
  int *piVar2;
  int *piVar3;
  ulonglong uVar4;
  int local_2b4 [126];
  uint local_bc;
  uint local_8;
  
  if (th08::g_GameManager._252850_1_ != '\0') {
    th08::AnmManager::FUN_00462e40(_g_AnmManager);
    uVar4 = __ftol2((float10)th08::g_GameManager.arcadeRegionTopLeftPos.x);
    th08::g_Supervisor.m_Viewport.X = (DWORD)uVar4;
    uVar4 = __ftol2((float10)th08::g_GameManager.arcadeRegionTopLeftPos.y);
    th08::g_Supervisor.m_Viewport.Y = (DWORD)uVar4;
    uVar4 = __ftol2((float10)th08::g_GameManager.arcadeRegionSize.x);
    th08::g_Supervisor.m_Viewport.Width = (DWORD)uVar4;
    uVar4 = __ftol2((float10)th08::g_GameManager.arcadeRegionSize.y);
    th08::g_Supervisor.m_Viewport.Height = (DWORD)uVar4;
    (*(th08::g_Supervisor.m_D3dDevice)->lpVtbl->SetViewport)
              (th08::g_Supervisor.m_D3dDevice,(D3DVIEWPORT8 *)0x17ce820);
    if (((th08::g_Supervisor.m_Flags >> 1 & 1) != 0) && (*in_ECX != 0)) {
      piVar2 = in_ECX + 0x69c;
      piVar3 = local_2b4;
      for (iVar1 = 0xa9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar3 = *piVar2;
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
      }
      local_bc = local_bc | 0x2000;
      th08::AnmManager::DrawNoRotation(_g_AnmManager,(int)local_2b4);
    }
    for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
      iVar1 = FUN_004066e0();
      if (iVar1 != 0) {
        th08::AnmManager::DrawNoRotation(_g_AnmManager,(int)(in_ECX + local_8 * 0xa9 + 2));
      }
    }
  }
  return;
}

