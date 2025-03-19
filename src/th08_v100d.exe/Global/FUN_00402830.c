
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00402830(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = in_ECX;
  for (iVar3 = 0x5c6c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uVar1 = th08::AnmManager::LoadAnm(_g_AnmManager,1,&DAT_004b42b8);
  in_ECX[0x20a2] = uVar1;
  if (in_ECX[0x20a2] == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar1 = th08::AnmManager::LoadAnm(_g_AnmManager,3,&DAT_004b42ac);
    in_ECX[0x20a3] = uVar1;
    if (in_ECX[0x20a3] == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      th08::AsciiManager::FUN_00402450((AsciiManager *)in_ECX);
      th08::AsciiManager::FUN_00402600((AsciiManager *)in_ECX);
      uVar2 = 0;
    }
  }
  return uVar2;
}

