
void FUN_004069f0(AnmVm *param_1,int param_2)

{
  AnmLoaded *in_ECX;
  
  (param_1->prefix).anmFile = in_ECX;
  param_1->scriptIndex = (i16)param_2;
  th08::AnmLoaded::SetAndExecuteScript
            (in_ECX,param_1,*(AnmRawInstr **)((int)in_ECX->scripts + param_2 * 4));
  return;
}

