
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00409f40(void)

{
  int iVar1;
  int *in_ECX;
  short *local_1c;
  AnmVm *local_14;
  int local_10;
  int local_c;
  
  if (*(char *)(in_ECX + 0x20d) == '\0') {
    iVar1 = FUN_0040bc40();
    if (iVar1 != 0) {
      *(undefined *)(in_ECX + 0x20d) = 1;
      th08::ZunTimer::SetCurrent((ZunTimer *)(in_ECX + 0x20e),0);
      th08::AnmVm::SetInterrupt((AnmVm *)(in_ECX + 0x211),1);
    }
  }
  else {
    iVar1 = FUN_0040bc20();
    if (iVar1 != 0) {
      *(undefined *)(in_ECX + 0x20d) = 0;
      th08::ZunTimer::SetCurrent((ZunTimer *)(in_ECX + 0x20e),0);
      th08::AnmVm::SetInterrupt((AnmVm *)(in_ECX + 0x211),2);
    }
  }
  th08::ZunTimer::Tick((ZunTimer *)(in_ECX + 0x20e));
  th08::AnmManager::ExecuteScript(_g_AnmManager,(AnmVm *)(in_ECX + 0x211));
  for (local_10 = 0; local_10 < in_ECX[0x1ff]; local_10 = local_10 + 1) {
    iVar1 = *(int *)(in_ECX[0x200] + local_10 * 4);
    if ((*(byte *)(iVar1 + 3) & 1) != 0) {
      local_c = 0;
      for (local_1c = (short *)(iVar1 + 0x1c); -1 < *local_1c;
          local_1c = (short *)((int)local_1c + (int)local_1c[1])) {
        local_14 = (AnmVm *)(local_1c[3] * 0x2a4 + *in_ECX);
        if (*local_1c == 0) {
          th08::AnmManager::ExecuteScript(_g_AnmManager,local_14);
        }
        else if (*local_1c == 1) {
          th08::AnmManager::ExecuteScript(_g_AnmManager,local_14);
        }
        if (local_14->currentInstruction != (AnmRawInstr *)0x0) {
          local_c = local_c + 1;
        }
      }
      if ((local_14->prefix).type == 1) {
        (local_14->prefix).flags = (local_14->prefix).flags | 0x20000;
        *(char *)((int)&(local_14->prefix).color2 + 2) =
             (char)((uint)*(byte *)((int)&(local_14->prefix).color1 + 2) *
                    (uint)*(byte *)((int)in_ECX + 0xa36) >> 8);
        *(char *)((int)&(local_14->prefix).color2 + 1) =
             (char)((uint)*(byte *)((int)&(local_14->prefix).color1 + 1) *
                    (uint)*(byte *)((int)in_ECX + 0xa35) >> 8);
        *(char *)&(local_14->prefix).color2 =
             (char)((uint)*(byte *)&(local_14->prefix).color1 * (uint)*(byte *)(in_ECX + 0x28d) >> 8
                   );
        *(char *)((int)&(local_14->prefix).color2 + 3) =
             (char)((uint)*(byte *)((int)&(local_14->prefix).color1 + 3) *
                    (uint)*(byte *)((int)in_ECX + 0xa37) >> 8);
      }
      if (local_c == 0) {
        *(byte *)(iVar1 + 3) = *(byte *)(iVar1 + 3) & 0xfe;
      }
    }
  }
  return 0;
}

