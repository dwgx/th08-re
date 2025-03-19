
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00407400(void)

{
  float fVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined3 extraout_var;
  uint uVar6;
  int in_ECX;
  AnmVm *pAVar7;
  float *pfVar8;
  float10 fVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  int local_870;
  int local_868;
  int local_864;
  float local_860;
  float local_850;
  D3DXVECTOR3 local_844;
  int local_838;
  float local_834 [20];
  i32 local_7e4;
  f32 local_7e0;
  i32 local_7dc;
  i32 local_790;
  f32 local_78c;
  i32 local_788;
  u8 local_73c;
  D3DCOLOR local_644;
  float local_5fc;
  float local_5f8;
  float local_5f4;
  float local_5f0;
  float local_5ec;
  float local_5e8;
  AnmVm *local_588;
  float local_584 [20];
  i32 local_534;
  f32 local_530;
  i32 local_52c;
  i32 local_4e0;
  f32 local_4dc;
  i32 local_4d8;
  u8 local_48c;
  D3DCOLOR local_394;
  float local_34c;
  float local_348;
  float local_344;
  float local_340;
  float local_33c;
  float local_338;
  AnmVm *local_2d8;
  float local_2d4 [20];
  i32 local_284;
  f32 local_280;
  i32 local_27c;
  i32 local_230;
  f32 local_22c;
  i32 local_228;
  u8 local_1dc;
  D3DCOLOR local_e4;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  AnmVm *local_2c;
  undefined4 local_28;
  D3DXVECTOR3 local_24;
  undefined4 local_18;
  D3DXVECTOR3 local_14;
  i32 *local_8;
  
  D3DXVECTOR3::D3DXVECTOR3(&local_14);
  if ((*(int *)(in_ECX + 0x7f4) == 0) || ((th08::g_GameManager.field451_0x3dbac >> 10 & 1) != 0)) {
    return 1;
  }
  if (th08::g_GameManager.currentStage == 7) {
    if (*(int *)(in_ECX + 0xae8) == 0) {
      D3DXVECTOR3::D3DXVECTOR3(&local_24,0.0,0.0,0.0);
      uVar4 = FUN_00425870(0x40,&local_24,0xc,1,0xffffffff);
      *(undefined4 *)(in_ECX + 0xae8) = uVar4;
      local_18 = *(undefined4 *)(in_ECX + 0xae8);
      FUN_004069f0(local_18,0xb);
    }
    else if (*(int *)(in_ECX + 0x6260) == 1) {
      local_28 = *(undefined4 *)(in_ECX + 0xae8);
      FUN_004069f0(local_28,0xb);
    }
    else if (*(int *)(in_ECX + 0x6260) == 2) {
      local_2c = *(AnmVm **)(in_ECX + 0xae8);
      pAVar7 = local_2c;
      pfVar8 = local_2d4;
      for (iVar5 = 0xa9; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar8 = (pAVar7->prefix).rotation.x;
        pAVar7 = (AnmVm *)&(pAVar7->prefix).rotation.y;
        pfVar8 = pfVar8 + 1;
      }
      FUN_004069f0(local_2c,0xc);
      th08::AnmVm::SetInterrupt(local_2c,2);
      (local_2c->interpData).posFinal.x = local_90;
      (local_2c->interpData).posFinal.y = local_8c;
      (local_2c->interpData).posFinal.z = local_88;
      (local_2c->interpData).posInitial.x = local_9c;
      (local_2c->interpData).posInitial.y = local_98;
      (local_2c->interpData).posInitial.z = local_94;
      (local_2c->prefix).interpCurrentTimes.pos.m_Previous = local_284;
      (local_2c->prefix).interpCurrentTimes.pos.m_SubFrame = local_280;
      (local_2c->prefix).interpCurrentTimes.pos.m_Current = local_27c;
      (local_2c->prefix).interpEndTimes.pos.m_Previous = local_230;
      (local_2c->prefix).interpEndTimes.pos.m_SubFrame = local_22c;
      (local_2c->prefix).interpEndTimes.pos.m_Current = local_228;
      (local_2c->prefix).interpModes.pos = local_1dc;
      (local_2c->prefix).color1 = local_e4;
    }
    else if (*(int *)(in_ECX + 0x6260) == 3) {
      local_2d8 = *(AnmVm **)(in_ECX + 0xae8);
      pAVar7 = local_2d8;
      pfVar8 = local_584;
      for (iVar5 = 0xa9; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar8 = (pAVar7->prefix).rotation.x;
        pAVar7 = (AnmVm *)&(pAVar7->prefix).rotation.y;
        pfVar8 = pfVar8 + 1;
      }
      th08::AnmVm::SetInterrupt(local_2d8,3);
      (local_2d8->interpData).posFinal.x = local_340;
      (local_2d8->interpData).posFinal.y = local_33c;
      (local_2d8->interpData).posFinal.z = local_338;
      (local_2d8->interpData).posInitial.x = local_34c;
      (local_2d8->interpData).posInitial.y = local_348;
      (local_2d8->interpData).posInitial.z = local_344;
      (local_2d8->prefix).interpCurrentTimes.pos.m_Previous = local_534;
      (local_2d8->prefix).interpCurrentTimes.pos.m_SubFrame = local_530;
      (local_2d8->prefix).interpCurrentTimes.pos.m_Current = local_52c;
      (local_2d8->prefix).interpEndTimes.pos.m_Previous = local_4e0;
      (local_2d8->prefix).interpEndTimes.pos.m_SubFrame = local_4dc;
      (local_2d8->prefix).interpEndTimes.pos.m_Current = local_4d8;
      (local_2d8->prefix).interpModes.pos = local_48c;
      (local_2d8->prefix).color1 = local_394;
    }
    else if (*(int *)(in_ECX + 0x6260) == 4) {
      local_588 = *(AnmVm **)(in_ECX + 0xae8);
      pAVar7 = local_588;
      pfVar8 = local_834;
      for (iVar5 = 0xa9; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar8 = (pAVar7->prefix).rotation.x;
        pAVar7 = (AnmVm *)&(pAVar7->prefix).rotation.y;
        pfVar8 = pfVar8 + 1;
      }
      th08::AnmVm::SetInterrupt(local_588,4);
      (local_588->interpData).posFinal.x = local_5f0;
      (local_588->interpData).posFinal.y = local_5ec;
      (local_588->interpData).posFinal.z = local_5e8;
      (local_588->interpData).posInitial.x = local_5fc;
      (local_588->interpData).posInitial.y = local_5f8;
      (local_588->interpData).posInitial.z = local_5f4;
      (local_588->prefix).interpCurrentTimes.pos.m_Previous = local_7e4;
      (local_588->prefix).interpCurrentTimes.pos.m_SubFrame = local_7e0;
      (local_588->prefix).interpCurrentTimes.pos.m_Current = local_7dc;
      (local_588->prefix).interpEndTimes.pos.m_Previous = local_790;
      (local_588->prefix).interpEndTimes.pos.m_SubFrame = local_78c;
      (local_588->prefix).interpEndTimes.pos.m_Current = local_788;
      (local_588->prefix).interpModes.pos = local_73c;
      (local_588->prefix).color1 = local_644;
    }
  }
  if (*(int *)(in_ECX + 0x6260) != 0) {
    local_838 = 0;
    local_8 = *(i32 **)(in_ECX + 0x808);
    *(undefined4 *)(in_ECX + 0x818) = 0;
    for (; ((*(short *)(local_8 + 1) != 0x1f || (*(int *)(in_ECX + 0x6260) != local_8[2])) &&
           (*local_8 != -1)); local_8 = local_8 + 5) {
      local_838 = local_838 + 1;
    }
    if (*local_8 != -1) {
      *(int *)(in_ECX + 0x818) = local_838 + 1;
      th08::ZunTimer::SetCurrent((ZunTimer *)(in_ECX + 0x80c),*local_8);
      *(undefined4 *)(in_ECX + 0x6260) = 0;
    }
  }
LAB_004078bc:
  do {
    local_8 = (i32 *)(*(int *)(in_ECX + 0x818) * 0x14 + *(int *)(in_ECX + 0x808));
    iVar5 = FUN_0040b8e0(*local_8);
    if ((iVar5 == 0) || (*local_8 == -1)) goto LAB_00408264;
    switch(*(undefined2 *)(local_8 + 1)) {
    case 0:
      if (*local_8 == -1) {
        *(i32 *)(in_ECX + 0x6454) = local_8[2];
        *(i32 *)(in_ECX + 0x6458) = local_8[3];
        *(i32 *)(in_ECX + 0x645c) = local_8[4];
        *(undefined4 *)(in_ECX + 0x824) = *(undefined4 *)(in_ECX + 0x6454);
        *(undefined4 *)(in_ECX + 0x828) = *(undefined4 *)(in_ECX + 0x6458);
        *(undefined4 *)(in_ECX + 0x82c) = *(undefined4 *)(in_ECX + 0x645c);
      }
      else {
        local_14.x = (float)local_8[2];
        local_14.y = (float)local_8[3];
        local_14.z = (float)local_8[4];
        *(float *)(in_ECX + 0x824) = local_14.x;
        *(float *)(in_ECX + 0x828) = local_14.y;
        *(float *)(in_ECX + 0x82c) = local_14.z;
        *(float *)(in_ECX + 0x6454) = local_14.x;
        *(float *)(in_ECX + 0x6458) = local_14.y;
        *(float *)(in_ECX + 0x645c) = local_14.z;
        *(i32 *)(in_ECX + 0x6460) = *local_8;
        *(i32 *)(in_ECX + 0x6450) = local_8[5];
        *(i32 *)(in_ECX + 0x6444) = local_8[7];
        *(i32 *)(in_ECX + 0x6448) = local_8[8];
        *(i32 *)(in_ECX + 0x644c) = local_8[9];
      }
      break;
    case 1:
      *(i32 *)(in_ECX + 0xaf4) = local_8[2];
      *(i32 *)(in_ECX + 0xaec) = local_8[3];
      *(i32 *)(in_ECX + 0xaf0) = local_8[4];
      *(undefined4 *)(in_ECX + 0xb04) = *(undefined4 *)(in_ECX + 0xaec);
      *(undefined4 *)(in_ECX + 0xb08) = *(undefined4 *)(in_ECX + 0xaf0);
      *(undefined4 *)(in_ECX + 0xb0c) = *(undefined4 *)(in_ECX + 0xaf4);
      break;
    case 2:
      *(undefined4 *)(in_ECX + 0xaf8) = *(undefined4 *)(in_ECX + 0xaec);
      *(undefined4 *)(in_ECX + 0xafc) = *(undefined4 *)(in_ECX + 0xaf0);
      *(undefined4 *)(in_ECX + 0xb00) = *(undefined4 *)(in_ECX + 0xaf4);
      *(i32 *)(in_ECX + 0xb10) = local_8[2];
      th08::ZunTimer::SetCurrent((ZunTimer *)(in_ECX + 0xb14),0);
      break;
    case 3:
      if (*(int *)(in_ECX + 0x6260) == 0) {
LAB_00408264:
        if (*(int *)(in_ECX + 0x63e0) != 0) {
          FUN_00408d60(in_ECX + 0x6394,in_ECX + 0x62b0,in_ECX + 0x6264,in_ECX + 0x6348,
                       in_ECX + 0x62fc);
        }
        if (*(int *)(in_ECX + 0x63e4) != 0) {
          FUN_00408d60(in_ECX + 0x63a0,in_ECX + 0x62bc,in_ECX + 0x6270,in_ECX + 0x6354,
                       in_ECX + 0x6308);
        }
        if (*(int *)(in_ECX + 0x63e8) != 0) {
          FUN_00408d60(in_ECX + 0x63ac,in_ECX + 0x62c8,in_ECX + 0x627c,in_ECX + 0x6360,
                       in_ECX + 0x6314);
        }
        if (*(int *)(in_ECX + 0x63ec) != 0) {
          bVar3 = th08::ZunTimer::operator<((ZunTimer *)(in_ECX + 0x6418),*(int *)(in_ECX + 0x63ec))
          ;
          if (CONCAT31(extraout_var,bVar3) == 0) {
            th08::ZunTimer::SetCurrent((ZunTimer *)(in_ECX + 0x6418),*(i32 *)(in_ECX + 0x63ec));
            local_850 = 1.0;
            *(undefined4 *)(in_ECX + 0x63ec) = 0;
          }
          else {
            th08::ZunTimer::Tick((ZunTimer *)(in_ECX + 0x6418));
            fVar9 = th08::ZunTimer::AsFramesFloat((ZunTimer *)(in_ECX + 0x6418));
            local_850 = (float)(fVar9 / (float10)*(int *)(in_ECX + 0x63ec));
          }
          switch(*(undefined4 *)(in_ECX + 0x643c)) {
          case 1:
            local_850 = 1.0 - (1.0 - local_850) * (1.0 - local_850);
            break;
          case 2:
            local_850 = 1.0 - local_850;
            local_850 = 1.0 - local_850 * local_850 * local_850;
            break;
          case 3:
            local_850 = 1.0 - local_850;
            local_850 = 1.0 - local_850 * local_850 * local_850 * local_850;
            break;
          case 4:
            local_850 = local_850 * local_850;
            break;
          case 5:
            local_850 = local_850 * local_850 * local_850;
            break;
          case 6:
            local_850 = local_850 * local_850 * local_850 * local_850;
          }
          *(float *)(in_ECX + 0x63dc) =
               (*(float *)(in_ECX + 0x62ac) - *(float *)(in_ECX + 0x62f8)) * local_850 +
               *(float *)(in_ECX + 0x62f8);
        }
        D3DXVec3Normalize(in_ECX + 0x63b8,in_ECX + 0x63a0);
        if (*(char *)(in_ECX + 0x6474) != '\0') {
          cVar2 = *(char *)(in_ECX + 0x6474);
          if (cVar2 == '\x01') {
            fVar9 = th08::ZunTimer::AsFramesFloat((ZunTimer *)(in_ECX + 0x6424));
            fVar9 = (float10)_sinf((float)((fVar9 * (float10)3.141593 + fVar9 * (float10)3.141593) /
                                           (float10)480.0 - (float10)3.141593));
            *(float *)(in_ECX + 0x63d0) = (float)(fVar9 * (float10)40.0);
            th08::ZunTimer::Tick((ZunTimer *)(in_ECX + 0x6424));
            iVar5 = FUN_0040b8e0(0x1e0);
            if (iVar5 != 0) {
              th08::ZunTimer::SetCurrent((ZunTimer *)(in_ECX + 0x6424),0);
            }
          }
          else if (cVar2 == '\x02') {
            fVar9 = th08::ZunTimer::AsFramesFloat((ZunTimer *)(in_ECX + 0x6424));
            fVar1 = (float)((fVar9 * (float10)3.141593 + fVar9 * (float10)3.141593) / (float10)480.0
                           - (float10)3.141593);
            fVar9 = (float10)_sinf(fVar1);
            *(float *)(in_ECX + 0x63d0) = (float)(fVar9 * (float10)70.0);
            fVar9 = (float10)_sinf(fVar1);
            *(float *)(in_ECX + 0x63ac) = (float)(-fVar9 * (float10)0.1);
            th08::ZunTimer::Tick((ZunTimer *)(in_ECX + 0x6424));
            iVar5 = FUN_0040b8e0(0x1e0);
            if (iVar5 != 0) {
              th08::ZunTimer::SetCurrent((ZunTimer *)(in_ECX + 0x6424),0);
            }
          }
          else if (cVar2 == '\x03') {
            fVar9 = th08::ZunTimer::AsFramesFloat((ZunTimer *)(in_ECX + 0x6424));
            fVar1 = (float)((fVar9 * (float10)3.141593 + fVar9 * (float10)3.141593) /
                            (float10)4800.0 - (float10)3.141593);
            fVar9 = (float10)_sinf(fVar1);
            *(float *)(in_ECX + 0x63ac) = (float)(fVar9 * (float10)1.0);
            fVar9 = (float10)_cosf(fVar1);
            *(float *)(in_ECX + 0x63b4) = (float)(fVar9 * (float10)1.0);
            th08::ZunTimer::Tick((ZunTimer *)(in_ECX + 0x6424));
            iVar5 = FUN_0040b8e0(0x12c0);
            if (iVar5 != 0) {
              th08::ZunTimer::SetCurrent((ZunTimer *)(in_ECX + 0x6424),0);
            }
          }
        }
        if (*(int *)(in_ECX + 0xb10) != 0) {
          th08::ZunTimer::Tick((ZunTimer *)(in_ECX + 0xb14));
          fVar9 = th08::ZunTimer::AsFramesFloat((ZunTimer *)(in_ECX + 0xb14));
          local_860 = (float)(fVar9 / (float10)*(int *)(in_ECX + 0xb10));
          if (1.0 <= local_860) {
            local_860 = 1.0;
          }
          for (local_864 = 0; local_864 < 4; local_864 = local_864 + 1) {
            uVar10 = __ftol2(((float10)(uint)*(byte *)(in_ECX + local_864 + 0xb0c) -
                             (float10)(uint)*(byte *)(in_ECX + local_864 + 0xb00)) *
                             (float10)local_860 +
                             (float10)(uint)*(byte *)(in_ECX + local_864 + 0xb00));
            *(char *)(in_ECX + local_864 + 0xaf4) = (char)uVar10;
          }
          *(float *)(in_ECX + 0xaec) =
               (*(float *)(in_ECX + 0xb04) - *(float *)(in_ECX + 0xaf8)) * local_860 +
               *(float *)(in_ECX + 0xaf8);
          *(float *)(in_ECX + 0xaf0) =
               (*(float *)(in_ECX + 0xb08) - *(float *)(in_ECX + 0xafc)) * local_860 +
               *(float *)(in_ECX + 0xafc);
          iVar5 = FUN_0040b8e0(*(undefined4 *)(in_ECX + 0xb10));
          if (iVar5 != 0) {
            *(undefined4 *)(in_ECX + 0xb10) = 0;
          }
        }
        if (*(short *)(local_8 + 1) != 3) {
          th08::ZunTimer::Tick((ZunTimer *)(in_ECX + 0x80c));
        }
        FUN_00409f40();
        if (0 < *(int *)(in_ECX + 0xb24)) {
          if (*(int *)(in_ECX + 0xb28) == 0x3c) {
            *(int *)(in_ECX + 0xb24) = *(int *)(in_ECX + 0xb24) + 1;
          }
          *(int *)(in_ECX + 0xb28) = *(int *)(in_ECX + 0xb28) + 1;
          for (local_868 = 0; local_868 < *(int *)(in_ECX + 0xb30); local_868 = local_868 + 1) {
            th08::AnmManager::ExecuteScript
                      (_g_AnmManager,(AnmVm *)(in_ECX + 0xb38 + local_868 * 0x2a4));
          }
        }
        if (0 < *(short *)(in_ECX + 0x218)) {
          th08::AnmManager::ExecuteScript(_g_AnmManager,(AnmVm *)(in_ECX + 4));
        }
        if (0 < *(short *)(in_ECX + 0x4bc)) {
          th08::AnmManager::ExecuteScript(_g_AnmManager,(AnmVm *)(in_ECX + 0x2a8));
        }
        if (0 < *(short *)(in_ECX + 0x760)) {
          th08::AnmManager::ExecuteScript(_g_AnmManager,(AnmVm *)(in_ECX + 0x54c));
          *(undefined4 *)(in_ECX + 0x830) = *(undefined4 *)(in_ECX + 0x73c);
        }
        if (((*(int *)(in_ECX + 0x81c) % 3 == 0) &&
            ((699 < *(int *)(in_ECX + 0x81c) ||
             (uVar6 = th08::GameManager::GetFlag14(&th08::g_GameManager), uVar6 != 0)))) &&
           (*(int *)(in_ECX + 0xb24) < 2)) {
          for (local_870 = 0; local_870 < 0xc; local_870 = local_870 + 1) {
            iVar5 = FUN_00425430(0x3e,in_ECX + 0x6480 + local_870 * 0xc,1,0x20ffffff);
            *(undefined *)(iVar5 + 0x354) = 4;
          }
        }
        *(undefined4 *)(in_ECX + 0x647c) = 1;
        if (1 < *(int *)(in_ECX + 0xb24)) {
          *(undefined4 *)(in_ECX + 0x6478) = 0;
        }
        *(int *)(in_ECX + 0x81c) = *(int *)(in_ECX + 0x81c) + 1;
        if ((*(int *)(in_ECX + 0x81c) % 500 == 0xfa) &&
           (uVar11 = th08::GameManager::IsTampered(&th08::g_GameManager), (int)uVar11 != 0)) {
          return 4;
        }
        return 1;
      }
      *(undefined4 *)(in_ECX + 0x6260) = 0;
      break;
    case 4:
      goto switchD_00407925_caseD_4;
    case 5:
      if (*(char *)(in_ECX + 0x6464) != '\0') {
        D3DXVECTOR3::operator-
                  ((D3DXVECTOR3 *)(local_8 + 2),&local_844,(D3DXVECTOR3 *)(in_ECX + 0x6264));
        FUN_00426d10();
        *(undefined *)(in_ECX + 0x6464) = 0;
      }
      *(undefined4 *)(in_ECX + 0x62b0) = *(undefined4 *)(in_ECX + 0x6264);
      *(undefined4 *)(in_ECX + 0x62b4) = *(undefined4 *)(in_ECX + 0x6268);
      *(undefined4 *)(in_ECX + 0x62b8) = *(undefined4 *)(in_ECX + 0x626c);
      *(i32 *)(in_ECX + 0x6264) = local_8[2];
      *(i32 *)(in_ECX + 0x6268) = local_8[3];
      *(i32 *)(in_ECX + 0x626c) = local_8[4];
      if (*(int *)(in_ECX + 0x63e0) == 0) {
        *(i32 *)(in_ECX + 0x6394) = local_8[2];
        *(i32 *)(in_ECX + 0x6398) = local_8[3];
        *(i32 *)(in_ECX + 0x639c) = local_8[4];
      }
      break;
    case 6:
      *(i32 *)(in_ECX + 0x63e0) = local_8[2];
      th08::ZunTimer::SetCurrent((ZunTimer *)(in_ECX + 0x63f4),0);
      *(i32 *)(in_ECX + 0x6430) = local_8[3];
      break;
    case 7:
      *(undefined4 *)(in_ECX + 0x62bc) = *(undefined4 *)(in_ECX + 0x6270);
      *(undefined4 *)(in_ECX + 0x62c0) = *(undefined4 *)(in_ECX + 0x6274);
      *(undefined4 *)(in_ECX + 0x62c4) = *(undefined4 *)(in_ECX + 0x6278);
      *(i32 *)(in_ECX + 0x6270) = local_8[2];
      *(i32 *)(in_ECX + 0x6274) = local_8[3];
      *(i32 *)(in_ECX + 0x6278) = local_8[4];
      if (*(int *)(in_ECX + 0x63e4) == 0) {
        *(i32 *)(in_ECX + 0x63a0) = local_8[2];
        *(i32 *)(in_ECX + 0x63a4) = local_8[3];
        *(i32 *)(in_ECX + 0x63a8) = local_8[4];
      }
      break;
    case 8:
      *(i32 *)(in_ECX + 0x63e4) = local_8[2];
      th08::ZunTimer::SetCurrent((ZunTimer *)(in_ECX + 0x6400),0);
      *(i32 *)(in_ECX + 0x6434) = local_8[3];
      break;
    case 9:
      *(undefined4 *)(in_ECX + 0x62c8) = *(undefined4 *)(in_ECX + 0x627c);
      *(undefined4 *)(in_ECX + 0x62cc) = *(undefined4 *)(in_ECX + 0x6280);
      *(undefined4 *)(in_ECX + 0x62d0) = *(undefined4 *)(in_ECX + 0x6284);
      *(i32 *)(in_ECX + 0x627c) = local_8[2];
      *(i32 *)(in_ECX + 0x6280) = local_8[3];
      *(i32 *)(in_ECX + 0x6284) = local_8[4];
      if (*(int *)(in_ECX + 0x63e8) == 0) {
        *(i32 *)(in_ECX + 0x63ac) = local_8[2];
        *(i32 *)(in_ECX + 0x63b0) = local_8[3];
        *(i32 *)(in_ECX + 0x63b4) = local_8[4];
      }
      break;
    case 10:
      *(i32 *)(in_ECX + 0x63e8) = local_8[2];
      *(i32 *)(in_ECX + 0x6438) = local_8[3];
      th08::ZunTimer::SetCurrent((ZunTimer *)(in_ECX + 0x640c),0);
      break;
    case 0xb:
      *(undefined4 *)(in_ECX + 0x62f8) = *(undefined4 *)(in_ECX + 0x62ac);
      *(i32 *)(in_ECX + 0x62ac) = local_8[2];
      if (*(int *)(in_ECX + 0x63ec) == 0) {
        *(i32 *)(in_ECX + 0x63dc) = local_8[2];
      }
      break;
    case 0xc:
      *(i32 *)(in_ECX + 0x63ec) = local_8[2];
      th08::ZunTimer::SetCurrent((ZunTimer *)(in_ECX + 0x6418),0);
      *(i32 *)(in_ECX + 0x643c) = local_8[3];
      break;
    case 0xd:
      *(i32 *)(in_ECX + 0x830) = local_8[2];
      break;
    case 0xe:
      *(i32 *)(in_ECX + 0x62b0) = local_8[2];
      *(i32 *)(in_ECX + 0x62b4) = local_8[3];
      *(i32 *)(in_ECX + 0x62b8) = local_8[4];
      break;
    case 0xf:
      *(i32 *)(in_ECX + 0x6264) = local_8[2];
      *(i32 *)(in_ECX + 0x6268) = local_8[3];
      *(i32 *)(in_ECX + 0x626c) = local_8[4];
      break;
    case 0x10:
      *(i32 *)(in_ECX + 0x6348) = local_8[2];
      *(i32 *)(in_ECX + 0x634c) = local_8[3];
      *(i32 *)(in_ECX + 0x6350) = local_8[4];
      break;
    case 0x11:
      *(i32 *)(in_ECX + 0x62fc) = local_8[2];
      *(i32 *)(in_ECX + 0x6300) = local_8[3];
      *(i32 *)(in_ECX + 0x6304) = local_8[4];
      break;
    case 0x12:
      *(i32 *)(in_ECX + 0x63e0) = local_8[2];
      th08::ZunTimer::SetCurrent((ZunTimer *)(in_ECX + 0x63f4),0);
      *(undefined4 *)(in_ECX + 0x6430) = 7;
      break;
    case 0x13:
      *(i32 *)(in_ECX + 0x62bc) = local_8[2];
      *(i32 *)(in_ECX + 0x62c0) = local_8[3];
      *(i32 *)(in_ECX + 0x62c4) = local_8[4];
      break;
    case 0x14:
      *(i32 *)(in_ECX + 0x6270) = local_8[2];
      *(i32 *)(in_ECX + 0x6274) = local_8[3];
      *(i32 *)(in_ECX + 0x6278) = local_8[4];
      break;
    case 0x15:
      *(i32 *)(in_ECX + 0x6354) = local_8[2];
      *(i32 *)(in_ECX + 0x6358) = local_8[3];
      *(i32 *)(in_ECX + 0x635c) = local_8[4];
      break;
    case 0x16:
      *(i32 *)(in_ECX + 0x6308) = local_8[2];
      *(i32 *)(in_ECX + 0x630c) = local_8[3];
      *(i32 *)(in_ECX + 0x6310) = local_8[4];
      break;
    case 0x17:
      *(i32 *)(in_ECX + 0x63e4) = local_8[2];
      th08::ZunTimer::SetCurrent((ZunTimer *)(in_ECX + 0x6400),0);
      *(undefined4 *)(in_ECX + 0x6434) = 7;
      break;
    case 0x18:
      *(i32 *)(in_ECX + 0x62c8) = local_8[2];
      *(i32 *)(in_ECX + 0x62cc) = local_8[3];
      *(i32 *)(in_ECX + 0x62d0) = local_8[4];
      break;
    case 0x19:
      *(i32 *)(in_ECX + 0x627c) = local_8[2];
      *(i32 *)(in_ECX + 0x6280) = local_8[3];
      *(i32 *)(in_ECX + 0x6284) = local_8[4];
      break;
    case 0x1a:
      *(i32 *)(in_ECX + 0x6360) = local_8[2];
      *(i32 *)(in_ECX + 0x6364) = local_8[3];
      *(i32 *)(in_ECX + 0x6368) = local_8[4];
      break;
    case 0x1b:
      *(i32 *)(in_ECX + 0x6314) = local_8[2];
      *(i32 *)(in_ECX + 0x6318) = local_8[3];
      *(i32 *)(in_ECX + 0x631c) = local_8[4];
      break;
    case 0x1c:
      *(i32 *)(in_ECX + 0x63e8) = local_8[2];
      th08::ZunTimer::SetCurrent((ZunTimer *)(in_ECX + 0x640c),0);
      *(undefined4 *)(in_ECX + 0x6438) = 7;
      break;
    case 0x1d:
      if (local_8[2] < 0) {
        *(undefined2 *)(in_ECX + 0x218) = 0xffff;
      }
      else {
        th08::AnmLoaded::ExecuteAnmIdx
                  (*(AnmLoaded **)(in_ECX + 0x7f0),(AnmVm *)(in_ECX + 4),local_8[2]);
      }
      break;
    case 0x1e:
      if (local_8[2] < 0) {
        *(undefined2 *)(in_ECX + 0x218) = 0xffff;
      }
      else {
        th08::AnmLoaded::ExecuteAnmIdx
                  (*(AnmLoaded **)(in_ECX + 0x7f0),(AnmVm *)(in_ECX + 0x2a8),local_8[2]);
      }
      break;
    case 0x20:
      *(i32 *)(in_ECX + 0x63d0) = local_8[2];
      *(i32 *)(in_ECX + 0x63d4) = local_8[3];
      *(i32 *)(in_ECX + 0x63d8) = local_8[4];
      break;
    case 0x21:
      *(undefined *)(in_ECX + 0x6474) = *(undefined *)(local_8 + 2);
      *(undefined4 *)(in_ECX + 0x63f0) = 0;
      th08::ZunTimer::SetCurrent((ZunTimer *)(in_ECX + 0x6424),0);
      *(undefined4 *)(in_ECX + 0x6440) = 0;
      break;
    case 0x22:
      if (local_8[2] < 0) {
        *(undefined2 *)(in_ECX + 0x760) = 0xffff;
      }
      else {
        th08::AnmLoaded::ExecuteAnmIdx
                  (*(AnmLoaded **)(in_ECX + 0x7f0),(AnmVm *)(in_ECX + 0x54c),local_8[2]);
      }
    }
    *(int *)(in_ECX + 0x818) = *(int *)(in_ECX + 0x818) + 1;
  } while( true );
switchD_00407925_caseD_4:
  *(i32 *)(in_ECX + 0x818) = local_8[2];
  th08::ZunTimer::SetCurrent((ZunTimer *)(in_ECX + 0x80c),local_8[3]);
  *(undefined4 *)(in_ECX + 0x63e0) = 0;
  *(undefined *)(in_ECX + 0x6464) = 1;
  goto LAB_004078bc;
}

