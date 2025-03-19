
void FUN_00406f30(int param_1)

{
  u32 uVar1;
  GameManager *in_ECX;
  
  in_ECX->m_Globals->m_BombsRemaining = (float)param_1;
  in_ECX->m_Globals->field46_0xc8 = in_ECX->m_Globals->m_Rng1[2];
  uVar1 = th08::GameManager::CalculateChecksum(in_ECX);
  in_ECX->m_Globals->m_AntiTamperChecksum = uVar1;
  in_ECX->m_AntiTamperExpectedValue =
       (float)(in_ECX->m_Globals->m_AntiTamperChecksum + in_ECX->m_Globals->m_Rng7[3]);
  return;
}

