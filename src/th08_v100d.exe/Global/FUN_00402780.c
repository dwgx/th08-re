
undefined4 FUN_00402780(void)

{
  int iVar1;
  undefined4 uVar2;
  
  th08::ChainElem::SetCallback(&ChainElem_004e3fd0,FUN_00402200);
  ChainElem_004e3fd0.m_AddedCallback = FUN_00402830;
  ChainElem_004e3fd0.m_DeletedCallback = FUN_004028c0;
  ChainElem_004e3fd0.m_Arg = &th08::g_AsciiManager;
  iVar1 = th08::Chain::AddToCalcChain((Chain *)&th08::g_Chain,&ChainElem_004e3fd0,1);
  if (iVar1 == 0) {
    th08::ChainElem::SetCallback(&ChainElem_004cce00,FUN_004023d0);
    ChainElem_004cce00.m_Arg = &th08::g_AsciiManager;
    th08::Chain::AddToDrawChain((Chain *)&th08::g_Chain,&ChainElem_004cce00,0x14);
    th08::ChainElem::SetCallback(&ChainElem_004e3ff0,FUN_00402430);
    ChainElem_004e3ff0.m_Arg = &th08::g_AsciiManager;
    th08::Chain::AddToDrawChain((Chain *)&th08::g_Chain,&ChainElem_004e3ff0,0xe);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

