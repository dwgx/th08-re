
void FUN_00409160(uint param_1)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x646b) == '\0') {
    *(uint *)(in_ECX + 0x6468) = param_1;
  }
  else {
    *(char *)(in_ECX + 0x646a) =
         (char)((param_1 >> 0x10 & 0xff) + (uint)*(byte *)(in_ECX + 0x646a) >> 1);
    *(char *)(in_ECX + 0x6469) =
         (char)((param_1 >> 8 & 0xff) + (uint)*(byte *)(in_ECX + 0x6469) >> 1);
    *(char *)(in_ECX + 0x6468) = (char)((param_1 & 0xff) + (uint)*(byte *)(in_ECX + 0x6468) >> 1);
    *(char *)(in_ECX + 0x646b) = (char)((param_1 >> 0x18) + (uint)*(byte *)(in_ECX + 0x646b) >> 1);
  }
  return;
}

