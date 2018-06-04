#include "Escola.h"

Escola Escola::escolas[50];

Escola::Escola()
{
  //ctor
}

Escola::~Escola()
{
  //dtor
}
void Escola::readEscolas(FILE* file)
{
  int ola;
  int arr[2] = {1,2};
  int arr1[2] = {1,2};
  int arr2[2] = {1,1};
  int arr3[2] = {1,2};
  int arr4[2] = {1,2};
  int arr5[2] = {1,1};
  int arr6[2] = {1,1};
  int arr7[2] = {1,1};
  int arr8[2] = {1,2};
  int arr9[2] = {1,2};
  int arr10[2] = {3,2};
  int arr11[2] = {3,2};
  int arr12[2] = {3,2};
  int arr13[2] = {3,2};
  int arr14[2] = {3,1};
  int arr15[2] = {3,1};
  int arr16[2] = {3,1};
  int arr17[2] = {3,1};
  int arr18[2] = {3,2};
  int arr19[2] = {3,2};
  int arr20[2] = {3,2};
  int arr21[2] = {3,1};
  int arr22[2] = {3,2};
  int arr23[2] = {3,1};
  int arr24[2] = {3,2};
  int arr25[2] = {2,1};
  int arr26[2] = {2,2};
  int arr27[2] = {2,1};
  int arr28[2] = {2,2};
  int arr29[2] = {2,2};
  int arr30[2] = {2,2};
  int arr31[2] = {2,2};
  int arr32[2] = {2,2};
  int arr33[2] = {2,2};
  int arr34[2] = {2,1};
  int arr35[2] = {2,1};
  int arr36[2] = {2,1};
  int arr37[2] = {2,1};
  int arr38[2] = {2,1};
  int arr39[2] = {2,1};
  int arr40[2] = {2,2};
  int arr41[2] = {2,2};
  int arr42[2] = {2,2};
  int arr43[2] = {2,2};
  int arr44[2] = {2,2};
  int arr45[2] = {2,2};
  int arr46[2] = {2,2};
  int arr47[2] = {2,2};
  int arr48[2] = {2,1};
  int arr49[2] = {2,1};

  char * line = NULL;
  size_t len = 0;
  ssize_t read;

    Escola::escolas[0].setHabilitacoesPretendidas(arr[0]);
    Escola::escolas[1].setHabilitacoesPretendidas(arr1[0]);
    Escola::escolas[2].setHabilitacoesPretendidas(arr2[0]);
    Escola::escolas[3].setHabilitacoesPretendidas(arr3[0]);
    Escola::escolas[4].setHabilitacoesPretendidas(arr4[0]);
    Escola::escolas[5].setHabilitacoesPretendidas(arr5[0]);
    Escola::escolas[6].setHabilitacoesPretendidas(arr6[0]);
    Escola::escolas[7].setHabilitacoesPretendidas(arr7[0]);
    Escola::escolas[8].setHabilitacoesPretendidas(arr8[0]);
    Escola::escolas[9].setHabilitacoesPretendidas(arr9[0]);
    Escola::escolas[10].setHabilitacoesPretendidas(arr10[0]);
    Escola::escolas[11].setHabilitacoesPretendidas(arr11[0]);
    Escola::escolas[12].setHabilitacoesPretendidas(arr12[0]);
    Escola::escolas[13].setHabilitacoesPretendidas(arr13[0]);
    Escola::escolas[14].setHabilitacoesPretendidas(arr14[0]);
    Escola::escolas[15].setHabilitacoesPretendidas(arr15[0]);
    Escola::escolas[16].setHabilitacoesPretendidas(arr16[0]);
    Escola::escolas[17].setHabilitacoesPretendidas(arr17[0]);
    Escola::escolas[18].setHabilitacoesPretendidas(arr18[0]);
    Escola::escolas[19].setHabilitacoesPretendidas(arr19[0]);
    Escola::escolas[20].setHabilitacoesPretendidas(arr20[0]);
    Escola::escolas[21].setHabilitacoesPretendidas(arr21[0]);
    Escola::escolas[22].setHabilitacoesPretendidas(arr22[0]);
    Escola::escolas[23].setHabilitacoesPretendidas(arr23[0]);
    Escola::escolas[24].setHabilitacoesPretendidas(arr24[0]);
    Escola::escolas[25].setHabilitacoesPretendidas(arr25[0]);
    Escola::escolas[26].setHabilitacoesPretendidas(arr26[0]);
    Escola::escolas[27].setHabilitacoesPretendidas(arr27[0]);
    Escola::escolas[28].setHabilitacoesPretendidas(arr28[0]);
    Escola::escolas[29].setHabilitacoesPretendidas(arr29[0]);
    Escola::escolas[30].setHabilitacoesPretendidas(arr30[0]);
    Escola::escolas[31].setHabilitacoesPretendidas(arr31[0]);
    Escola::escolas[32].setHabilitacoesPretendidas(arr32[0]);
    Escola::escolas[33].setHabilitacoesPretendidas(arr33[0]);
    Escola::escolas[34].setHabilitacoesPretendidas(arr34[0]);
    Escola::escolas[35].setHabilitacoesPretendidas(arr35[0]);
    Escola::escolas[36].setHabilitacoesPretendidas(arr36[0]);
    Escola::escolas[37].setHabilitacoesPretendidas(arr37[0]);
    Escola::escolas[38].setHabilitacoesPretendidas(arr38[0]);
    Escola::escolas[39].setHabilitacoesPretendidas(arr39[0]);
    Escola::escolas[40].setHabilitacoesPretendidas(arr40[0]);
    Escola::escolas[41].setHabilitacoesPretendidas(arr41[0]);
    Escola::escolas[42].setHabilitacoesPretendidas(arr42[0]);
    Escola::escolas[43].setHabilitacoesPretendidas(arr43[0]);
    Escola::escolas[44].setHabilitacoesPretendidas(arr44[0]);
    Escola::escolas[45].setHabilitacoesPretendidas(arr45[0]);
    Escola::escolas[46].setHabilitacoesPretendidas(arr46[0]);
    Escola::escolas[47].setHabilitacoesPretendidas(arr47[0]);
    Escola::escolas[48].setHabilitacoesPretendidas(arr48[0]);
    Escola::escolas[49].setHabilitacoesPretendidas(arr49[0]);

    Escola::escolas[0].setVagas(arr[1]);
    Escola::escolas[1].setVagas(arr1[1]);
    Escola::escolas[2].setVagas(arr2[1]);
    Escola::escolas[3].setVagas(arr3[1]);
    Escola::escolas[4].setVagas(arr4[1]);
    Escola::escolas[5].setVagas(arr5[1]);
    Escola::escolas[6].setVagas(arr6[1]);
    Escola::escolas[7].setVagas(arr7[1]);
    Escola::escolas[8].setVagas(arr8[1]);
    Escola::escolas[9].setVagas(arr9[1]);
    Escola::escolas[10].setVagas(arr10[1]);
    Escola::escolas[11].setVagas(arr11[1]);
    Escola::escolas[12].setVagas(arr12[1]);
    Escola::escolas[13].setVagas(arr13[1]);
    Escola::escolas[14].setVagas(arr14[1]);
    Escola::escolas[15].setVagas(arr15[1]);
    Escola::escolas[16].setVagas(arr16[1]);
    Escola::escolas[17].setVagas(arr17[1]);
    Escola::escolas[18].setVagas(arr18[1]);
    Escola::escolas[19].setVagas(arr19[1]);
    Escola::escolas[20].setVagas(arr20[1]);
    Escola::escolas[21].setVagas(arr21[1]);
    Escola::escolas[22].setVagas(arr22[1]);
    Escola::escolas[23].setVagas(arr23[1]);
    Escola::escolas[24].setVagas(arr24[1]);
    Escola::escolas[25].setVagas(arr25[1]);
    Escola::escolas[26].setVagas(arr26[1]);
    Escola::escolas[27].setVagas(arr27[1]);
    Escola::escolas[28].setVagas(arr28[1]);
    Escola::escolas[29].setVagas(arr29[1]);
    Escola::escolas[30].setVagas(arr30[1]);
    Escola::escolas[31].setVagas(arr31[1]);
    Escola::escolas[32].setVagas(arr32[1]);
    Escola::escolas[33].setVagas(arr33[1]);
    Escola::escolas[34].setVagas(arr34[1]);
    Escola::escolas[35].setVagas(arr35[1]);
    Escola::escolas[36].setVagas(arr36[1]);
    Escola::escolas[37].setVagas(arr37[1]);
    Escola::escolas[38].setVagas(arr38[1]);
    Escola::escolas[39].setVagas(arr39[1]);
    Escola::escolas[40].setVagas(arr40[1]);
    Escola::escolas[41].setVagas(arr41[1]);
    Escola::escolas[42].setVagas(arr42[1]);
    Escola::escolas[43].setVagas(arr43[1]);
    Escola::escolas[44].setVagas(arr44[1]);
    Escola::escolas[45].setVagas(arr45[1]);
    Escola::escolas[46].setVagas(arr46[1]);
    Escola::escolas[47].setVagas(arr47[1]);
    Escola::escolas[48].setVagas(arr48[1]);
    Escola::escolas[49].setVagas(arr49[1]);

    for(ola=0;ola<50;ola++){
      Escola::escolas[ola].setNumeroEscola(ola+1);
    }
}
bool Escola::tudoLacrado()
{
  int i;
  for(i=0;i<50;i++){
    if(!(escolas[i].getLacrou())){
      return false;
    }
  }
  return true;
}
