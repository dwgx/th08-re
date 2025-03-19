
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c010(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined3 extraout_var;
  D3DXVECTOR3 *pDVar4;
  int in_ECX;
  float10 fVar5;
  float local_60;
  undefined4 local_5c;
  D3DXVECTOR3 local_54;
  D3DXVECTOR3 local_48;
  int local_3c;
  D3DXVECTOR3 local_38;
  float local_2c;
  float local_28;
  float local_24;
  D3DXVECTOR3 local_20;
  float local_14;
  int *local_10;
  int local_c;
  uint local_8;
  
  local_c = in_ECX + 0xfdc;
  iVar2 = FUN_0040d3d0();
  if ((iVar2 != 0) && (iVar2 = FUN_0040d3f0(0), iVar2 != 0)) {
    FUN_0040be30(&DAT_004b43a0,200,0x104,0);
    FUN_00425430(0xc,in_ECX + 0x2b4,1,0xff4040ff);
    local_14 = -3.141593;
    local_10 = (int *)(local_c + 0x4c);
    for (local_8 = 0; (int)local_8 < 0x10; local_8 = local_8 + 1) {
      FUN_004069f0(local_c + 0x204 + local_8 * 0x16f0,0x13);
      *(float *)(local_c + 0x5c + local_8 * 0x16f0) = local_14;
      local_14 = local_14 + 0.3926991;
      local_10[5] = *(undefined4 *)(in_ECX + 0x2b4);
      local_10[6] = *(undefined4 *)(in_ECX + 0x2b8);
      local_10[7] = *(undefined4 *)(in_ECX + 700);
      local_10[8] = local_10[5];
      local_10[9] = local_10[6];
      local_10[10] = local_10[7];
      local_10[2] = 0;
      *local_10 = 1;
      uVar3 = FUN_0044df00(in_ECX + 0x2b4,0x42c00000,0,200,6);
      local_10[0x5bb] = uVar3;
      uVar3 = FUN_0044e040(local_10 + 5,0x42800000,0,5,200);
      local_10[0x5ba] = uVar3;
      *(undefined4 *)(local_10[0x5ba] + 0x38) = 2;
      *(undefined4 *)(local_10[0x5ba] + 0x34) = 200;
      *(undefined *)(local_10[0x5ba] + 0x3d) = 1;
      local_10 = local_10 + 0x5bc;
    }
    th08::SoundPlayer::FUN_0045d550(&th08::g_SoundPlayer,0xd,0);
  }
  bVar1 = th08::ZunTimer::operator<((ZunTimer *)(local_c + 0x18),0x28);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    D3DXVECTOR3::D3DXVECTOR3(&local_38);
    iVar2 = FUN_0040d3f0(0x28);
    if (iVar2 != 0) {
      local_10 = (int *)(local_c + 0x4c);
      for (local_8 = 0; (int)local_8 < 0x10; local_8 = local_8 + 1) {
        fVar5 = (float10)FUN_0040b440(*(float *)((int)local_10 + 0x1a4) *
                                      *(float *)((int)local_10 + 0x1a4) +
                                      *(float *)((int)local_10 + 0x1a0) *
                                      *(float *)((int)local_10 + 0x1a0));
        *(float *)((int)local_10 + 0xc) = (float)fVar5;
        fVar5 = (float10)FUN_0040c7b0(*(undefined4 *)((int)local_10 + 0x1a0),
                                      *(undefined4 *)((int)local_10 + 0x1a4));
        *(float *)((int)local_10 + 0x10) = (float)fVar5;
        *(undefined4 *)((int)local_10 + 4) = 0;
        *(undefined4 *)((int)local_10 + 8) = 0x41000000;
        local_10 = (int *)((int)local_10 + 0x16f0);
      }
    }
    local_10 = (int *)(local_c + 0x4c);
    for (local_8 = 0; (int)local_8 < 0x10; local_8 = local_8 + 1) {
      if (*local_10 != 0) {
        if ((*local_10 == 1) && (iVar2 = FUN_0040d3d0(), iVar2 != 0)) {
          if (*(float *)(in_ECX + 0xe2aa4) <= -100.0) {
            local_38.x = *(float *)(in_ECX + 0x2b4);
            local_38.y = *(float *)(in_ECX + 0x2b8);
            local_38.z = *(float *)(in_ECX + 700);
          }
          else {
            local_38.x = *(float *)(in_ECX + 0xe2aa4);
            local_38.y = *(float *)(in_ECX + 0xe2aa8);
            local_38.z = *(float *)(in_ECX + 0xe2aac);
          }
          pDVar4 = D3DXVECTOR3::D3DXVECTOR3(&local_38);
          local_28 = pDVar4->x - (float)local_10[5];
          pDVar4 = D3DXVECTOR3::D3DXVECTOR3(&local_38);
          local_24 = pDVar4->y - (float)local_10[6];
          fVar5 = (float10)FUN_0040b440(local_24 * local_24 + local_28 * local_28);
          local_2c = (float)(fVar5 / ((float10)(float)local_10[2] / (float10)8.0));
          if (local_2c < 1.0 != NAN(local_2c)) {
            local_2c = 1.0;
          }
          local_28 = local_28 / local_2c + (float)local_10[0x68];
          local_24 = local_24 / local_2c + (float)local_10[0x69];
          fVar5 = (float10)FUN_0040b440(local_24 * local_24 + local_28 * local_28);
          local_2c = (float)fVar5;
          local_60 = local_2c;
          if ((float10)10.0 < fVar5) {
            local_60 = 10.0;
          }
          local_10[2] = (int)local_60;
          if ((float)local_10[2] < 1.0 != NAN((float)local_10[2])) {
            local_10[2] = 0x3f800000;
          }
          local_10[0x68] = (int)((local_28 * (float)local_10[2]) / local_2c);
          local_10[0x69] = (int)((local_24 * (float)local_10[2]) / local_2c);
          FUN_0044df00(local_10 + 5,0x43000000,0,0,6);
          if ((*(int *)(local_10[0x5ba] + 0x34) <= *(int *)(local_10[0x5ba] + 0x30)) ||
             (iVar2 = FUN_0040b8e0(*(int *)(local_c + 8) + -0x1e), iVar2 != 0)) {
            *(undefined *)(local_10[0x5bb] + 0x3c) = 0;
            *(undefined *)(local_10[0x5ba] + 0x3c) = 0;
            FUN_0044df00(in_ECX + 0x2b4,0x42800000,0x40888889,0x1e,6);
            local_3c = FUN_0044e040(local_10 + 5,0x42800000,0x414ccccd,500,0xc);
            *(undefined4 *)(local_3c + 0x38) = 4;
            *(undefined4 *)(local_3c + 0x34) = 0;
            FUN_00425430(6,local_10 + 5,8,0xffffffff);
            *local_10 = 2;
            *(undefined2 *)((int)local_10 + 0x3b6) = 1;
            D3DXVECTOR3::operator/((D3DXVECTOR3 *)(local_10 + 0x68),&local_54,8.0);
            th08::SoundPlayer::FUN_0045d660(&th08::g_SoundPlayer,0xf,(float)local_10[5]);
            FUN_0045b8b0(8,0,0,0x15);
          }
        }
        local_10[5] = (int)(th08::g_Supervisor.m_FramerateMultiplier * (float)local_10[0x68] +
                           (float)local_10[5]);
        local_10[6] = (int)(th08::g_Supervisor.m_FramerateMultiplier * (float)local_10[0x69] +
                           (float)local_10[6]);
      }
      local_10 = local_10 + 0x5bc;
    }
  }
  else {
    D3DXVECTOR3::D3DXVECTOR3(&local_20);
    local_10 = (int *)(local_c + 0x4c);
    for (local_8 = 0; (int)local_8 < 0x10; local_8 = local_8 + 1) {
      if ((local_8 & 1) == 0) {
        local_5c = 0xbd567750;
      }
      else {
        local_5c = 0x3d567750;
      }
      fVar5 = (float10)th08::AddNormalizeAngle(*(undefined4 *)((int)local_10 + 0x10),local_5c);
      *(float *)((int)local_10 + 0x10) = (float)fVar5;
      local_20.x = *(float *)((int)local_10 + 0x14);
      local_20.y = *(float *)((int)local_10 + 0x18);
      local_20.z = *(float *)((int)local_10 + 0x1c);
      fVar5 = (float10)_sinf(*(undefined4 *)((int)local_10 + 0x10));
      *(float *)((int)local_10 + 0x14) =
           (float)(fVar5 * (float10)*(float *)((int)local_10 + 8) +
                  (float10)*(float *)((int)local_10 + 0x20));
      fVar5 = (float10)_cosf(*(undefined4 *)((int)local_10 + 0x10));
      *(float *)((int)local_10 + 0x18) =
           (float)(fVar5 * (float10)*(float *)((int)local_10 + 8) +
                  (float10)*(float *)((int)local_10 + 0x24));
      *(float *)((int)local_10 + 8) = *(float *)((int)local_10 + 8) + 3.2;
      pDVar4 = D3DXVECTOR3::operator-((D3DXVECTOR3 *)((int)local_10 + 0x14),&local_48,&local_20);
      *(float *)((int)local_10 + 0x1a0) = pDVar4->x;
      *(float *)((int)local_10 + 0x1a4) = pDVar4->y;
      *(float *)((int)local_10 + 0x1a8) = pDVar4->z;
      local_10 = (int *)((int)local_10 + 0x16f0);
    }
  }
  local_10 = (int *)(local_c + 0x4c);
  for (local_8 = 0; (int)local_8 < 0x10; local_8 = local_8 + 1) {
    if (*local_10 != 0) {
      if (*local_10 == 1) {
        *(int *)local_10[0x5bb] = local_10[5];
        *(int *)(local_10[0x5bb] + 4) = local_10[6];
        *(int *)local_10[0x5ba] = local_10[5];
        *(int *)(local_10[0x5ba] + 4) = local_10[6];
      }
      else if (((*local_10 != 0) && (iVar2 = FUN_0040d3d0(), iVar2 != 0)) &&
              (local_10[1] = local_10[1] + 1, 0x1d < local_10[1])) {
        *local_10 = 0;
      }
      th08::AnmManager::ExecuteScript(_g_AnmManager,(AnmVm *)(local_10 + 0x6e));
    }
    local_10 = local_10 + 0x5bc;
  }
  return;
}

