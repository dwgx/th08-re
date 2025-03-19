
void __thiscall th08::ZunTimer::SetCurrentImpl(ZunTimer *this,i32 value)

{
  this->m_Current = value;
  this->m_SubFrame = 0.0;
  this->m_Previous = -999;
  return;
}

