
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004052b0(void)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  ulonglong uVar3;
  int local_8;
  
  if (th08::g_GameManager._252851_1_ != '\0') {
    th08::AnmManager::FUN_00462e40(_g_AnmManager);
    uVar3 = __ftol2((float10)th08::g_GameManager.arcadeRegionTopLeftPos.x);
    th08::g_Supervisor.m_Viewport.X = (DWORD)uVar3;
    uVar3 = __ftol2((float10)th08::g_GameManager.arcadeRegionTopLeftPos.y);
    th08::g_Supervisor.m_Viewport.Y = (DWORD)uVar3;
    uVar3 = __ftol2((float10)th08::g_GameManager.arcadeRegionSize.x);
    th08::g_Supervisor.m_Viewport.Width = (DWORD)uVar3;
    uVar3 = __ftol2((float10)th08::g_GameManager.arcadeRegionSize.y);
    th08::g_Supervisor.m_Viewport.Height = (DWORD)uVar3;
    (*(th08::g_Supervisor.m_D3dDevice)->lpVtbl->SetViewport)
              (th08::g_Supervisor.m_D3dDevice,(D3DVIEWPORT8 *)0x17ce820);
    if (((th08::g_Supervisor.m_Flags >> 1 & 1) != 0) && ((*in_ECX != 0 || (2 < in_ECX[1])))) {
      th08::AnmManager::DrawNoRotation(_g_AnmManager,(int)(in_ECX + 0x3f8));
    }
    uVar1 = th08::GameManager::GetFlag14(&th08::g_GameManager);
    if ((uVar1 == 0) && (th08::g_GameManager.difficulty < 4)) {
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        iVar2 = FUN_004066e0();
        if (iVar2 != 0) {
          th08::AnmManager::DrawNoRotation(_g_AnmManager,(int)(in_ECX + local_8 * 0xa9 + 2));
        }
      }
    }
    else {
      for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
        iVar2 = FUN_004066e0();
        if (iVar2 != 0) {
          th08::AnmManager::DrawNoRotation(_g_AnmManager,(int)(in_ECX + local_8 * 0xa9 + 2));
        }
      }
    }
  }
  return;
}

