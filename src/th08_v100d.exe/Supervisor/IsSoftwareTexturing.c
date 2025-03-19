
uint __thiscall th08::Supervisor::IsSoftwareTexturing(Supervisor *this)

{
  return (this->m_Cfg).opts >> 8 & 1 | (this->m_Cfg).opts & 1;
}

