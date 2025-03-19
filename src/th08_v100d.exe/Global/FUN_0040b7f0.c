
float * FUN_0040b7f0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *in_ECX;
  float *in_EDX;
  D3DXVECTOR3 local_10;
  
  D3DXVECTOR3::D3DXVECTOR3(&local_10);
  fVar1 = in_EDX[2];
  fVar2 = *param_1;
  fVar3 = *in_EDX;
  fVar4 = param_1[2];
  fVar5 = *in_EDX;
  fVar6 = param_1[1];
  fVar7 = in_EDX[1];
  fVar8 = *param_1;
  *in_ECX = in_EDX[1] * param_1[2] - in_EDX[2] * param_1[1];
  in_ECX[1] = fVar1 * fVar2 - fVar3 * fVar4;
  in_ECX[2] = fVar5 * fVar6 - fVar7 * fVar8;
  return in_ECX;
}

