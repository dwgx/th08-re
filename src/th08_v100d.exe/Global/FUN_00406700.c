
void FUN_00406700(void)

{
  int in_ECX;
  
  *(uint *)(in_ECX + 0x1f8) = *(uint *)(in_ECX + 0x1f8) & 0xfffffffe;
  return;
}

