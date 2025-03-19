
uint __thiscall th08::Supervisor::IsFogDisabled(Supervisor *this)

{
  return (this->m_Cfg).opts >> 10 & 1;
}

