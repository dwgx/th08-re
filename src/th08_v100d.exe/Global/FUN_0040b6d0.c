
void FUN_0040b6d0(void)

{
  int in_ECX;
  D3DXVECTOR3 local_1c;
  D3DXVECTOR3 local_10;
  
  D3DXVECTOR3::operator+
            ((D3DXVECTOR3 *)(in_ECX + 0x63a0),&local_1c,(D3DXVECTOR3 *)(in_ECX + 0x6394));
  D3DXVECTOR3::operator+
            ((D3DXVECTOR3 *)(in_ECX + 0x63d0),&local_10,(D3DXVECTOR3 *)(in_ECX + 0x6394));
  FUN_00478395(0x17ce7a0,&local_10,&local_1c,in_ECX + 0x63ac);
  FUN_004784dd(0x17ce7e0,*(undefined4 *)(in_ECX + 0x63dc),
               (float)(ulonglong)th08::g_Supervisor.m_Viewport.Width /
               (float)(ulonglong)th08::g_Supervisor.m_Viewport.Height,0x41f00000,0x44e10000);
  (*(th08::g_Supervisor.m_D3dDevice)->lpVtbl->SetTransform)
            (th08::g_Supervisor.m_D3dDevice,D3DTS_VIEW,(D3DMATRIX *)0x17ce7a0);
  (*(th08::g_Supervisor.m_D3dDevice)->lpVtbl->SetTransform)
            (th08::g_Supervisor.m_D3dDevice,D3DTS_PROJECTION,(D3DMATRIX *)0x17ce7e0);
  FUN_0040b7f0(in_ECX + 0x63ac);
  D3DXVec3Normalize(in_ECX + 0x63c4,in_ECX + 0x63c4);
  return;
}

