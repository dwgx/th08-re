
void __thiscall th08::AnmVm::Initialize(AnmVm *this)

{
  int iVar1;
  AnmVm *pAVar2;
  
  pAVar2 = this;
  for (iVar1 = 0x82; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pAVar2->prefix).rotation.x = 0.0;
    pAVar2 = (AnmVm *)&(pAVar2->prefix).rotation.y;
  }
  (this->prefix).scale.x = 1.0;
  (this->prefix).scale.y = 1.0;
  (this->prefix).color1 = 0xffffffff;
  D3DXMatrixIdentity(&(this->prefix).matrix1);
  *(undefined2 *)&(this->prefix).flags = 7;
  ZunTimer::Initialize(&(this->prefix).currentTimeInScript);
  return;
}

