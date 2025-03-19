
void __thiscall
th08::AsciiManager::FUN_00402920(AsciiManager *this,undefined4 *param_1,char *param_2)

{
  AsciiManager *pAVar1;
  AsciiManager AVar2;
  uint uVar3;
  AsciiManager *local_14;
  AsciiManager *local_10;
  
  if (*(int *)(this + 0x8264) < 0x100) {
    pAVar1 = this + *(int *)(this + 0x8264) * 0x60 + 0x2264;
    *(int *)(this + 0x8264) = *(int *)(this + 0x8264) + 1;
    local_10 = (AsciiManager *)param_2;
    local_14 = pAVar1;
    do {
      AVar2 = *local_10;
      *local_14 = AVar2;
      local_10 = local_10 + 1;
      local_14 = local_14 + 1;
    } while (AVar2 != (AsciiManager)0x0);
    *(undefined4 *)(pAVar1 + 0x40) = *param_1;
    *(undefined4 *)(pAVar1 + 0x44) = param_1[1];
    *(undefined4 *)(pAVar1 + 0x48) = param_1[2];
    *(undefined4 *)(pAVar1 + 0x4c) = *(undefined4 *)(this + 0x8268);
    *(undefined4 *)(pAVar1 + 0x50) = *(undefined4 *)(this + 0x826c);
    *(undefined4 *)(pAVar1 + 0x54) = *(undefined4 *)(this + 0x8270);
    *(undefined4 *)(pAVar1 + 0x5c) = *(undefined4 *)(this + 0x8274);
    uVar3 = Supervisor::IsSoftwareTexturing(&g_Supervisor);
    if (uVar3 == 0) {
      *(undefined4 *)(pAVar1 + 0x58) = 0;
    }
    else {
      *(undefined4 *)(pAVar1 + 0x58) = *(undefined4 *)(this + 0x8278);
    }
  }
  return;
}

