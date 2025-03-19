
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bc60(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  uint in_EDX;
  uint local_c;
  
  bVar1 = th08::ZunTimer::operator<((ZunTimer *)(in_ECX + 0xff4),0x3c);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    iVar2 = FUN_0040b8e0(*(int *)(in_ECX + 0xfe4) + -0x3c);
    local_c = in_EDX;
    if (iVar2 != 0) {
      iVar4 = FUN_0040d3b0();
      iVar2 = *(int *)(in_ECX + 0xfe4);
      iVar5 = FUN_0040d3b0();
      iVar3 = *(int *)(in_ECX + 0xfe4);
      iVar6 = FUN_0040d3b0();
      local_c = (uint)CONCAT21(CONCAT11(-0x80 - (char)((int)((0x80 - (in_EDX >> 0x10 & 0xff)) *
                                                            (iVar2 - iVar4)) / 0x3c),
                                        -0x80 - (char)((int)((0x80 - (in_EDX >> 8 & 0xff)) *
                                                            (iVar3 - iVar5)) / 0x3c)),
                               -0x80 - (char)((int)((0x80 - (in_EDX & 0xff)) *
                                                   (*(int *)(in_ECX + 0xfe4) - iVar6)) / 0x3c));
    }
  }
  else {
    iVar2 = FUN_0040d3b0();
    iVar3 = FUN_0040d3b0();
    iVar4 = FUN_0040d3b0();
    local_c = (uint)CONCAT21(CONCAT11(-0x80 - (char)((int)(iVar2 * (0x80 - (in_EDX >> 0x10 & 0xff)))
                                                    / 0x3c),
                                      -0x80 - (char)((int)(iVar3 * (0x80 - (in_EDX >> 8 & 0xff))) /
                                                    0x3c)),
                             -0x80 - (char)((int)(iVar4 * (0x80 - (in_EDX & 0xff))) / 0x3c));
  }
  local_c = CONCAT13(0x80,(undefined3)local_c);
  FUN_0040bab0();
  FUN_00409160(local_c);
  _DAT_004ea49c = 1;
  return;
}

