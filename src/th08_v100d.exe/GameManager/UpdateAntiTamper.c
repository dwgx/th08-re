
void __thiscall th08::GameManager::UpdateAntiTamper(GameManager *this)

{
  u32 uVar1;
  
  uVar1 = Rng::GetRandomU32InRange(&g_Rng,100000);
  this->m_Globals->m_Rng1[2] = uVar1 + 0x198f;
  uVar1 = Rng::GetRandomU32InRange(&g_Rng,100000);
  this->m_Globals->m_Rng7[3] = uVar1 + 0x198f;
  this->m_Globals->field46_0xc8 = this->m_Globals->m_Rng1[2];
  uVar1 = CalculateChecksum(this);
  this->m_Globals->m_AntiTamperChecksum = uVar1;
  this->m_AntiTamperExpectedValue =
       (float)(this->m_Globals->m_AntiTamperChecksum + this->m_Globals->m_Rng7[3]);
  return;
}

