
int __thiscall th08::AsciiManager::AsciiManager(AsciiManager *this)

{
  AnmVm::AnmVm((AnmVm *)this);
  AnmVm::AnmVm((AnmVm *)(this + 0x2a4));
  AnmVm::AnmVm((AnmVm *)(this + 0x548));
  AnmVm::AnmVm((AnmVm *)(this + 0x7ec));
  AnmVm::AnmVm((AnmVm *)(this + 0xa90));
  AnmVm::AnmVm((AnmVm *)(this + 0xd34));
  AnmVm::AnmVm((AnmVm *)(this + 0xfd8));
  AnmVm::AnmVm((AnmVm *)(this + 0x127c));
  AnmVm::AnmVm((AnmVm *)(this + 0x1520));
  _eh_vector_constructor_iterator_(this + 0x17c4,0x2a4,4,AnmVm::AnmVm);
  _eh_vector_constructor_iterator_(this + 0x2264,0x60,0x100,FUN_00402130);
  FUN_00402150();
  FUN_00402190();
  AnmVm::AnmVm((AnmVm *)(this + 0xb238));
  _eh_vector_constructor_iterator_(this + 0xb4dc,0x38,0x2d3,FUN_004021d0);
  _eh_vector_constructor_iterator_(this + 0x15304,0x38,0x80,FUN_004021d0);
  AnmVm::AnmVm((AnmVm *)(this + 0x16f0c));
  return (int)this;
}

