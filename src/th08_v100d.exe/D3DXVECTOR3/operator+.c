
D3DXVECTOR3 * __thiscall
D3DXVECTOR3::operator+(D3DXVECTOR3 *this,D3DXVECTOR3 *param_2,D3DXVECTOR3 *param_3)

{
  D3DXVECTOR3(param_2,this->x + param_3->x,this->y + param_3->y,this->z + param_3->z);
  return param_2;
}

