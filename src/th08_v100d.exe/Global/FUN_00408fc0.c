
float10 FUN_00408fc0(float param_1,float param_2,float param_3,float param_4,float param_5)

{
  return (float10)((param_5 - 1.0) * param_5 * param_5) * (float10)param_4 +
         (float10)((1.0 - param_5) * (1.0 - param_5) * param_5) * (float10)param_3 +
         (float10)((3.0 - param_5 * 2.0) * param_5 * param_5) * (float10)param_2 +
         (float10)((param_5 * 2.0 + 1.0) * (param_5 - 1.0) * (param_5 - 1.0)) * (float10)param_1;
}

