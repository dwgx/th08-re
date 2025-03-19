
void __thiscall th08::AsciiManager::FUN_00402600(AsciiManager *this)

{
  uint uVar1;
  
  FUN_004069f0(this + 0x7ec,5);
  FUN_004069f0(this + 0xd34,7);
  FUN_004069f0(this + 0xa90,6);
  FUN_004069f0(this + 0xfd8,8);
  FUN_004069f0(this + 0x127c,4);
  FUN_004069f0(this + 0x1520,9);
  FUN_004069f0(this + 0x17c4,10);
  FUN_004069f0(this + 0x1a68,10);
  FUN_004069f0(this + 0x1d0c,10);
  FUN_004069f0(this + 0x1fb0,10);
  *(float *)(this + 0xc98) =
       *(float *)(this + 0xc98) -
       ((float)(int)g_GameManager.youkaiGaugeHumanLimit * 56.0) / -10000.0;
  *(float *)(this + 0xf3c) =
       ((float)(int)g_GameManager.youkaiGaugeYoukaiLimit * 56.0) / 10000.0 +
       *(float *)(this + 0xf3c);
  uVar1 = FUN_00407140(this);
  FUN_004070b0(this,uVar1);
  return;
}

