
undefined4 FUN_00409ce0(int param_1)

{
  int iVar1;
  u8 *puVar2;
  int *in_ECX;
  short *local_14;
  int local_c;
  int local_8;
  
  iVar1 = FUN_0040b900();
  if (iVar1 == 0) {
    puVar2 = th08::FileSystem::OpenFile(param_1,(int *)0x0,0);
    in_ECX[0x1fd] = (int)puVar2;
    if (in_ECX[0x1fd] == 0) {
      th08::GameErrorContext::Log(&th08::g_GameErrorContext,&DAT_004b4348);
      return 0xffffffff;
    }
  }
  in_ECX[0x1ff] = (int)*(short *)in_ECX[0x1fd];
  in_ECX[0x1fe] = (int)*(short *)(in_ECX[0x1fd] + 2);
  in_ECX[0x201] = *(int *)(in_ECX[0x1fd] + 4) + in_ECX[0x1fd];
  in_ECX[0x202] = *(int *)(in_ECX[0x1fd] + 8) + in_ECX[0x1fd];
  in_ECX[0x200] = in_ECX[0x1fd] + 0x490;
  iVar1 = FUN_0040b900();
  if (iVar1 == 0) {
    for (local_c = 0; local_c < in_ECX[0x1ff]; local_c = local_c + 1) {
      *(int *)(in_ECX[0x200] + local_c * 4) = *(int *)(in_ECX[0x200] + local_c * 4) + in_ECX[0x1fd];
    }
  }
  iVar1 = th08::ZunMemory::Alloc(in_ECX[0x1fe] * 0x2a4,&DAT_004b433c);
  *in_ECX = iVar1;
  local_8 = 0;
  for (local_c = 0; local_c < in_ECX[0x1ff]; local_c = local_c + 1) {
    iVar1 = *(int *)(in_ECX[0x200] + local_c * 4);
    *(undefined *)(iVar1 + 3) = 1;
    for (local_14 = (short *)(iVar1 + 0x1c); -1 < *local_14;
        local_14 = (short *)((int)local_14 + (int)local_14[1])) {
      th08::AnmLoaded::ExecuteAnmIdx
                ((AnmLoaded *)in_ECX[0x1fc],(AnmVm *)(local_8 * 0x2a4 + *in_ECX),(int)local_14[2]);
      local_14[3] = (short)local_8;
      local_8 = local_8 + 1;
    }
  }
  if (th08::g_GameManager.currentStage == 2) {
    FUN_004069f0(in_ECX + 0x211,0x21);
  }
  else {
    FUN_004069f0(in_ECX + 0x211,0x21);
  }
  th08::AnmVm::SetInterrupt((AnmVm *)(in_ECX + 0x211),2);
  *(undefined *)(in_ECX + 0x20d) = 0;
  th08::ZunTimer::SetCurrent((ZunTimer *)(in_ECX + 0x20e),0);
  return 0;
}

