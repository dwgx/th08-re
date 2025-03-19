
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00409850(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  D3DXVECTOR3 *pDVar4;
  int in_ECX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  D3DXVECTOR3 local_38;
  D3DXVECTOR3 local_2c;
  D3DXVECTOR3 local_20;
  D3DXVECTOR3 local_14;
  int local_8;
  
  th08::ZunTimer::SetCurrent((ZunTimer *)(in_ECX + 0x80c),0);
  *(undefined4 *)(in_ECX + 0x818) = 0;
  *(undefined4 *)(in_ECX + 0x824) = 0;
  *(undefined4 *)(in_ECX + 0x828) = 0;
  *(undefined4 *)(in_ECX + 0x82c) = 0;
  *(undefined4 *)(in_ECX + 0xb24) = 0;
  *(undefined4 *)(in_ECX + 0xb10) = 0;
  iVar1 = FUN_0040b900();
  if (iVar1 == 0) {
    uVar2 = th08::AnmManager::LoadAnm
                      (_g_AnmManager,4,
                       (&PTR_s_stg1bg_anm_004c72f8)[th08::g_GameManager.currentStage]);
    *(uint *)(in_ECX + 0x7f0) = uVar2;
    if (*(int *)(in_ECX + 0x7f0) == 0) {
      return 0xffffffff;
    }
  }
  else {
    uVar3 = FUN_0040bb60(4);
    *(undefined4 *)(in_ECX + 0x7f0) = uVar3;
  }
  uVar2 = th08::GameManager::GetFlag14(&th08::g_GameManager);
  if (uVar2 == 0) {
    iVar1 = FUN_00409ce0((&PTR_s_stage1_std_004c731c)[th08::g_GameManager.currentStage]);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
  }
  else {
    iVar1 = FUN_00409ce0((&PTR_s_stage1_s_std_004c7340)[th08::g_GameManager.currentStage]);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
  }
  *(undefined4 *)(in_ECX + 0xaf4) = 0xff000000;
  *(undefined4 *)(in_ECX + 0xaec) = 0x43480000;
  *(undefined4 *)(in_ECX + 0xaf0) = 0x43fa0000;
  pDVar4 = D3DXVECTOR3::D3DXVECTOR3(&local_14,0.0,0.0,1000.0);
  *(float *)(in_ECX + 0x6394) = pDVar4->x;
  *(float *)(in_ECX + 0x6398) = pDVar4->y;
  *(float *)(in_ECX + 0x639c) = pDVar4->z;
  pDVar4 = D3DXVECTOR3::D3DXVECTOR3(&local_20,0.0,0.0,0.0);
  *(float *)(in_ECX + 0x63a0) = pDVar4->x;
  *(float *)(in_ECX + 0x63a4) = pDVar4->y;
  *(float *)(in_ECX + 0x63a8) = pDVar4->z;
  pDVar4 = D3DXVECTOR3::D3DXVECTOR3(&local_2c,0.0,0.0,0.0);
  *(float *)(in_ECX + 0x63d0) = pDVar4->x;
  *(float *)(in_ECX + 0x63d4) = pDVar4->y;
  *(float *)(in_ECX + 0x63d8) = pDVar4->z;
  pDVar4 = D3DXVECTOR3::D3DXVECTOR3(&local_38,0.0,1.0,0.0);
  *(float *)(in_ECX + 0x63ac) = pDVar4->x;
  *(float *)(in_ECX + 0x63b0) = pDVar4->y;
  *(float *)(in_ECX + 0x63b4) = pDVar4->z;
  *(undefined4 *)(in_ECX + 0x63dc) = 0x3f060a92;
  puVar5 = (undefined4 *)(in_ECX + 0x6394);
  puVar6 = (undefined4 *)(in_ECX + 0x6264);
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined4 *)(in_ECX + 0x6394);
  puVar6 = (undefined4 *)(in_ECX + 0x62b0);
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined *)(in_ECX + 0x6474) = 0;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    *(undefined4 *)(in_ECX + 0x63e0 + local_8 * 4) = 0;
    th08::ZunTimer::SetCurrent((ZunTimer *)(in_ECX + 0x63f4 + local_8 * 0xc),0);
  }
  *(undefined4 *)(in_ECX + 0x6260) = 0;
  *(undefined4 *)(in_ECX + 0x6470) = 0x49a17020;
  if (th08::g_GameManager.currentStage == 5) {
    *(undefined4 *)(in_ECX + 0x6470) = 0x49de7920;
  }
  else if ((th08::g_GameManager.currentStage == 6) || (th08::g_GameManager.currentStage == 7)) {
    *(undefined4 *)(in_ECX + 0x6470) = 0x4a45c100;
  }
  return 0;
}

