
void FUN_00406be0(float param_1)

{
  CSound *in_ECX;
  ulonglong uVar1;
  
  in_ECX->m_dwIsFadingOut = 3;
  uVar1 = __ftol2((float10)param_1 * (float10)60.0);
  in_ECX->m_dwCurFadeoutProgress = (i32)uVar1;
  in_ECX->m_dwTotalFadeout = in_ECX->m_dwCurFadeoutProgress;
  th08::CSound::SetVolume(in_ECX,-1000);
  return;
}

