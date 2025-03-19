
undefined4 * __thiscall th08::AnmVm::AnmVm(AnmVm *this)

{
  int iVar1;
  AnmVm *pAVar2;
  
  FUN_004067c0();
  D3DXVECTOR3::D3DXVECTOR3(&(this->prefix).pos);
  ZunTimer::ZunTimer(&this->interruptReturnTime);
  D3DXVECTOR3::D3DXVECTOR3(&(this->interpData).posInitial);
  D3DXVECTOR3::D3DXVECTOR3(&(this->interpData).posFinal);
  D3DXVECTOR3::D3DXVECTOR3(&(this->interpData).rotateInitial);
  D3DXVECTOR3::D3DXVECTOR3(&(this->interpData).rotateFinal);
  D3DXVECTOR3::D3DXVECTOR3(&this->pos2);
  pAVar2 = this;
  for (iVar1 = 0xa9; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pAVar2->prefix).rotation.x = 0.0;
    pAVar2 = (AnmVm *)&(pAVar2->prefix).rotation.y;
  }
  this->activeSpriteIndex = -1;
  return (undefined4 *)this;
}

