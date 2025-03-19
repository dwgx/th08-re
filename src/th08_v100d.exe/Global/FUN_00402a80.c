
int FUN_00402a80(AsciiManager *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  char *local_210;
  char local_20c;
  undefined auStack_20b [515];
  undefined *local_8;
  
  local_8 = &stack0x00000010;
  FUN_004a3e17(&local_20c,param_3,local_8);
  th08::AsciiManager::FUN_00402920(param_1,param_2,&local_20c);
  local_210 = &local_20c;
  do {
    cVar1 = *local_210;
    local_210 = local_210 + 1;
  } while (cVar1 != '\0');
  return (int)local_210 - (int)auStack_20b;
}

