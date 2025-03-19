
void FUN_00408d60(float *param_1,D3DXVECTOR3 *param_2,D3DXVECTOR3 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  bool bVar1;
  undefined3 extraout_var;
  D3DXVECTOR3 *pDVar2;
  D3DXVECTOR3 *this;
  int in_ECX;
  int in_EDX;
  float10 fVar3;
  D3DXVECTOR3 local_2c;
  undefined local_20 [12];
  D3DXVECTOR3 local_14;
  float local_8;
  
  bVar1 = th08::ZunTimer::operator<
                    ((ZunTimer *)(in_ECX + 0x63f4 + in_EDX * 0xc),
                     *(int *)(in_ECX + 0x63e0 + in_EDX * 4));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    th08::ZunTimer::SetCurrent
              ((ZunTimer *)(in_ECX + 0x63f4 + in_EDX * 0xc),*(i32 *)(in_ECX + 0x63e0 + in_EDX * 4));
    local_8 = 1.0;
    *(undefined4 *)(in_ECX + 0x63e0 + in_EDX * 4) = 0;
  }
  else {
    th08::ZunTimer::Tick((ZunTimer *)(in_ECX + 0x63f4 + in_EDX * 0xc));
    fVar3 = th08::ZunTimer::AsFramesFloat((ZunTimer *)(in_ECX + 0x63f4 + in_EDX * 0xc));
    local_8 = (float)(fVar3 / (float10)*(int *)(in_ECX + 0x63e0 + in_EDX * 4));
  }
  switch(*(undefined4 *)(in_ECX + 0x6430 + in_EDX * 4)) {
  case 1:
    local_8 = 1.0 - (1.0 - local_8) * (1.0 - local_8);
    break;
  case 2:
    local_8 = 1.0 - local_8;
    local_8 = 1.0 - local_8 * local_8 * local_8;
    break;
  case 3:
    local_8 = 1.0 - local_8;
    local_8 = 1.0 - local_8 * local_8 * local_8 * local_8;
    break;
  case 4:
    local_8 = local_8 * local_8;
    break;
  case 5:
    local_8 = local_8 * local_8 * local_8;
    break;
  case 6:
    local_8 = local_8 * local_8 * local_8 * local_8;
  }
  if (*(int *)(in_ECX + 0x6430 + in_EDX * 4) == 7) {
    fVar3 = (float10)FUN_00408fc0(param_2->x,param_3->x,*param_4,*param_5,local_8);
    *param_1 = (float)fVar3;
    fVar3 = (float10)FUN_00408fc0(param_2->y,param_3->y,param_4[1],param_5[1],local_8);
    param_1[1] = (float)fVar3;
    fVar3 = (float10)FUN_00408fc0(param_2->z,param_3->z,param_4[2],param_5[2],local_8);
    param_1[2] = (float)fVar3;
  }
  else {
    pDVar2 = D3DXVECTOR3::operator-(param_3,&local_14,param_2);
    *param_1 = pDVar2->x;
    param_1[1] = pDVar2->y;
    param_1[2] = pDVar2->z;
    pDVar2 = &local_2c;
    this = (D3DXVECTOR3 *)FUN_00409120(local_20,local_8);
    pDVar2 = D3DXVECTOR3::operator+(this,pDVar2,param_2);
    *param_1 = pDVar2->x;
    param_1[1] = pDVar2->y;
    param_1[2] = pDVar2->z;
  }
  return;
}

