
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00404890(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  D3DXVECTOR3 *pDVar7;
  int *in_ECX;
  ulonglong uVar8;
  int local_44;
  D3DXVECTOR3 local_38;
  D3DXVECTOR3 local_2c;
  D3DXVECTOR3 local_20;
  D3DXVECTOR3 local_14;
  int local_8;
  
  uVar2 = th08::GameManager::GetFlag0(&th08::g_GameManager);
  if ((uVar2 != 0) && ((th08::g_GameManager.field451_0x3dbac >> 0xe & 1) == 0)) {
    th08::g_GameManager._252851_1_ = 0;
    (th08::g_GameManager.m_Globals)->m_GuiScore = (th08::g_GameManager.m_Globals)->m_Score;
    th08::g_Supervisor.m_CurState = 6;
    return 1;
  }
  uVar2 = th08::GameManager::GetFlag3(&th08::g_GameManager);
  if (uVar2 != 0) {
    th08::g_GameManager._252851_1_ = 0;
    th08::g_Supervisor.m_CurState = 7;
    (th08::g_GameManager.m_Globals)->m_GuiScore = (th08::g_GameManager.m_Globals)->m_Score;
    return 1;
  }
  switch(*in_ECX) {
  case 0:
    if (in_ECX[1] == 0) {
      uVar2 = th08::GameManager::GetFlag14(&th08::g_GameManager);
      if (((uVar2 == 0) && (th08::g_GameManager.difficulty < 4)) &&
         ((cVar1 = th08::GameManager::GetClockTime(&th08::g_GameManager), '\n' < cVar1 ||
          (th08::g_GameManager.currentStage == 7)))) {
        th08::g_GameManager._252851_1_ = 0;
        (th08::g_GameManager.m_Globals)->m_GuiScore = (th08::g_GameManager.m_Globals)->m_Score;
        if (th08::g_GameManager.difficulty < 4) {
          th08::g_GameManager.field451_0x3dbac = th08::g_GameManager.field451_0x3dbac & 0xffffffef;
          th08::g_Supervisor.m_CurState = 9;
        }
        else {
          th08::g_Supervisor.m_CurState = 6;
        }
        return 1;
      }
      uVar2 = th08::GameManager::GetFlag14(&th08::g_GameManager);
      if ((uVar2 == 0) || (iVar6 = FUN_00439916(), iVar6 != 0)) {
        FUN_00406c30();
      }
      else {
        FUN_00406b40(0x3f800000);
      }
      for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
        FUN_004069f0(in_ECX + local_8 * 0xa9 + 2,local_8 + 0x16);
        *(undefined2 *)((int)in_ECX + local_8 * 0x2a4 + 0x206) = 1;
      }
      FUN_004069f0(in_ECX + 0x1fd,1);
      cVar1 = th08::GameManager::GetClockTime(&th08::g_GameManager);
      FUN_0045e430(in_ECX + 0x1fd,(int)cVar1);
      if ((th08::g_Supervisor.m_Flags >> 1 & 1) != 0) {
        FUN_004069f0(in_ECX + 0x3f8,0);
        uVar8 = __ftol2((float10)*(float *)(in_ECX[0x481] + 0x34));
        uVar3 = (undefined4)uVar8;
        uVar8 = __ftol2((float10)*(float *)(in_ECX[0x481] + 0x30));
        uVar4 = (undefined4)uVar8;
        uVar8 = __ftol2((float10)*(float *)(in_ECX[0x481] + 0xc));
        uVar5 = (undefined4)uVar8;
        uVar8 = __ftol2((float10)*(float *)(in_ECX[0x481] + 8));
        iVar6 = FUN_00406a30(3,0x20,0x10,0x180,0x1c0,(int)uVar8,uVar5,uVar4,uVar3);
        if (iVar6 != 0) {
          *in_ECX = 0;
          return 0;
        }
        in_ECX[0x47a] = 0x42000000;
        in_ECX[0x47b] = 0x41800000;
        in_ECX[0x47c] = 0;
      }
      th08::Supervisor::UpdateGameTime(&th08::g_Supervisor);
    }
    if (8 < in_ECX[1]) break;
    uVar2 = th08::GameManager::GetFlag14(&th08::g_GameManager);
    if ((uVar2 == 0) && (th08::g_GameManager.difficulty < 4)) {
      *in_ECX = *in_ECX + 2;
    }
    else {
      iVar6 = FUN_00405260();
      if ((iVar6 == 0) && (uVar2 = th08::GameManager::GetFlag14(&th08::g_GameManager), uVar2 != 0))
      {
        local_44 = 1;
      }
      else {
        local_44 = 2;
      }
      *in_ECX = *in_ECX + local_44;
    }
    in_ECX[1] = 0;
    if (*in_ECX != 2) goto switchD_00404931_caseD_1;
  case 2:
    in_ECX[0x1d0] = -0x7f80;
    in_ECX[0x127] = -0xafafb0;
    pDVar7 = D3DXVECTOR3::D3DXVECTOR3(&local_2c,-4.0,-4.0,0.0);
    in_ECX[0x1f6] = (int)pDVar7->x;
    in_ECX[0x1f7] = (int)pDVar7->y;
    in_ECX[0x1f8] = (int)pDVar7->z;
    pDVar7 = D3DXVECTOR3::D3DXVECTOR3(&local_38,0.0,0.0,0.0);
    in_ECX[0x14d] = (int)pDVar7->x;
    in_ECX[0x14e] = (int)pDVar7->y;
    in_ECX[0x14f] = (int)pDVar7->z;
    if (0x1d < in_ECX[1]) {
      if ((((_DAT_0164d528 & 0x10) != 0) && ((_DAT_0164d528 & 0x10) != (_DAT_0164d530 & 0x10))) ||
         (((_DAT_0164d528 & 0x20) != 0 && ((_DAT_0164d528 & 0x20) != (_DAT_0164d530 & 0x20))))) {
        *in_ECX = 1;
        th08::SoundPlayer::PlaySoundByIdx(&th08::g_SoundPlayer,0,0);
      }
      if (((_DAT_0164d528 & 0x1001) != 0) && ((_DAT_0164d528 & 0x1001) != (_DAT_0164d530 & 0x1001)))
      {
        th08::SoundPlayer::PlaySoundByIdx(&th08::g_SoundPlayer,10,0);
        for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
          *(undefined2 *)((int)in_ECX + local_8 * 0x2a4 + 0x206) = 2;
        }
        *in_ECX = 4;
        in_ECX[1] = 0;
      }
    }
    break;
  case 1:
