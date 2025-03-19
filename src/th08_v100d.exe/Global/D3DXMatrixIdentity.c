
D3DXMATRIX * __fastcall D3DXMatrixIdentity(D3DXMATRIX *pOut)

{
  (pOut->field0_0x0).field0._43 = 0.0;
  (pOut->field0_0x0).field0._42 = 0.0;
  (pOut->field0_0x0).field0._41 = 0.0;
  (pOut->field0_0x0).field0._34 = 0.0;
  (pOut->field0_0x0).field0._32 = 0.0;
  (pOut->field0_0x0).field0._31 = 0.0;
  (pOut->field0_0x0).field0._24 = 0.0;
  (pOut->field0_0x0).field0._23 = 0.0;
  (pOut->field0_0x0).field0._21 = 0.0;
  (pOut->field0_0x0).field0._14 = 0.0;
  (pOut->field0_0x0).field0._13 = 0.0;
  (pOut->field0_0x0).field0._12 = 0.0;
  (pOut->field0_0x0).field0._44 = 1.0;
  (pOut->field0_0x0).field0._33 = 1.0;
  (pOut->field0_0x0).field0._22 = 1.0;
  (pOut->field0_0x0).field0._11 = 1.0;
  return pOut;
}

