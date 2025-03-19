
void FUN_0040bf00(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xe2b1c) != 0) {
    *(undefined *)(*(int *)(in_ECX + 0xe2b1c) + 0x350) = 0;
  }
  iVar1 = FUN_00425870(0x17,in_ECX + 0x2b4,0,1,0xffffffff);
  th08::ZunTimer::SetCurrent((ZunTimer *)(iVar1 + 0x80),0);
  *(undefined4 *)(iVar1 + 0xd4) = *(undefined4 *)(in_ECX + 0xe2af4);
  *(undefined4 *)(iVar1 + 0xd8) = *(undefined4 *)(in_ECX + 0xe2af8);
  *(undefined4 *)(iVar1 + 0xdc) = *(undefined4 *)(in_ECX + 0xe2afc);
  *(undefined *)(iVar1 + 0xfc) = 0;
  *(undefined4 *)(iVar1 + 0x268) = *(undefined4 *)(iVar1 + 0x18);
  *(undefined4 *)(iVar1 + 0x26c) = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x270) = 0x3d800000;
  *(undefined4 *)(iVar1 + 0x274) = 0x3d800000;
  uVar2 = FUN_0040d3b0();
  *(undefined4 *)(iVar1 + 0x100) = uVar2;
  *(float *)(iVar1 + 0x14) = *(float *)(iVar1 + 0x14) * -1.0;
  *(undefined *)(iVar1 + 0x1f2) = 0xff;
  *(undefined *)(iVar1 + 0x1f1) = 0x40;
  *(undefined *)(iVar1 + 0x1f0) = 0x40;
  *(int *)(in_ECX + 0xe2b1c) = iVar1;
  return;
}

