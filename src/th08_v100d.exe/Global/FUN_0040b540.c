
float10 FUN_0040b540(void)

{
  float *in_ECX;
  float *in_EDX;
  
  return (float10)in_ECX[2] * (float10)in_EDX[2] +
         (float10)in_ECX[1] * (float10)in_EDX[1] + (float10)*in_ECX * (float10)*in_EDX;
}

