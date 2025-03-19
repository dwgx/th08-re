
undefined4 * th08::Stage::Stage(void)

{
  D3DXVECTOR3 *pDVar1;
  undefined4 *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  D3DXVECTOR3 local_28;
  D3DXVECTOR3 local_1c;
  D3DXVECTOR3 local_10;
  
  AnmVm::AnmVm((AnmVm *)(in_ECX + 1));
  AnmVm::AnmVm((AnmVm *)(in_ECX + 0xaa));
  AnmVm::AnmVm((AnmVm *)(in_ECX + 0x153));
  ZunTimer::ZunTimer((ZunTimer *)(in_ECX + 0x203));
  D3DXVECTOR3::D3DXVECTOR3((D3DXVECTOR3 *)(in_ECX + 0x209));
  ZunTimer::ZunTimer((ZunTimer *)(in_ECX + 0x20e));
  AnmVm::AnmVm((AnmVm *)(in_ECX + 0x211));
  ZunTimer::ZunTimer((ZunTimer *)(in_ECX + 0x2c5));
  _eh_vector_constructor_iterator_(in_ECX + 0x2ce,0x2a4,0x20,AnmVm::AnmVm);
  AnmVm::AnmVm((AnmVm *)(in_ECX + 0x17ee));
  FUN_004073b0();
  FUN_004073b0();
  FUN_004073b0();
  FUN_004073b0();
  FUN_004073b0();
  _eh_vector_constructor_iterator_(in_ECX + 0x18fd,0xc,5,ZunTimer::ZunTimer);
  D3DXVECTOR3::D3DXVECTOR3((D3DXVECTOR3 *)(in_ECX + 0x1911));
  D3DXVECTOR3::D3DXVECTOR3((D3DXVECTOR3 *)(in_ECX + 0x1915));
  _eh_vector_constructor_iterator_(in_ECX + 0x1920,0xc,0x20,D3DXVECTOR3::D3DXVECTOR3);
  puVar3 = in_ECX;
  for (iVar2 = 0x1980; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  pDVar1 = D3DXVECTOR3::D3DXVECTOR3(&local_10,0.0,0.0,1000.0);
  in_ECX[0x18e5] = pDVar1->x;
  in_ECX[0x18e6] = pDVar1->y;
  in_ECX[0x18e7] = pDVar1->z;
  pDVar1 = D3DXVECTOR3::D3DXVECTOR3(&local_1c,0.0,0.0,0.0);
  in_ECX[0x18e8] = pDVar1->x;
  in_ECX[0x18e9] = pDVar1->y;
  in_ECX[0x18ea] = pDVar1->z;
  pDVar1 = D3DXVECTOR3::D3DXVECTOR3(&local_28,0.0,1.0,0.0);
  in_ECX[0x18eb] = pDVar1->x;
  in_ECX[0x18ec] = pDVar1->y;
  in_ECX[0x18ed] = pDVar1->z;
  in_ECX[0x18f7] = 0x3f060a92;
  puVar3 = in_ECX + 0x18e5;
  puVar4 = in_ECX + 0x1899;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = in_ECX + 0x18e5;
  puVar4 = in_ECX + 0x18ac;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return in_ECX;
}

