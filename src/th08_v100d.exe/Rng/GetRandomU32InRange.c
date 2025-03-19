
u32 __thiscall th08::Rng::GetRandomU32InRange(Rng *this,u32 range)

{
  u32 uVar1;
  uint local_c;
  
  if (range == 0) {
    local_c = 0;
  }
  else {
    uVar1 = GetRandomU32(this);
    local_c = uVar1 % range;
  }
  return local_c;
}

