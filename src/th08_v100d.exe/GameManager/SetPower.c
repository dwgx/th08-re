
void th08::GameManager::SetPower(int param_1)

{
  GameManager *in_ECX;
  
  in_ECX->m_Globals->m_PlayerPower = (float)param_1;
  UpdateAntiTamper(in_ECX);
  return;
}

