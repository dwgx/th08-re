
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
th08::AsciiManager::FUN_00405e10
          (AsciiManager *this,undefined4 *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int local_c;
  
  local_c = 4;
  if ((int)param_2 < 0) {
    local_c = 5;
  }
  iVar1 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  if (iVar1 < 10000) {
    if (iVar1 < 1000) {
      local_c = local_c + 1;
    }
    else {
      local_c = local_c + 2;
    }
  }
  else {
    local_c = local_c + 3;
  }
  *(undefined4 *)(this + 0x1484) = *param_1;
  *(undefined4 *)(this + 0x1488) = param_1[1];
  *(undefined4 *)(this + 0x148c) = param_1[2];
  *(float *)(this + 0x1484) = *(float *)(this + 0x1484) - (((float)local_c * 3.5 - 3.5) - 4.0);
  *(undefined4 *)(this + 0x146c) = param_3;
  if ((int)param_2 < 0) {
    FUN_0045e430(this + 0x127c,0x94);
    AnmManager::DrawNoRotation(_g_AnmManager,(int)(this + 0x127c));
    *(float *)(this + 0x1484) = *(float *)(this + 0x1484) + 7.0;
  }
  if (iVar1 < 10000) {
    if (iVar1 < 1000) {
      FUN_0045e430(this + 0x127c,iVar1 / 100 + 0x88);
      AnmManager::DrawNoRotation(_g_AnmManager,(int)(this + 0x127c));
      *(float *)(this + 0x1484) = *(float *)(this + 0x1484) + 7.0;
      FUN_0045e430(this + 0x127c,0x93);
      AnmManager::DrawNoRotation(_g_AnmManager,(int)(this + 0x127c));
      *(float *)(this + 0x1484) = *(float *)(this + 0x1484) + 5.0;
      *(undefined4 *)(this + 0x1298) = 0x3f4ccccd;
      *(undefined4 *)(this + 0x1294) = 0x3f4ccccd;
      *(float *)(this + 0x1488) = *(float *)(this + 0x1488) + 2.0;
      FUN_0045e430(this + 0x127c,(iVar1 % 100) / 10 + 0x88);
      AnmManager::DrawNoRotation(_g_AnmManager,(int)(this + 0x127c));
      *(float *)(this + 0x1484) = *(float *)(this + 0x1484) + 5.0;
      FUN_0045e430(this + 0x127c,(iVar1 % 100) % 10 + 0x88);
      AnmManager::DrawNoRotation(_g_AnmManager,(int)(this + 0x127c));
      *(float *)(this + 0x1484) = *(float *)(this + 0x1484) + 7.0;
    }
    else {
      FUN_0045e430(this + 0x127c,iVar1 / 1000 + 0x88);
      AnmManager::DrawNoRotation(_g_AnmManager,(int)(this + 0x127c));
      *(float *)(this + 0x1484) = *(float *)(this + 0x1484) + 7.0;
      FUN_0045e430(this + 0x127c,(iVar1 % 1000) / 100 + 0x88);
      iVar1 = (iVar1 % 1000) % 100;
      AnmManager::DrawNoRotation(_g_AnmManager,(int)(this + 0x127c));
      *(float *)(this + 0x1484) = *(float *)(this + 0x1484) + 7.0;
      FUN_0045e430(this + 0x127c,0x93);
      AnmManager::DrawNoRotation(_g_AnmManager,(int)(this + 0x127c));
      *(float *)(this + 0x1484) = *(float *)(this + 0x1484) + 5.0;
      *(undefined4 *)(this + 0x1298) = 0x3f4ccccd;
      *(undefined4 *)(this + 0x1294) = 0x3f4ccccd;
      *(float *)(this + 0x1488) = *(float *)(this + 0x1488) + 2.0;
      FUN_0045e430(this + 0x127c,iVar1 / 10 + 0x88);
      AnmManager::DrawNoRotation(_g_AnmManager,(int)(this + 0x127c));
      *(float *)(this + 0x1484) = *(float *)(this + 0x1484) + 5.0;
      FUN_0045e430(this + 0x127c,iVar1 % 10 + 0x88);
      AnmManager::DrawNoRotation(_g_AnmManager,(int)(this + 0x127c));
      *(float *)(this + 0x1484) = *(float *)(this + 0x1484) + 7.0;
    }
  }
  else {
    FUN_0045e430(this + 0x127c,0x89);
    AnmManager::DrawNoRotation(_g_AnmManager,(int)(this + 0x127c));
    *(float *)(this + 0x1484) = *(float *)(this + 0x1484) + 7.0;
    FUN_0045e430(this + 0x127c,0x88);
    AnmManager::DrawNoRotation(_g_AnmManager,(int)(this + 0x127c));
    *(float *)(this + 0x1484) = *(float *)(this + 0x1484) + 7.0;
    FUN_0045e430(this + 0x127c,0x88);
    AnmManager::DrawNoRotation(_g_AnmManager,(int)(this + 0x127c));
    *(float *)(this + 0x1484) = *(float *)(this + 0x1484) + 7.0;
    FUN_0045e430(this + 0x127c,0x93);
    AnmManager::DrawNoRotation(_g_AnmManager,(int)(this + 0x127c));
    *(float *)(this + 0x1484) = *(float *)(this + 0x1484) + 5.0;
    *(undefined4 *)(this + 0x1298) = 0x3f4ccccd;
    *(undefined4 *)(this + 0x1294) = 0x3f4ccccd;
    *(float *)(this + 0x1488) = *(float *)(this + 0x1488) + 2.0;
    FUN_0045e430(this + 0x127c,0x88);
    AnmManager::DrawNoRotation(_g_AnmManager,(int)(this + 0x127c));
    *(float *)(this + 0x1484) = *(float *)(this + 0x1484) + 5.0;
    FUN_0045e430(this + 0x127c,0x88);
    AnmManager::DrawNoRotation(_g_AnmManager,(int)(this + 0x127c));
    *(float *)(this + 0x1484) = *(float *)(this + 0x1484) + 7.0;
  }
  *(undefined4 *)(this + 0x1298) = 0x3f800000;
  *(undefined4 *)(this + 0x1294) = 0x3f800000;
  *(float *)(this + 0x1488) = *(float *)(this + 0x1488) - 2.0;
  FUN_0045e430(this + 0x127c,0x92);
  AnmManager::DrawNoRotation(_g_AnmManager,(int)(this + 0x127c));
  return;
}

