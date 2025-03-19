
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void th08::AsciiManager::FUN_00402b20(void)

{
  float fVar1;
  undefined4 uVar2;
  int in_ECX;
  float10 fVar3;
  ulonglong uVar4;
  D3DXVECTOR3 local_24;
  int local_18;
  byte *local_14;
  byte *local_10;
  int local_c;
  float local_8;
  
  D3DXVECTOR3::D3DXVECTOR3(&local_24);
  local_18 = 1;
  local_10 = (byte *)(in_ECX + 0x2264);
  *(uint *)(in_ECX + 0x1f8) = *(uint *)(in_ECX + 0x1f8) | 1;
  *(uint *)(in_ECX + 0x1f8) = *(uint *)(in_ECX + 0x1f8) | 0x1800;
  for (local_c = 0; local_c < *(int *)(in_ECX + 0x8264); local_c = local_c + 1) {
    *(undefined4 *)(in_ECX + 0x208) = *(undefined4 *)(local_10 + 0x40);
    *(undefined4 *)(in_ECX + 0x20c) = *(undefined4 *)(local_10 + 0x44);
    *(undefined4 *)(in_ECX + 0x210) = *(undefined4 *)(local_10 + 0x48);
    local_14 = local_10;
    *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(local_10 + 0x50);
    *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(local_10 + 0x54);
    local_8 = (float)*(int *)(in_ECX + 0x8280) * *(float *)(local_10 + 0x50);
    if (local_18 != *(int *)(local_10 + 0x5c)) {
      local_18 = *(int *)(local_10 + 0x5c);
      AnmManager::FUN_00462e40(_g_AnmManager);
      if (local_18 == 0) {
        g_Supervisor.m_Viewport.X = 0;
        g_Supervisor.m_Viewport.Y = 0;
        g_Supervisor.m_Viewport.Width = 0x280;
        g_Supervisor.m_Viewport.Height = 0x1e0;
        (*(g_Supervisor.m_D3dDevice)->lpVtbl->SetViewport)
                  (g_Supervisor.m_D3dDevice,(D3DVIEWPORT8 *)0x17ce820);
      }
      else {
        uVar4 = __ftol2((float10)g_GameManager.arcadeRegionTopLeftPos.x);
        g_Supervisor.m_Viewport.X = (DWORD)uVar4;
        uVar4 = __ftol2((float10)g_GameManager.arcadeRegionTopLeftPos.y);
        g_Supervisor.m_Viewport.Y = (DWORD)uVar4;
        uVar4 = __ftol2((float10)g_GameManager.arcadeRegionSize.x);
        g_Supervisor.m_Viewport.Width = (DWORD)uVar4;
        uVar4 = __ftol2((float10)g_GameManager.arcadeRegionSize.y);
        g_Supervisor.m_Viewport.Height = (DWORD)uVar4;
        (*(g_Supervisor.m_D3dDevice)->lpVtbl->SetViewport)
                  (g_Supervisor.m_D3dDevice,(D3DVIEWPORT8 *)0x17ce820);
      }
    }
    for (; *local_14 != 0; local_14 = local_14 + 1) {
      if (*local_14 == 10) {
        *(float *)(in_ECX + 0x20c) = *(float *)(local_10 + 0x54) * 16.0 + *(float *)(in_ECX + 0x20c)
        ;
        *(undefined4 *)(in_ECX + 0x208) = *(undefined4 *)(local_10 + 0x40);
      }
      else if (*local_14 == 0x20) {
        *(float *)(in_ECX + 0x208) = local_8 + *(float *)(in_ECX + 0x208);
      }
      else {
        if (*(int *)(local_10 + 0x58) == 0) {
          uVar2 = FUN_00406880(*local_14 - 1);
          *(undefined4 *)(in_ECX + 0x224) = uVar2;
          *(undefined4 *)(in_ECX + 0x1f0) = *(undefined4 *)(local_10 + 0x4c);
        }
        else {
          uVar2 = FUN_00406880(*local_14 + 0x8a);
          *(undefined4 *)(in_ECX + 0x224) = uVar2;
          *(undefined4 *)(in_ECX + 0x1f0) = 0xffffffff;
        }
        AnmManager::DrawNoRotation(_g_AnmManager,in_ECX);
        *(float *)(in_ECX + 0x208) = local_8 + *(float *)(in_ECX + 0x208);
      }
    }
    local_10 = local_10 + 0x60;
  }
  if (local_18 != 0) {
    AnmManager::FUN_00462e40(_g_AnmManager);
    g_Supervisor.m_Viewport.X = 0;
    g_Supervisor.m_Viewport.Y = 0;
    g_Supervisor.m_Viewport.Width = 0x280;
    g_Supervisor.m_Viewport.Height = 0x1e0;
    (*(g_Supervisor.m_D3dDevice)->lpVtbl->SetViewport)
              (g_Supervisor.m_D3dDevice,(D3DVIEWPORT8 *)0x17ce820);
  }
  local_c = 0;
  do {
    if (3 < local_c) {
      return;
    }
    if ((56.0 <= *(float *)(in_ECX + 0x19cc + local_c * 0x2a4)) &&
       (fVar1 = *(float *)(in_ECX + 0x19cc + local_c * 0x2a4), fVar1 < 392.0 != (fVar1 == 392.0))) {
      fVar3 = (float10)FUN_004031e0((*(float *)(in_ECX + 0x19cc + local_c * 0x2a4) - 32.0) -
                                    _DAT_017d61ac);
      local_8 = (float)fVar3;
      uVar2 = FUN_00406880(0x9d);
      *(undefined4 *)(in_ECX + 0x19e8 + local_c * 0x2a4) = uVar2;
      switch(*(undefined4 *)(in_ECX + 0x2254 + local_c * 4)) {
      case 0:
switchD_00402ee7_caseD_0:
        *(undefined *)(in_ECX + 0x19b6 + local_c * 0x2a4) = 0xff;
        *(undefined *)(in_ECX + 0x19b5 + local_c * 0x2a4) = 0xff;
        *(undefined *)(in_ECX + 0x19b4 + local_c * 0x2a4) = 0xff;
        if (local_8 < 64.0 == NAN(local_8)) {
          *(undefined *)(in_ECX + 0x19b7 + local_c * 0x2a4) = 0xa0;
        }
        else {
          uVar4 = __ftol2(((float10)local_8 * (float10)64.0) / (float10)64.0 + (float10)96.0);
          *(char *)(in_ECX + 0x19b7 + local_c * 0x2a4) = (char)uVar4;
        }
        break;
      case 1:
        *(undefined *)(in_ECX + 0x19b7 + local_c * 0x2a4) = 0x80;
        *(undefined *)(in_ECX + 0x19b6 + local_c * 0x2a4) = 0xff;
        *(undefined *)(in_ECX + 0x19b5 + local_c * 0x2a4) = 0x40;
        *(undefined *)(in_ECX + 0x19b4 + local_c * 0x2a4) = 0x40;
        break;
      case 2:
        if (*(uint *)(in_ECX + 0x8284) % 8 != 0) goto switchD_00402ee7_caseD_0;
        uVar2 = FUN_00406880(0x9e);
        *(undefined4 *)(in_ECX + 0x19e8 + local_c * 0x2a4) = uVar2;
        *(undefined *)(in_ECX + 0x19b7 + local_c * 0x2a4) = 0xff;
        *(undefined *)(in_ECX + 0x19b6 + local_c * 0x2a4) = 0xff;
        *(undefined *)(in_ECX + 0x19b5 + local_c * 0x2a4) = 0xff;
        *(undefined *)(in_ECX + 0x19b4 + local_c * 0x2a4) = 0xff;
        break;
      case 3:
        if (*(uint *)(in_ECX + 0x8284) % 4 != 0) goto switchD_00402ee7_caseD_0;
        uVar2 = FUN_00406880(0x9e);
        *(undefined4 *)(in_ECX + 0x19e8 + local_c * 0x2a4) = uVar2;
        *(undefined *)(in_ECX + 0x19b7 + local_c * 0x2a4) = 0xff;
        *(undefined *)(in_ECX + 0x19b6 + local_c * 0x2a4) = 0xff;
        *(undefined *)(in_ECX + 0x19b5 + local_c * 0x2a4) = 0xff;
        *(undefined *)(in_ECX + 0x19b4 + local_c * 0x2a4) = 0xff;
        break;
      case 4:
        if (*(uint *)(in_ECX + 0x8284) % 2 != 0) goto switchD_00402ee7_caseD_0;
        uVar2 = FUN_00406880(0x9e);
        *(undefined4 *)(in_ECX + 0x19e8 + local_c * 0x2a4) = uVar2;
        *(undefined *)(in_ECX + 0x19b7 + local_c * 0x2a4) = 0xff;
        *(undefined *)(in_ECX + 0x19b6 + local_c * 0x2a4) = 0xff;
        *(undefined *)(in_ECX + 0x19b5 + local_c * 0x2a4) = 0xff;
        *(undefined *)(in_ECX + 0x19b4 + local_c * 0x2a4) = 0xff;
      }
      AnmManager::DrawNoRotation(_g_AnmManager,in_ECX + 0x17c4 + local_c * 0x2a4);
    }
    local_c = local_c + 1;
  } while( true );
}

