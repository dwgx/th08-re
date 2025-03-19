
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00409200(void)

{
  float *pfVar1;
  undefined uVar2;
  D3DXVECTOR3 *pDVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  D3DXVECTOR3 local_44;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  D3DVIEWPORT8 local_20;
  int local_8;
  
  *(undefined4 *)(in_ECX + 0x6478) = 0;
  for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
    pDVar3 = D3DXVECTOR3::D3DXVECTOR3(&local_44,0.0,0.0,0.0);
    pfVar1 = (float *)(in_ECX + 0x6480 + local_8 * 0xc);
    *pfVar1 = pDVar3->x;
    pfVar1[1] = pDVar3->y;
    pfVar1[2] = pDVar3->z;
  }
  th08::g_Supervisor.m_Viewport.X = 0x20;
  th08::g_Supervisor.m_Viewport.Y = 0x10;
  th08::g_Supervisor.m_Viewport.Width = 0x180;
  th08::g_Supervisor.m_Viewport.Height = 0x1c0;
  FUN_00462e00();
  th08::AnmManager::FUN_0040b9f0(_g_AnmManager);
  FUN_0040ba50();
  FUN_0040ba10();
  th08::AnmManager::FUN_0040b9d0(_g_AnmManager);
  th08::AnmManager::FUN_0040b9b0(_g_AnmManager);
  th08::AnmManager::FUN_0040ba30(_g_AnmManager);
  Concurrency::details::ContextBase::ClearCancel((ContextBase *)_g_AnmManager);
  FUN_0040ba70();
  uVar4 = th08::Supervisor::IsFogDisabled(&th08::g_Supervisor);
  if (uVar4 == 0) {
    th08::Supervisor::DisableFog(&th08::g_Supervisor);
  }
  th08::AnmManager::FUN_00462e40(_g_AnmManager);
  if (*(int *)(in_ECX + 0xb2c) != 0) {
    local_20.X = 0x20;
    local_20.Y = 0x10;
    local_20.Width = 0x180;
    local_20.Height = 0x1c0;
    (*(th08::g_Supervisor.m_D3dDevice)->lpVtbl->SetViewport)
              (th08::g_Supervisor.m_D3dDevice,&local_20);
    (*(th08::g_Supervisor.m_D3dDevice)->lpVtbl->Clear)
              (th08::g_Supervisor.m_D3dDevice,0,(D3DRECT *)0x0,1,0xff000000,1.0,0);
    *(undefined4 *)(in_ECX + 0xb2c) = 0;
  }
  (*(th08::g_Supervisor.m_D3dDevice)->lpVtbl->SetViewport)
            (th08::g_Supervisor.m_D3dDevice,(D3DVIEWPORT8 *)0x17ce820);
  if (*(char *)(in_ECX + 0x646b) != '\0') {
    FUN_0040bad0(*(undefined4 *)(in_ECX + 0x6468));
  }
  *(undefined *)(in_ECX + 0x646b) = 0;
  *(undefined *)(in_ECX + 0x646a) = 0x80;
  *(undefined *)(in_ECX + 0x6469) = 0x80;
  *(undefined *)(in_ECX + 0x6468) = 0x80;
  if (*(int *)(in_ECX + 0xb24) < 2) {
    iVar5 = FUN_00437d87();
    if (iVar5 == 0) {
      if (0 < *(short *)(in_ECX + 0x218)) {
        FUN_0040baf0(in_ECX + 4);
      }
      if (0 < *(short *)(in_ECX + 0x4bc)) {
        FUN_0040baf0(in_ECX + 0x2a8);
      }
      if (*(int *)(in_ECX + 0xae8) != 0) {
        local_24 = *(int *)(in_ECX + 0xae8);
        (**(code **)(local_24 + 0x34c))();
      }
    }
  }
  if ((*(uint *)(in_ECX + 0x830) & 0xff000000) == 0xff000000) {
    (*(th08::g_Supervisor.m_D3dDevice)->lpVtbl->Clear)
              (th08::g_Supervisor.m_D3dDevice,0,(D3DRECT *)0x0,3,*(D3DCOLOR *)(in_ECX + 0x830),1.0,0
              );
  }
  else if (*(int *)(in_ECX + 0x830) == 0) {
    (*(th08::g_Supervisor.m_D3dDevice)->lpVtbl->Clear)
              (th08::g_Supervisor.m_D3dDevice,0,(D3DRECT *)0x0,2,*(D3DCOLOR *)(in_ECX + 0x830),1.0,0
              );
  }
  else {
    local_34 = 0x42000000;
    local_30 = 0x41800000;
    local_2c = 0x43d00000;
    local_28 = 0x43e80000;
    FUN_0045b1e0();
    (*(th08::g_Supervisor.m_D3dDevice)->lpVtbl->Clear)
              (th08::g_Supervisor.m_D3dDevice,0,(D3DRECT *)0x0,2,*(D3DCOLOR *)(in_ECX + 0x830),1.0,0
              );
  }
  th08::Supervisor::SetRenderState(&th08::g_Supervisor,0x17,4);
  if (*(int *)(_g_AnmManager + 4) == 0) {
    th08::Supervisor::SetRenderState(&th08::g_Supervisor,0x22,*(undefined4 *)(in_ECX + 0xaf4));
  }
  else {
    local_38 = *(undefined4 *)(in_ECX + 0xaf4);
    uVar2 = FUN_00462750();
    uVar2 = FUN_00462750();
    local_38._0_2_ = CONCAT11(uVar2,(undefined)local_38);
    uVar2 = FUN_00462750();
    local_38 = CONCAT31(local_38._1_3_,uVar2);
    th08::Supervisor::SetRenderState(&th08::g_Supervisor,0x22,local_38);
  }
  th08::Supervisor::SetRenderState(&th08::g_Supervisor,0x24,*(undefined4 *)(in_ECX + 0xaec));
  th08::Supervisor::SetRenderState(&th08::g_Supervisor,0x25,*(undefined4 *)(in_ECX + 0xaf0));
  uVar4 = th08::Supervisor::IsFogDisabled(&th08::g_Supervisor);
  if (uVar4 == 0) {
    th08::Supervisor::EnableFog(&th08::g_Supervisor);
  }
  if (*(int *)(in_ECX + 0xb24) < 2) {
    iVar5 = FUN_00437d87();
    if (iVar5 == 0) {
      FUN_0040a1b0(0);
      FUN_0040a1b0(1);
    }
  }
  return 1;
}

