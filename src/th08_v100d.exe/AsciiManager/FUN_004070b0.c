
void __thiscall th08::AsciiManager::FUN_004070b0(AsciiManager *this,uint param_1)

{
  AnmVm::SetInterrupt((AnmVm *)(this + 0x7ec),(i16)param_1);
  AnmVm::SetInterrupt((AnmVm *)(this + 0xa90),(i16)param_1);
  AnmVm::SetInterrupt((AnmVm *)(this + 0xd34),(i16)param_1);
  AnmVm::SetInterrupt((AnmVm *)(this + 0xfd8),(i16)param_1);
  *(uint *)(this + 0x827c) = param_1;
  return;
}

