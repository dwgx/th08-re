
float * FUN_0040b470(float param_1)

{
  float *in_ECX;
  
  param_1 = 1.0 / param_1;
  *in_ECX = param_1 * *in_ECX;
  in_ECX[1] = param_1 * in_ECX[1];
  in_ECX[2] = param_1 * in_ECX[2];
  return in_ECX;
}

