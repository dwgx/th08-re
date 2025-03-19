
undefined8 __thiscall th08::GameManager::IsTampered(GameManager *this)

{
  u32 uVar1;
  u32 uVar2;
  u32 uVar3;
  ulonglong uVar4;
  undefined4 local_c;
  
  uVar3 = this->m_Globals->m_Rng8[2] * ((int)this->m_Globals + (700 - (int)this->m_Globals->m_Rng1))
          + this->m_Globals->m_Rng1[2];
  if (this->m_Globals->field46_0xc8 == uVar3) {
    uVar1 = this->m_Globals->m_AntiTamperChecksum;
    uVar2 = this->m_Globals->m_Rng7[3];
    uVar4 = __ftol2((float10)this->m_AntiTamperExpectedValue);
    uVar3 = (u32)(uVar4 >> 0x20);
    if (uVar1 + uVar2 == (int)uVar4) {
      local_c = 0;
      goto LAB_0040bc08;
    }
  }
  local_c = 1;
LAB_0040bc08:
  return CONCAT44(uVar3,local_c);
}

