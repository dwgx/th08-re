
void __thiscall th08::ChainElem::SetCallback(ChainElem *this,void *callback)

{
  this->m_Callback = callback;
  this->m_AddedCallback = (void *)0x0;
  this->m_DeletedCallback = (void *)0x0;
  return;
}