switchD_00404931_caseD_1:
    in_ECX[0x127] = -0x7f80;
    in_ECX[0x1d0] = -0xafafb0;
    pDVar7 = D3DXVECTOR3::D3DXVECTOR3(&local_14,-4.0,-4.0,0.0);
    in_ECX[0x14d] = (int)pDVar7->x;
    in_ECX[0x14e] = (int)pDVar7->y;
    in_ECX[0x14f] = (int)pDVar7->z;
    pDVar7 = D3DXVECTOR3::D3DXVECTOR3(&local_20,0.0,0.0,0.0);
    in_ECX[0x1f6] = (int)pDVar7->x;
    in_ECX[0x1f7] = (int)pDVar7->y;
    in_ECX[0x1f8] = (int)pDVar7->z;
    if (3 < in_ECX[1]) {
      if ((((_DAT_0164d528 & 0x10) != 0) && ((_DAT_0164d528 & 0x10) != (_DAT_0164d530 & 0x10))) ||
         (((_DAT_0164d528 & 0x20) != 0 && ((_DAT_0164d528 & 0x20) != (_DAT_0164d530 & 0x20))))) {
        *in_ECX = 2;
        th08::SoundPlayer::PlaySoundByIdx(&th08::g_SoundPlayer,0,0);
      }
      if (((_DAT_0164d528 & 0x1001) != 0) && ((_DAT_0164d528 & 0x1001) != (_DAT_0164d530 & 0x1001)))
      {
        th08::SoundPlayer::PlaySoundByIdx(&th08::g_SoundPlayer,10,0);
        uVar2 = th08::GameManager::GetFlag14(&th08::g_GameManager);
        if ((uVar2 != 0) || (3 < th08::g_GameManager.difficulty)) {
          uVar2 = th08::GameManager::GetFlag14(&th08::g_GameManager);
          if ((uVar2 == 0) || (iVar6 = FUN_00439916(), iVar6 != 0)) {
            th08::Supervisor::StopAudio(&th08::g_Supervisor);
          }
          else {
            th08::g_GameManager._252851_1_ = 0;
            FUN_00406c50();
            FUN_00406bb0(0x3f800000);
          }
          th08::g_Supervisor.m_CurState = 0xb;
          FUN_00438f58();
          th08::g_GameManager._252851_1_ = 0;
          th08::g_Supervisor.m_SystemTime = timeGetTime();
          return 0;
        }
        *(undefined2 *)((int)in_ECX + 0x9f2) = 1;
        *in_ECX = 3;
        in_ECX[1] = 0;
      }
    }
    break;
  case 3:
    if (in_ECX[1] == 0xf) {
      FUN_00406df0(1);
      cVar1 = th08::GameManager::GetClockTime(&th08::g_GameManager);
      FUN_0045e430(in_ECX + 0x1fd,(int)cVar1);
    }
    if (in_ECX[1] == 0x3c) {
      *(undefined2 *)((int)in_ECX + 0x11de) = 1;
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        *(undefined2 *)((int)in_ECX + local_8 * 0x2a4 + 0x206) = 3;
      }
    }
    if (0x59 < in_ECX[1]) {
      *in_ECX = 0;
      in_ECX[1] = 0;
      th08::g_GameManager._252851_1_ = 0;
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        FUN_00406700();
      }
      (th08::g_GameManager.m_Globals)->m_NumRetries =
           (th08::g_GameManager.m_Globals)->m_NumRetries + '\x01';
      (th08::g_GameManager.m_Globals)->m_GuiScore =
           (uint)(th08::g_GameManager.m_Globals)->m_NumRetries;
      *(undefined4 *)&(th08::g_GameManager.m_Globals)->field_0x10 = 0;
      (th08::g_GameManager.m_Globals)->m_Score = (th08::g_GameManager.m_Globals)->m_GuiScore;
      FUN_00406e20((th08::g_GameManager.cfg)->lifeCount);
      uVar8 = __ftol2((float10)*(float *)(_DAT_018b896c + 4));
      FUN_00406f30((int)uVar8);
      (th08::g_GameManager.m_Globals)->m_GrazeInStage = 0;
      (th08::g_GameManager.m_Globals)->m_PointItemsCollectedInStage = 0;
      (th08::g_GameManager.m_Globals)->m_PointItemsCollected = 0;
      th08::GameManager::SetPower(0);
      (th08::g_GameManager.m_Globals)->m_PointItemExtendsSoFar = 0;
      (th08::g_GameManager.m_Globals)->m_NextPointItemExtendThreshold = 100;
      th08::g_Supervisor._372_4_ = 8;
      FUN_00405280();
      FUN_00405280();
      FUN_00405280();
      FUN_00405280();
      FUN_00405280();
      FUN_00405280();
      FUN_00406c50();
      th08::g_Supervisor.m_SystemTime = timeGetTime();
      return 0;
    }
    break;
  case 4:
    if (0x13 < in_ECX[1]) {
      *in_ECX = 0;
      in_ECX[1] = 0;
      th08::g_GameManager._252851_1_ = 0;
      th08::g_Supervisor.m_CurState = 6;
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        FUN_00406700();
      }
      (th08::g_GameManager.m_Globals)->m_GuiScore = (th08::g_GameManager.m_Globals)->m_Score;
      th08::g_Supervisor.m_SystemTime = timeGetTime();
      return 0;
    }
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    th08::AnmManager::ExecuteScript(_g_AnmManager,(AnmVm *)(in_ECX + local_8 * 0xa9 + 2));
  }
  if ((th08::g_Supervisor.m_Flags >> 1 & 1) != 0) {
    th08::AnmManager::ExecuteScript(_g_AnmManager,(AnmVm *)(in_ECX + 0x3f8));
  }
  in_ECX[1] = in_ECX[1] + 1;
  return 0;
}

