
void __thiscall th08::AsciiManager::FUN_00402450(AsciiManager *this)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(this + 0x2a4);
  for (iVar1 = 0xa9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)(this + 0x548);
  for (iVar1 = 0xa9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)this;
  for (iVar1 = 0xa9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)(this + 0x2264);
  for (iVar1 = 0x1800; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)(this + 0x82a0);
  for (iVar1 = 0x745; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)(this + 0x9fb4);
  for (iVar1 = 0x4a1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)(this + 0xb4dc);
  for (iVar1 = 0x278a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)(this + 0x15304);
  for (iVar1 = 0x700; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(this + 0x8264) = 0;
  *(undefined4 *)(this + 0x8274) = 0;
  *(undefined4 *)(this + 0x8278) = 0;
  *(undefined4 *)(this + 0x8290) = 0;
  *(undefined4 *)(this + 0x8294) = 0;
  *(undefined4 *)(this + 0x829c) = 0;
  *(undefined4 *)(this + 0x8268) = 0xffffffff;
  *(undefined4 *)(this + 0x826c) = 0x3f800000;
  *(undefined4 *)(this + 0x8270) = 0x3f800000;
  *(uint *)(this + 0x49c) = *(uint *)(this + 0x49c) | 0x1800;
  *(uint *)(this + 0x740) = *(uint *)(this + 0x740) | 0x1800;
  FUN_004068a0(this + 0x2a4,0);
  FUN_004068a0(this + 0x548,0x88);
  FUN_004068a0(this,0x20);
  *(undefined4 *)(this + 0x4b4) = 0x3dcccccd;
  *(undefined4 *)(this + 0x8278) = 0;
  FUN_00407180(this,0xd);
  return;
}

