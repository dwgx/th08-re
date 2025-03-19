
void FUN_00406b70(float param_1)

{
  int in_ECX;
  ulonglong uVar1;
  
  *(undefined4 *)(in_ECX + 0x1c) = 4;
  uVar1 = __ftol2((float10)param_1 * (float10)60.0);
  *(int *)(in_ECX + 0x14) = (int)uVar1;
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(in_ECX + 0x14);
  return;
}

