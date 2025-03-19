
void __thiscall th08::AnmLoaded::ExecuteAnmIdx(AnmLoaded *this,AnmVm *vm,int anmFileIdx)

{
  D3DXVECTOR3 *pDVar1;
  D3DXVECTOR3 local_1c;
  D3DXVECTOR3 local_10;
  
  vm->scriptIndex = (i16)anmFileIdx;
  pDVar1 = D3DXVECTOR3::D3DXVECTOR3(&local_10,0.0,0.0,0.0);
  (vm->prefix).pos.x = pDVar1->x;
  (vm->prefix).pos.y = pDVar1->y;
  (vm->prefix).pos.z = pDVar1->z;
  pDVar1 = D3DXVECTOR3::D3DXVECTOR3(&local_1c,0.0,0.0,0.0);
  (vm->pos2).x = pDVar1->x;
  (vm->pos2).y = pDVar1->y;
  (vm->pos2).z = pDVar1->z;
  vm->fontHeight = '\x0f';
  vm->fontWidth = '\x0f';
  SetAndExecuteScript(this,vm,*(AnmRawInstr **)((int)this->scripts + anmFileIdx * 4));
  return;
}

