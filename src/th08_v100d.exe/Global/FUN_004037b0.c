
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004037b0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  D3DXVECTOR3 *pDVar6;
  int *in_ECX;
  ulonglong uVar7;
  D3DXVECTOR3 local_80;
  D3DXVECTOR3 local_74;
  D3DXVECTOR3 local_68;
  D3DXVECTOR3 local_5c;
  D3DXVECTOR3 local_50;
  D3DXVECTOR3 local_44;
  D3DXVECTOR3 local_38;
  D3DXVECTOR3 local_2c;
  D3DXVECTOR3 local_20;
  D3DXVECTOR3 local_14;
  uint local_8;
  
  if ((((_DAT_0164d528 & 8) != 0) && ((_DAT_0164d528 & 8) != (_DAT_0164d530 & 8))) && (*in_ECX != 4)
     ) {
    th08::SoundPlayer::PlaySoundByIdx(&th08::g_SoundPlayer,10,0);
    *in_ECX = 4;
    for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
      iVar1 = FUN_004066e0();
      if (iVar1 != 0) {
        *(undefined2 *)((int)in_ECX + local_8 * 0x2a4 + 0x206) = 2;
      }
    }
    in_ECX[1] = 0;
    *(undefined2 *)((int)in_ECX + 0x1c6e) = 1;
  }
  if ((((_DAT_0164d528 & 0x200) != 0) && ((_DAT_0164d528 & 0x200) != (_DAT_0164d530 & 0x200))) &&
     (*in_ECX != 9)) {
    th08::SoundPlayer::PlaySoundByIdx(&th08::g_SoundPlayer,10,0);
    *in_ECX = 9;
    for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
      iVar1 = FUN_004066e0();
      if (iVar1 != 0) {
        *(undefined2 *)((int)in_ECX + local_8 * 0x2a4 + 0x206) = 2;
      }
    }
    in_ECX[1] = 0;
  }
  uVar2 = th08::GameManager::GetFlag3(&th08::g_GameManager);
  if (((uVar2 == 0) && ((_DAT_0164d528 & 0x4000) != 0)) &&
     (((_DAT_0164d528 & 0x4000) != (_DAT_0164d530 & 0x4000) && (*in_ECX != 9)))) {
    th08::SoundPlayer::PlaySoundByIdx(&th08::g_SoundPlayer,10,0);
    *in_ECX = 10;
    for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
      iVar1 = FUN_004066e0();
      if (iVar1 != 0) {
        *(undefined2 *)((int)in_ECX + local_8 * 0x2a4 + 0x206) = 2;
      }
    }
    in_ECX[1] = 0;
  }
  switch(*in_ECX) {
  case 0:
    for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
      FUN_004069f0(in_ECX + local_8 * 0xa9 + 2,local_8 + 0xc);
    }
    for (local_8 = 0; (int)local_8 < 4; local_8 = local_8 + 1) {
      *(undefined2 *)((int)in_ECX + local_8 * 0x2a4 + 0x206) = 1;
    }
    uVar2 = th08::GameManager::GetFlag14(&th08::g_GameManager);
    if ((uVar2 == 0) || ((short)th08::g_GameManager.field452_0x3dbb0 < 0xcd)) {
      FUN_0045e430(in_ECX + 0x4a1,th08::g_GameManager.difficulty + 0x11b);
    }
    else {
      FUN_0045e430(in_ECX + 0x4a1,0x120);
    }
    uVar2 = th08::GameManager::GetFlag0(&th08::g_GameManager);
    if (uVar2 == 0) {
      FUN_00406700();
    }
    if ((th08::g_GameManager.cfg)->slowMode == '\0') {
      FUN_00406700();
    }
    uVar2 = th08::GameManager::GetFlag3(&th08::g_GameManager);
    if (uVar2 != 0) {
      in_ECX[0x285] = 0;
    }
    *in_ECX = *in_ECX + 1;
    in_ECX[1] = 0;
    if ((th08::g_Supervisor.m_Flags >> 1 & 1) != 0) {
      FUN_004069f0(in_ECX + 0x69c,0);
      uVar7 = __ftol2((float10)*(float *)(in_ECX[0x725] + 0x34));
      uVar3 = (undefined4)uVar7;
      uVar7 = __ftol2((float10)*(float *)(in_ECX[0x725] + 0x30));
      uVar4 = (undefined4)uVar7;
      uVar7 = __ftol2((float10)*(float *)(in_ECX[0x725] + 0xc));
      uVar5 = (undefined4)uVar7;
      uVar7 = __ftol2((float10)*(float *)(in_ECX[0x725] + 8));
      iVar1 = FUN_00406a30(3,0x20,0x10,0x180,0x1c0,(int)uVar7,uVar5,uVar4,uVar3);
      if (iVar1 != 0) {
        *in_ECX = 0;
        return 0;
      }
      in_ECX[0x71e] = 0x42000000;
      in_ECX[0x71f] = 0x41800000;
      in_ECX[0x720] = 0;
    }
  case 1:
    in_ECX[0x127] = -1;
    in_ECX[0x279] = -0xafafb0;
    in_ECX[0x1d0] = -0xafafb0;
    pDVar6 = D3DXVECTOR3::D3DXVECTOR3(&local_14,-4.0,-4.0,0.0);
    in_ECX[0x14d] = (int)pDVar6->x;
    in_ECX[0x14e] = (int)pDVar6->y;
    in_ECX[0x14f] = (int)pDVar6->z;
    pDVar6 = D3DXVECTOR3::D3DXVECTOR3(&local_20,0.0,0.0,0.0);
    in_ECX[0x29f] = (int)pDVar6->x;
    in_ECX[0x2a0] = (int)pDVar6->y;
    in_ECX[0x2a1] = (int)pDVar6->z;
    in_ECX[0x1f6] = in_ECX[0x29f];
    in_ECX[0x1f7] = in_ECX[0x2a0];
    in_ECX[0x1f8] = in_ECX[0x2a1];
    if (3 < in_ECX[1]) {
      uVar2 = th08::GameManager::GetFlag3(&th08::g_GameManager);
      if (uVar2 == 0) {
        if (((_DAT_0164d528 & 0x10) != 0) && ((_DAT_0164d528 & 0x10) != (_DAT_0164d530 & 0x10))) {
          *in_ECX = 3;
          th08::SoundPlayer::PlaySoundByIdx(&th08::g_SoundPlayer,0,0);
        }
      }
      else if (((_DAT_0164d528 & 0x10) != 0) && ((_DAT_0164d528 & 0x10) != (_DAT_0164d530 & 0x10)))
      {
        *in_ECX = 2;
        th08::SoundPlayer::PlaySoundByIdx(&th08::g_SoundPlayer,0,0);
      }
      if (((_DAT_0164d528 & 0x20) != 0) && ((_DAT_0164d528 & 0x20) != (_DAT_0164d530 & 0x20))) {
        *in_ECX = 2;
        th08::SoundPlayer::PlaySoundByIdx(&th08::g_SoundPlayer,0,0);
      }
      if (((_DAT_0164d528 & 0x1001) != 0) && ((_DAT_0164d528 & 0x1001) != (_DAT_0164d530 & 0x1001)))
      {
        th08::SoundPlayer::PlaySoundByIdx(&th08::g_SoundPlayer,10,0);
        for (local_8 = 0; (int)local_8 < 4; local_8 = local_8 + 1) {
          *(undefined2 *)((int)in_ECX + local_8 * 0x2a4 + 0x206) = 2;
        }
        *in_ECX = 4;
        in_ECX[1] = 0;
        *(undefined2 *)((int)in_ECX + 0x1c6e) = 1;
      }
    }
    break;
  case 2:
    in_ECX[0x279] = -0xafafb0;
    in_ECX[0x127] = -0xafafb0;
    in_ECX[0x1d0] = -1;
    pDVar6 = D3DXVECTOR3::D3DXVECTOR3(&local_2c,0.0,0.0,0.0);
    in_ECX[0x29f] = (int)pDVar6->x;
    in_ECX[0x2a0] = (int)pDVar6->y;
    in_ECX[0x2a1] = (int)pDVar6->z;
    in_ECX[0x14d] = in_ECX[0x29f];
    in_ECX[0x14e] = in_ECX[0x2a0];
    in_ECX[0x14f] = in_ECX[0x2a1];
    pDVar6 = D3DXVECTOR3::D3DXVECTOR3(&local_38,-4.0,-4.0,0.0);
    in_ECX[0x1f6] = (int)pDVar6->x;
    in_ECX[0x1f7] = (int)pDVar6->y;
    in_ECX[0x1f8] = (int)pDVar6->z;
    if (3 < in_ECX[1]) {
      if (((_DAT_0164d528 & 0x10) != 0) && ((_DAT_0164d528 & 0x10) != (_DAT_0164d530 & 0x10))) {
        *in_ECX = 1;
        th08::SoundPlayer::PlaySoundByIdx(&th08::g_SoundPlayer,0,0);
      }
      uVar2 = th08::GameManager::GetFlag3(&th08::g_GameManager);
      if (uVar2 == 0) {
        if (((_DAT_0164d528 & 0x20) != 0) && ((_DAT_0164d528 & 0x20) != (_DAT_0164d530 & 0x20))) {
          *in_ECX = 3;
          th08::SoundPlayer::PlaySoundByIdx(&th08::g_SoundPlayer,0,0);
        }
      }
      else if (((_DAT_0164d528 & 0x20) != 0) && ((_DAT_0164d528 & 0x20) != (_DAT_0164d530 & 0x20)))
      {
        *in_ECX = 1;
        th08::SoundPlayer::PlaySoundByIdx(&th08::g_SoundPlayer,0,0);
      }
      if (((_DAT_0164d528 & 0x1001) != 0) && ((_DAT_0164d528 & 0x1001) != (_DAT_0164d530 & 0x1001)))
      {
        th08::SoundPlayer::PlaySoundByIdx(&th08::g_SoundPlayer,10,0);
        for (local_8 = 0; (int)local_8 < 4; local_8 = local_8 + 1) {
          *(undefined2 *)((int)in_ECX + local_8 * 0x2a4 + 0x206) = 2;
        }
        for (; (int)local_8 < 7; local_8 = local_8 + 1) {
          *(undefined2 *)((int)in_ECX + local_8 * 0x2a4 + 0x206) = 1;
        }
        *in_ECX = 6;
        in_ECX[1] = 0;
      }
    }
    break;
  case 3:
    in_ECX[0x1d0] = -0xafafb0;
    in_ECX[0x127] = -0xafafb0;
    in_ECX[0x279] = -1;
    pDVar6 = D3DXVECTOR3::D3DXVECTOR3(&local_44,0.0,0.0,0.0);
    in_ECX[0x1f6] = (int)pDVar6->x;
    in_ECX[0x1f7] = (int)pDVar6->y;
    in_ECX[0x1f8] = (int)pDVar6->z;
    in_ECX[0x14d] = in_ECX[0x1f6];
    in_ECX[0x14e] = in_ECX[0x1f7];
    in_ECX[0x14f] = in_ECX[0x1f8];
    pDVar6 = D3DXVECTOR3::D3DXVECTOR3(&local_50,-4.0,-4.0,0.0);
    in_ECX[0x29f] = (int)pDVar6->x;
    in_ECX[0x2a0] = (int)pDVar6->y;
    in_ECX[0x2a1] = (int)pDVar6->z;
    if (3 < in_ECX[1]) {
      if (((_DAT_0164d528 & 0x10) != 0) && ((_DAT_0164d528 & 0x10) != (_DAT_0164d530 & 0x10))) {
        *in_ECX = 2;
        th08::SoundPlayer::PlaySoundByIdx(&th08::g_SoundPlayer,0,0);
      }
      if (((_DAT_0164d528 & 0x20) != 0) && ((_DAT_0164d528 & 0x20) != (_DAT_0164d530 & 0x20))) {
        *in_ECX = 1;
        th08::SoundPlayer::PlaySoundByIdx(&th08::g_SoundPlayer,0,0);
      }
      if (((_DAT_0164d528 & 0x1001) != 0) && ((_DAT_0164d528 & 0x1001) != (_DAT_0164d530 & 0x1001)))
      {
        th08::SoundPlayer::PlaySoundByIdx(&th08::g_SoundPlayer,10,0);
        for (local_8 = 0; (int)local_8 < 4; local_8 = local_8 + 1) {
          *(undefined2 *)((int)in_ECX + local_8 * 0x2a4 + 0x206) = 2;
        }
        for (; (int)local_8 < 7; local_8 = local_8 + 1) {
          *(undefined2 *)((int)in_ECX + local_8 * 0x2a4 + 0x206) = 1;
        }
        *in_ECX = 8;
        in_ECX[1] = 0;
      }
    }
    break;
  case 4:
    if (0x13 < in_ECX[1]) {
      *in_ECX = 0;
      th08::g_GameManager._252850_1_ = 0;
      for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
        FUN_00406700();
      }
      FUN_00406c50();
      th08::g_Supervisor.m_SystemTime = timeGetTime();
    }
    break;
  case 5:
  case 7:
    in_ECX[0x3cb] = -0x7f80;
    in_ECX[0x474] = -0xafafb0;
    pDVar6 = D3DXVECTOR3::D3DXVECTOR3(&local_5c,-4.0,-4.0,0.0);
    in_ECX[0x3f1] = (int)pDVar6->x;
    in_ECX[0x3f2] = (int)pDVar6->y;
    in_ECX[0x3f3] = (int)pDVar6->z;
    pDVar6 = D3DXVECTOR3::D3DXVECTOR3(&local_68,0.0,0.0,0.0);
    in_ECX[0x49a] = (int)pDVar6->x;
    in_ECX[0x49b] = (int)pDVar6->y;
    in_ECX[0x49c] = (int)pDVar6->z;
    if (3 < in_ECX[1]) {
      if ((((_DAT_0164d528 & 0x10) != 0) && ((_DAT_0164d528 & 0x10) != (_DAT_0164d530 & 0x10))) ||
         (((_DAT_0164d528 & 0x20) != 0 && ((_DAT_0164d528 & 0x20) != (_DAT_0164d530 & 0x20))))) {
        if (*in_ECX == 5) {
          *in_ECX = 6;
        }
        else {
          *in_ECX = 8;
        }
        th08::SoundPlayer::PlaySoundByIdx(&th08::g_SoundPlayer,0,0);
      }
      if (((_DAT_0164d528 & 0x1001) != 0) && ((_DAT_0164d528 & 0x1001) != (_DAT_0164d530 & 0x1001)))
      {
        th08::SoundPlayer::PlaySoundByIdx(&th08::g_SoundPlayer,10,0);
        for (local_8 = 4; (int)local_8 < 7; local_8 = local_8 + 1) {
          *(undefined2 *)((int)in_ECX + local_8 * 0x2a4 + 0x206) = 2;
        }
        if (*in_ECX == 5) {
          *in_ECX = 9;
        }
        else {
          *in_ECX = 10;
        }
        in_ECX[1] = 0;
      }
    }
    break;
  case 6:
  case 8:
    in_ECX[0x3cb] = -0xafafb0;
    in_ECX[0x474] = -0x7f80;
    pDVar6 = D3DXVECTOR3::D3DXVECTOR3(&local_74,0.0,0.0,0.0);
    in_ECX[0x3f1] = (int)pDVar6->x;
    in_ECX[0x3f2] = (int)pDVar6->y;
    in_ECX[0x3f3] = (int)pDVar6->z;
    pDVar6 = D3DXVECTOR3::D3DXVECTOR3(&local_80,-4.0,-4.0,0.0);
    in_ECX[0x49a] = (int)pDVar6->x;
    in_ECX[0x49b] = (int)pDVar6->y;
    in_ECX[0x49c] = (int)pDVar6->z;
    if (3 < in_ECX[1]) {
      if ((((_DAT_0164d528 & 0x10) != 0) && ((_DAT_0164d528 & 0x10) != (_DAT_0164d530 & 0x10))) ||
         (((_DAT_0164d528 & 0x20) != 0 && ((_DAT_0164d528 & 0x20) != (_DAT_0164d530 & 0x20))))) {
        if (*in_ECX == 6) {
          *in_ECX = 5;
        }
        else {
          *in_ECX = 7;
        }
        th08::SoundPlayer::PlaySoundByIdx(&th08::g_SoundPlayer,0,0);
      }
      if (((_DAT_0164d528 & 0x1001) != 0) && ((_DAT_0164d528 & 0x1001) != (_DAT_0164d530 & 0x1001)))
      {
        th08::SoundPlayer::PlaySoundByIdx(&th08::g_SoundPlayer,10,0);
        for (local_8 = 0; (int)local_8 < 4; local_8 = local_8 + 1) {
          *(undefined2 *)((int)in_ECX + local_8 * 0x2a4 + 0x206) = 1;
        }
        for (; (int)local_8 < 7; local_8 = local_8 + 1) {
          *(undefined2 *)((int)in_ECX + local_8 * 0x2a4 + 0x206) = 2;
        }
        if (*in_ECX == 6) {
          *in_ECX = 2;
        }
        else {
          *in_ECX = 3;
        }
        in_ECX[1] = 0;
      }
    }
    break;
  case 9:
    if (0x13 < in_ECX[1]) {
      *in_ECX = 0;
      th08::g_Supervisor.m_CurState = 1;
      th08::g_GameManager._252850_1_ = 0;
      th08::g_Supervisor.m_SystemTime = timeGetTime();
      FUN_004582a0();
    }
    break;
  case 10:
    if (0x13 < in_ECX[1]) {
      uVar2 = th08::GameManager::GetFlag14(&th08::g_GameManager);
      if (((uVar2 != 0) || (uVar2 = th08::GameManager::GetFlag0(&th08::g_GameManager), uVar2 != 0))
         || (th08::g_GameManager.difficulty == 4)) {
        uVar2 = th08::GameManager::GetFlag14(&th08::g_GameManager);
        if ((uVar2 == 0) || (iVar1 = FUN_00439916(), iVar1 != 0)) {
          th08::Supervisor::StopAudio(&th08::g_Supervisor);
        }
        else {
          FUN_00406c50();
          FUN_00406ac0(0x40000000);
        }
        th08::g_Supervisor.m_CurState = 0xb;
        FUN_00438f58();
        th08::g_GameManager._252850_1_ = 0;
        th08::g_Supervisor.m_SystemTime = timeGetTime();
        return 0;
      }
      *in_ECX = 0;
      th08::g_Supervisor.m_CurState = 10;
      th08::g_GameManager._252850_1_ = 0;
      th08::g_Supervisor.m_SystemTime = timeGetTime();
    }
  }
  for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
    th08::AnmManager::ExecuteScript(_g_AnmManager,(AnmVm *)(in_ECX + local_8 * 0xa9 + 2));
  }
  if ((th08::g_Supervisor.m_Flags >> 1 & 1) != 0) {
    th08::AnmManager::ExecuteScript(_g_AnmManager,(AnmVm *)(in_ECX + 0x69c));
  }
  in_ECX[1] = in_ECX[1] + 1;
  return 0;
}

