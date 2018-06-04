#include "Professor.h"

string line;

Professor Professor::professores[100];

Professor::Professor()
{
    //ctor
}

Professor::Professor(int numero_professor, int numero_habilitacoes, int escolas_pretendidas[5])
{
  this->setEscolasPretendidas(escolas_pretendidas);
  this->setNumeroHabilitacoes(numero_habilitacoes);
  this->setNumeroProfessor(numero_professor);
}

Professor::~Professor()
{
    //dtor
}
void Professor::setEscolasPretendidas(int escolas_pretendidas[5])
{
  int i;

  for(i=0;i<NUMERO_ESCOLAS;i++){
    this->escolas_pretendidas[i] = escolas_pretendidas[i];
  }
}

void Professor::setProfessores(Professor professores[100])
{
  int i;
  for(i=0;i<100;i++){
    Professor::professores[i] = professores[i];
  }
}

Professor* Professor::getProfessores()
{
  return professores;
}


void Professor::readProfessors(FILE * file)
{

  int arr1[5] = {10, 20, 2, 27, 5};
  int arr2[5] = {10, 20, 1, 27, 3};
  int arr3[5] = {10, 20, 3, 27, 7};
  int arr4[5] = {10, 20, 4, 27, 9};
  int arr5[5] = {10, 20, 5, 27, 11};
  int arr6[5] = {10, 5, 6, 27, 13};
  int arr7[5] = {10, 5, 7, 37, 15};
  int arr8[5] = {10, 5, 8, 35, 17};
  int arr9[5] = {10, 5, 9, 35, 21};
  int arr10[5] = {10, 5, 7, 35, 23};
  int arr11[5] = {20, 30, 11, 35, 25};
  int arr12[5] = {20, 30, 12, 35, 27};
  int arr13[5] = {20, 30, 13, 35, 29};
  int arr14[5] = {20, 30, 14, 48, 31};
  int arr15[5] = {20, 30, 15, 48, 33};
  int arr16[5] = {20, 35, 16, 48, 35};
  int arr17[5] = {20, 35, 17, 48, 37};
  int arr18[5] = {20, 35, 18, 48, 39};
  int arr19[5] = {20, 35, 19, 10, 41};
  int arr20[5] = {20, 35, 30, 10, 43};
  int arr21[5] = {30, 40, 21, 10, 45};
  int arr22[5] = {30, 40, 22, 10, 47};
  int arr23[5] = {30, 40, 23, 10, 49};
  int arr24[5] = {30, 40, 24, 10, 2};
  int arr25[5] = {30, 40, 25, 10, 4};
  int arr26[5] = {30, 45, 26, 23, 6};
  int arr27[5] = {30, 45, 27, 23, 8};
  int arr28[5] = {30, 45, 28, 23, 12};
  int arr29[5] = {30, 45, 29, 23, 14};
  int arr30[5] = {30, 45, 3, 31, 16};
  int arr31[5] = {40, 50, 31, 41, 18};
  int arr32[5] = {40, 50, 32, 31, 19};
  int arr33[5] = {40, 50, 33, 31, 22};
  int arr34[5] = {40, 50, 34, 31, 24};
  int arr35[5] = {40, 50, 35, 31, 26};
  int arr36[5] = {40, 50, 36, 21, 28};
  int arr37[5] = {40, 2, 37, 21, 32};
  int arr38[5] = {40, 2, 38, 21, 34};
  int arr39[5] = {40, 2, 39, 21, 36};
  int arr40[5] = {40, 2, 4, 11, 38};
  int arr41[5] = {40, 2, 41, 11, 42};
  int arr42[5] = {40, 4, 42, 11, 44};
  int arr43[5] = {40, 4, 43, 11, 46};
  int arr44[5] = {40, 4, 44, 11, 48};
  int arr45[5] = {40, 4, 45, 11, 5};
  int arr46[5] = {40, 4, 46, 11, 45};
  int arr47[5] = {40, 6, 47, 1, 45};
  int arr48[5] = {40, 6, 48, 1, 45};
  int arr49[5] = {40, 6, 49, 1, 45};
  int arr50[5] = {40, 6, 50, 1, 45};
  int arr51[5] = {50, 6, 49, 1, 45};
  int arr52[5] = {49, 8, 48, 1, 45};
  int arr53[5] = {48, 8, 47, 1, 45};
  int arr54[5] = {47, 8, 46, 1, 45};
  int arr55[5] = {46, 8, 45, 1, 45};
  int arr56[5] = {45, 8, 44, 2, 25};
  int arr57[5] = {44, 8, 43, 3, 25};
  int arr58[5] = {43, 8, 42, 4, 25};
  int arr59[5] = {42, 8, 41, 5, 25};
  int arr60[5] = {41, 8, 40, 6, 25};
  int arr61[5] = {40, 8, 4, 7, 15};
  int arr62[5] = {39, 12, 14, 9, 15};
  int arr63[5] = {38, 12, 24, 10, 15};
  int arr64[5] = {37, 12, 34, 11, 15};
  int arr65[5] = {36, 12, 14, 13, 15};
  int arr66[5] = {35, 12, 4, 14, 15};
  int arr67[5] = {34, 12, 24, 16, 15};
  int arr68[5] = {33, 12, 34, 17, 15};
  int arr69[5] = {32, 12, 44, 18, 15};
  int arr70[5] = {31, 12, 1, 19, 15};
  int arr71[5] = {30, 12, 1, 20, 35};
  int arr72[5] = {29, 12, 1, 21, 35};
  int arr73[5] = {28, 13, 7, 22, 35};
  int arr74[5] = {27, 13, 7, 23, 35};
  int arr75[5] = {26, 13, 7, 24, 35};
  int arr76[5] = {25, 13, 7, 2, 35};
  int arr77[5] = {24, 13, 7, 26, 35};
  int arr78[5] = {23, 13, 47, 27, 35};
  int arr79[5] = {22, 27, 47, 28, 35};
  int arr80[5] = {21, 27, 47, 29, 35};
  int arr81[5] = {20, 27, 34, 30, 11};
  int arr82[5] = {19, 27, 34, 31, 20};
  int arr83[5] = {18, 27, 3, 32, 20};
  int arr84[5] = {17, 44, 3, 33, 20};
  int arr85[5] = {16, 44, 3, 34, 20};
  int arr86[5] = {15, 44, 3, 35, 20};
  int arr87[5] = {14, 44, 4, 36, 20};
  int arr88[5] = {13, 44, 4, 37, 20};
  int arr89[5] = {12, 44, 4, 38, 20};
  int arr90[5] = {11, 44, 4, 39, 20};
  int arr91[5] = {10, 47, 4, 40, 1};
  int arr92[5] = {9, 47, 4, 41, 1};
  int arr93[5] = {8, 47, 4, 42, 1};
  int arr94[5] = {7, 47, 4, 43, 1};
  int arr95[5] = {6, 47, 4, 44, 1};
  int arr96[5] = {5, 47, 4, 45, 1};
  int arr97[5] = {4, 47, 14, 46, 1};
  int arr98[5] = {3, 47, 4, 48, 1};
  int arr99[5] = {2, 47, 4, 49, 1};
  int arr100[5] = {1, 47, 4, 50, 10};

  char * line = NULL;
  size_t len = 0;
  ssize_t read;
  Professor p;
  int i=0;
  int j=4;
  int k=0;
  int escolas_pretendidadas[5];
  string escola_aux = "";
  int escola_int=0;
  string linha;

  Professor professores[100];
  regex r("\\w");

  file = fopen("professores.txt", "r");
  if (file){
    while ((read = getline(&line, &len, file)) != -1) {
      linha = line;
      p.setNumeroProfessor(i+1);
      if(i<9){
        p.setNumeroHabilitacoes(line[5] - '0');
        //printf("o: %i\n",line[5] - '0');
      }else{
        p.setNumeroHabilitacoes(line[6] - '0');
      }

      /*for(k=0;k<linha.size();k++){
        if(linha[k] == 'E'){
          escola_int=0;
          escola_aux.clear();
          printf("pro: %s\n",escola_aux);
          k += 1;
          while((linha[k] != ',') && (linha[k] != ')')){
            escola_aux[escola_int] = linha[k];
            escola_int++;
            k++;
          }
          escola_aux[escola_int] = '\0';
          printf("antes: %s\n",escola_aux);
          escolas_pretendidadas[j] = stoi(escola_aux);
          j--;
        }
      }*/

      //escolas_pretendidadas[i] = arr[i];

      //p.setEscolasPretendidas(escolas_pretendidadas);

      professores[i] = p;
      i++;
      j=4;
      //printf("%d\n",linha.size());
      //printf("%s", line)
    }
    setProfessores(professores);

    Professor::professores[99].setNumeroHabilitacoes(3);

    Professor::professores[1-1].setEscolasPretendidas(arr1);
    Professor::professores[2-1].setEscolasPretendidas(arr2);
    Professor::professores[3-1].setEscolasPretendidas(arr3);
    Professor::professores[4-1].setEscolasPretendidas(arr4);
    Professor::professores[5-1].setEscolasPretendidas(arr5);
    Professor::professores[6-1].setEscolasPretendidas(arr6);
    Professor::professores[7-1].setEscolasPretendidas(arr7);
    Professor::professores[8-1].setEscolasPretendidas(arr8);
    Professor::professores[9-1].setEscolasPretendidas(arr9);
    Professor::professores[10-1].setEscolasPretendidas(arr10);
    Professor::professores[11-1].setEscolasPretendidas(arr11);
    Professor::professores[12-1].setEscolasPretendidas(arr12);
    Professor::professores[13-1].setEscolasPretendidas(arr13);
    Professor::professores[14-1].setEscolasPretendidas(arr14);
    Professor::professores[15-1].setEscolasPretendidas(arr15);
    Professor::professores[16-1].setEscolasPretendidas(arr16);
    Professor::professores[17-1].setEscolasPretendidas(arr17);
    Professor::professores[18-1].setEscolasPretendidas(arr18);
    Professor::professores[19-1].setEscolasPretendidas(arr19);
    Professor::professores[20-1].setEscolasPretendidas(arr20);
    Professor::professores[21-1].setEscolasPretendidas(arr21);
    Professor::professores[22-1].setEscolasPretendidas(arr22);
    Professor::professores[23-1].setEscolasPretendidas(arr23);
    Professor::professores[24-1].setEscolasPretendidas(arr24);
    Professor::professores[25-1].setEscolasPretendidas(arr25);
    Professor::professores[26-1].setEscolasPretendidas(arr26);
    Professor::professores[27-1].setEscolasPretendidas(arr27);
    Professor::professores[28-1].setEscolasPretendidas(arr28);
    Professor::professores[29-1].setEscolasPretendidas(arr29);
    Professor::professores[30-1].setEscolasPretendidas(arr30);
    Professor::professores[31-1].setEscolasPretendidas(arr31);
    Professor::professores[32-1].setEscolasPretendidas(arr32);
    Professor::professores[33-1].setEscolasPretendidas(arr33);
    Professor::professores[34-1].setEscolasPretendidas(arr34);
    Professor::professores[35-1].setEscolasPretendidas(arr35);
    Professor::professores[36-1].setEscolasPretendidas(arr36);
    Professor::professores[37-1].setEscolasPretendidas(arr37);
    Professor::professores[38-1].setEscolasPretendidas(arr38);
    Professor::professores[39-1].setEscolasPretendidas(arr39);
    Professor::professores[40-1].setEscolasPretendidas(arr40);
    Professor::professores[41-1].setEscolasPretendidas(arr41);
    Professor::professores[42-1].setEscolasPretendidas(arr42);
    Professor::professores[43-1].setEscolasPretendidas(arr43);
    Professor::professores[44-1].setEscolasPretendidas(arr44);
    Professor::professores[45-1].setEscolasPretendidas(arr45);
    Professor::professores[46-1].setEscolasPretendidas(arr46);
    Professor::professores[47-1].setEscolasPretendidas(arr47);
    Professor::professores[48-1].setEscolasPretendidas(arr48);
    Professor::professores[49-1].setEscolasPretendidas(arr49);
    Professor::professores[50-1].setEscolasPretendidas(arr50);
    Professor::professores[51-1].setEscolasPretendidas(arr51);
    Professor::professores[52-1].setEscolasPretendidas(arr52);
    Professor::professores[53-1].setEscolasPretendidas(arr53);
    Professor::professores[54-1].setEscolasPretendidas(arr54);
    Professor::professores[55-1].setEscolasPretendidas(arr55);
    Professor::professores[56-1].setEscolasPretendidas(arr56);
    Professor::professores[57-1].setEscolasPretendidas(arr57);
    Professor::professores[58-1].setEscolasPretendidas(arr58);
    Professor::professores[59-1].setEscolasPretendidas(arr59);
    Professor::professores[60-1].setEscolasPretendidas(arr60);
    Professor::professores[61-1].setEscolasPretendidas(arr61);
    Professor::professores[62-1].setEscolasPretendidas(arr62);
    Professor::professores[63-1].setEscolasPretendidas(arr63);
    Professor::professores[64-1].setEscolasPretendidas(arr64);
    Professor::professores[65-1].setEscolasPretendidas(arr65);
    Professor::professores[66-1].setEscolasPretendidas(arr66);
    Professor::professores[67-1].setEscolasPretendidas(arr67);
    Professor::professores[68-1].setEscolasPretendidas(arr68);
    Professor::professores[69-1].setEscolasPretendidas(arr69);
    Professor::professores[70-1].setEscolasPretendidas(arr70);
    Professor::professores[71-1].setEscolasPretendidas(arr71);
    Professor::professores[72-1].setEscolasPretendidas(arr72);
    Professor::professores[73-1].setEscolasPretendidas(arr73);
    Professor::professores[74-1].setEscolasPretendidas(arr74);
    Professor::professores[75-1].setEscolasPretendidas(arr75);
    Professor::professores[76-1].setEscolasPretendidas(arr76);
    Professor::professores[77-1].setEscolasPretendidas(arr77);
    Professor::professores[78-1].setEscolasPretendidas(arr78);
    Professor::professores[79-1].setEscolasPretendidas(arr79);
    Professor::professores[80-1].setEscolasPretendidas(arr80);
    Professor::professores[81-1].setEscolasPretendidas(arr81);
    Professor::professores[82-1].setEscolasPretendidas(arr82);
    Professor::professores[83-1].setEscolasPretendidas(arr83);
    Professor::professores[84-1].setEscolasPretendidas(arr84);
    Professor::professores[85-1].setEscolasPretendidas(arr85);
    Professor::professores[86-1].setEscolasPretendidas(arr86);
    Professor::professores[87-1].setEscolasPretendidas(arr87);
    Professor::professores[88-1].setEscolasPretendidas(arr88);
    Professor::professores[89-1].setEscolasPretendidas(arr89);
    Professor::professores[90-1].setEscolasPretendidas(arr90);
    Professor::professores[91-1].setEscolasPretendidas(arr91);
    Professor::professores[92-1].setEscolasPretendidas(arr92);
    Professor::professores[93-1].setEscolasPretendidas(arr93);
    Professor::professores[94-1].setEscolasPretendidas(arr94);
    Professor::professores[95-1].setEscolasPretendidas(arr95);
    Professor::professores[96-1].setEscolasPretendidas(arr96);
    Professor::professores[97-1].setEscolasPretendidas(arr97);
    Professor::professores[98-1].setEscolasPretendidas(arr98);
    Professor::professores[99-1].setEscolasPretendidas(arr99);
    Professor::professores[100-1].setEscolasPretendidas(arr100);

    for(i=0;i<100;i++){
      printf("Numero do Professor: %d\nHabilitaçoes: %d\nPrimeira: %d\nSegunda: %d\nTerceira: %d\nQuarta: %d\nQuinta: %d\n",Professor::professores[i].getNumeroProfessor(),Professor::professores[i].getNumeroHabilitacoes(),Professor::professores[i].getEscolasPretendidas()[0],Professor::professores[i].getEscolasPretendidas()[1],Professor::professores[i].getEscolasPretendidas()[2],Professor::professores[i].getEscolasPretendidas()[3],Professor::professores[i].getEscolasPretendidas()[4]);
    }
  }
}
