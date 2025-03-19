
void FUN_00406af0(float param_1)

{
  CSound *in_ECX;
  ulonglong uVar1;
  
  in_ECX->m_dwIsFadingOut = 2;
  uVar1 = __ftol2((float10)param_1 * (float10)60.0);
  in_ECX->m_dwCurFadeoutProgress = (i32)uVar1;
  in_ECX->m_dwTotalFadeout = in_ECX->m_dwCurFadeoutProgress;
  th08::CSound::SetVolume(in_ECX,-10000);
  return;
}

