
undefined4
FUN_00406a30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x2a252c) < 0) {
    *(undefined4 *)(in_ECX + 0x2a252c) = param_1;
    *(undefined4 *)(in_ECX + 0x2a2530) = param_2;
    *(undefined4 *)(in_ECX + 0x2a2534) = param_3;
    *(undefined4 *)(in_ECX + 0x2a2538) = param_4;
    *(undefined4 *)(in_ECX + 0x2a253c) = param_5;
    *(undefined4 *)(in_ECX + 0x2a2540) = param_6;
    *(undefined4 *)(in_ECX + 0x2a2544) = param_7;
    *(undefined4 *)(in_ECX + 0x2a2548) = param_8;
    *(undefined4 *)(in_ECX + 0x2a254c) = param_9;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

