
undefined4 FUN_00409c20(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_0040b900();
  if (iVar1 == 0) {
    th08::AnmManager::ReleaseAnm(4);
  }
  if (*in_ECX != 0) {
    th08::ZunMemory::Free(*in_ECX);
    *in_ECX = 0;
  }
  iVar1 = FUN_0040b900();
  if ((iVar1 == 0) && (in_ECX[0x1fd] != 0)) {
    th08::ZunMemory::Free(in_ECX[0x1fd]);
    in_ECX[0x1fd] = 0;
  }
  return 0;
}

