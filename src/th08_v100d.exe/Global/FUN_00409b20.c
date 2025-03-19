
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00409b20(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_ECX;
  undefined4 *puVar3;
  undefined4 local_8;
  
  iVar1 = FUN_0040b900();
  if (iVar1 != 0) {
    local_8 = _DAT_004e4824;
  }
  puVar3 = (undefined4 *)&th08::g_Stage;
  for (iVar1 = 0x1980; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  iVar1 = FUN_0040b900();
  if (iVar1 != 0) {
    _DAT_004e4824 = local_8;
  }
  _DAT_004e484c = 0;
  _DAT_004e4850 = in_ECX;
  th08::ChainElem::SetCallback(&ChainElem_004ea650,FUN_00407400);
  ChainElem_004ea650.m_AddedCallback = FUN_00409850;
  ChainElem_004ea650.m_DeletedCallback = FUN_00409c20;
  ChainElem_004ea650.m_Arg = &th08::g_Stage;
  iVar1 = th08::Chain::AddToCalcChain((Chain *)&th08::g_Chain,&ChainElem_004ea650,8);
  if (iVar1 == 0) {
    th08::ChainElem::SetCallback(&ChainElem_004e4010,FUN_00409200);
    ChainElem_004e4010.m_Arg = &th08::g_Stage;
    th08::Chain::AddToDrawChain((Chain *)&th08::g_Chain,&ChainElem_004e4010,6);
    th08::ChainElem::SetCallback(&ChainElem_004ea630,FUN_00409640);
    ChainElem_004ea630.m_Arg = &th08::g_Stage;
    th08::Chain::AddToDrawChain((Chain *)&th08::g_Chain,&ChainElem_004ea630,7);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

