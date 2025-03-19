
void __thiscall th08::AnmVm::SetInterrupt(AnmVm *this,i16 value)

{
  (this->prefix).pendingInterrupt = value;
  return;
}

