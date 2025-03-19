
void FUN_00406e20(int param_1)

{
  GameManager *in_ECX;
  
  in_ECX->m_Globals->m_LivesRemaining = (float)param_1;
  th08::GameManager::UpdateAntiTamper(in_ECX);
  return;
}

