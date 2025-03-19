
i32 __thiscall th08::ZunTimer::TickImpl(ZunTimer *this)

{
  this->m_Previous = this->m_Current;
  Supervisor::TickTimer(&g_Supervisor,&this->m_Current,&this->m_SubFrame);
  return this->m_Current;
}

