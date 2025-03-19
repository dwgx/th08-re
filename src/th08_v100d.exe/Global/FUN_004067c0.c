
D3DXVECTOR3 * FUN_004067c0(void)

{
  D3DXVECTOR3 *in_ECX;
  
  D3DXVECTOR3::D3DXVECTOR3(in_ECX);
  D3DXVECTOR3::D3DXVECTOR3(in_ECX + 1);
  th08::ZunTimer::ZunTimer((ZunTimer *)&in_ECX[4].z);
  th08::ZunTimer::ZunTimer((ZunTimer *)&in_ECX[5].z);
  _eh_vector_constructor_iterator_(&in_ECX[6].z,0xc,7,th08::ZunTimer::ZunTimer);
  _eh_vector_constructor_iterator_(&in_ECX[0xd].z,0xc,7,th08::ZunTimer::ZunTimer);
  D3DXVECTOR3::D3DXVECTOR3((D3DXVECTOR3 *)&in_ECX[0x19].y);
  D3DXVECTOR3::D3DXVECTOR3((D3DXVECTOR3 *)&in_ECX[0x1e].z);
  D3DXVECTOR3::D3DXVECTOR3(in_ECX + 0x24);
  return in_ECX;
}

