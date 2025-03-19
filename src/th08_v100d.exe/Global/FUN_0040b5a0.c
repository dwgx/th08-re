
void FUN_0040b5a0(void)

{
  D3DXVECTOR3 *pDVar1;
  D3DXVECTOR3 *pDVar2;
  D3DXVECTOR3 *pDVar3;
  float10 fVar4;
  D3DXVECTOR3 local_3c;
  D3DXVECTOR3 local_30;
  D3DXVECTOR3 local_24;
  undefined4 local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_10 = (float)(ulonglong)th08::g_Supervisor.m_Viewport.Width / 2.0;
  local_c = (float)(ulonglong)th08::g_Supervisor.m_Viewport.Height / 2.0;
  local_14 = (float)(ulonglong)th08::g_Supervisor.m_Viewport.Width /
             (float)(ulonglong)th08::g_Supervisor.m_Viewport.Height;
  local_18 = 0x3ea0d97c;
  fVar4 = (float10)__CItan();
  local_8 = (float)((float10)local_c / fVar4);
  pDVar1 = D3DXVECTOR3::D3DXVECTOR3(&local_24,0.0,-1.0,0.0);
  pDVar2 = D3DXVECTOR3::D3DXVECTOR3(&local_30,local_10,local_c,0.0);
  pDVar3 = D3DXVECTOR3::D3DXVECTOR3(&local_3c,local_10,local_c,local_8);
  FUN_00478395(0x17ce7a0,pDVar3,pDVar2,pDVar1);
  FUN_004784dd(0x17ce7e0,local_18,local_14,0x3f800000,0x461c4000);
  (*(th08::g_Supervisor.m_D3dDevice)->lpVtbl->SetTransform)
            (th08::g_Supervisor.m_D3dDevice,D3DTS_VIEW,(D3DMATRIX *)0x17ce7a0);
  (*(th08::g_Supervisor.m_D3dDevice)->lpVtbl->SetTransform)
            (th08::g_Supervisor.m_D3dDevice,D3DTS_PROJECTION,(D3DMATRIX *)0x17ce7e0);
  return;
}

