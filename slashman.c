#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <fstream>

using namespace std;

void wait ( double seconds )
{
 clock_t endwait;
 endwait = clock () + seconds * CLOCKS_PER_SEC ;
 while (clock() < endwait) {}
}

int ClearScreen()
{//begin ClearScreen
 #ifdef _WIN32
 system("cls");//windows
 #else
 system("clear");//linux
 #endif

 return 0;
}//end ClearScreen

 void display2D( int x, int y, char array[78][16]){
 for(int count1=0; count1<y; count1++){
  for(int count2=0; count2<x; count2++){
   cout<<array[count2][count1];}cout<<endl;}
 return ;}

void clear2D(int x, int y, char array[78][16]){
for(int count1=0; count1<y; count1++){
  for(int count2=0; count2<x; count2++){
   array[count2][count1]=' ';}}}


void foreGround(char array[78][16]){
 
 array[67][0]='|';
 array[68][0]='-';
 array[67][1]='|';
 array[67][2]='|';
 array[68][2]='-';
 array[69][2]='-';
 array[67][3]='|';
 array[67][4]='|';
 array[68][4]='-';
 array[69][4]='-';
 array[70][4]='-';
 array[67][5]='|';
 array[69][5]='|';
 array[67][6]='|';
 array[68][6]='-';
 array[69][6]='-';
 array[70][6]='-';
 array[71][6]='-';
 array[67][7]='|';
 array[71][7]='|';
 array[67][8]='|';
 array[68][8]='-';
 array[69][8]='-';
 array[70][8]='-';
 array[71][8]='-';
 array[72][8]='-';
 array[67][9]='|';
 array[69][9]='|';
 array[67][10]='|';
 array[68][10]='-';
 array[69][10]='-';
 array[70][10]='-';
 array[71][10]='-';
 array[72][10]='-';
 array[67][11]='|';
 array[71][11]='|';
 array[67][12]='|';
 array[68][12]='-';
 array[69][12]='-';
 array[70][12]='-';
 array[71][12]='-';
 array[72][12]='-';
 array[73][12]='-';
 array[67][13]='|';
 array[69][13]='|';
 array[67][14]='//';
 array[68][14]='-';
 array[69][14]='-';
 array[70][14]='-';
 array[71][14]='-';
 array[72][14]='-';
 array[73][14]='-';
 
  array[66][12]='*';
 array[65][14]='\\';
 array[66][13]='|';
 array[66][14]='|';

 
 array[18][12]='*';
 array[10][13]='*';
 array[14][13]='v';
 array[18][13]='|';
 array[10][14]='|';
 array[14][14]='+';
 array[16][14]='v';
 array[17][14]='\\';
 array[18][14]='|';
 array[19][14]='//';
 array[9][15]='\\';
 array[10][15]='|';
 array[11][15]='//';
 array[16][15]='+';


 return;}

void backGround(char array[78][16]){
 array[13][1]='//';
 array[14][1]='\\';
 array[52][1]='*';
 array[54][1]='*';
 array[12][2]='//';
 array[15][2]='\\';
 array[50][2]='*';
 array[55][2]='*';
 array[63][2]='//';
 array[64][2]='\\';
 array[11][3]='//';
 array[12][3]='\\';
 array[13][3]='//';
 array[14][3]='\\';
 array[16][3]='\\';
 array[23][3]='//';
 array[24][3]='\\';
 array[51][3]='*';
 array[52][3]='*';
 array[53][3]='*';
 array[56][3]='*';
 array[62][3]='//';
 array[65][3]='\\';
 array[10][4]='//';
 array[15][4]='\\';
 array[16][4]='//';
 array[17][4]='\\';
 array[22][4]='//';
 array[25][4]='\\';
 array[49][4]='*';
 array[50][4]='*';
 array[52][4]='*';
 array[54][4]='*';
 array[61][4]='//';
 array[62][4]='\\';
 array[63][4]='//';
 array[64][4]='\\';
 array[65][4]='//';
 array[66][4]='\\';
 array[9][5]='//';
 array[18][5]='\\';
 array[21][5]='//';
 array[22][5]='\\';
 array[25][5]='//';
 array[26][5]='\\';
 array[51][5]='*';
 array[52][5]='*';
 array[56][5]='*';
 array[60][5]='//';
 array[67][5]='\\';
 array[8][6]='//';
 array[19][6]='\\';
 array[20][6]='//';
 array[23][6]='\\';
 array[24][6]='//';
 array[27][6]='\\';
 array[50][6]='*';
 array[52][6]='*';
 array[54][6]='*';
 array[59][6]='//';
 array[7][7]='//';
 array[19][7]='//';
 array[28][7]='\\';
 array[50][7]='*';
 array[51][7]='*';
 array[55][7]='*';
 array[58][7]='//';
 array[6][8]='//';
 array[18][8]='//';
 array[29][8]='\\';
 array[46][8]='^';
 array[48][8]='^';
 array[52][8]='|';
 array[54][8]='|';
 array[56][8]='*';
 array[57][8]='//';
 array[2][9]='-';
 array[3][9]='-';
 array[4][9]='-';
 array[5][9]='-';
 array[6][9]='-';
 array[7][9]='-';
 array[8][9]='-';
 array[9][9]='-';
 array[10][9]='-';
 array[11][9]='-';
 array[30][9]='\\';
 array[45][9]='~';
 array[46][9]='\\';
 array[47][9]='!';
 array[48][9]='//';
 array[49][9]='~';
 array[51][9]='-';
 array[52][9]='|';
 array[54][9]='|';
 array[56][9]='-';
 array[57][9]='-';
 array[58][9]='-';
 array[31][10]='\\';
 array[34][10]='*';
 array[42][10]='-';
 array[43][10]='-';
 array[46][10]='//';
 array[47][10]='|';
 array[52][10]='|';
 array[54][10]='|';
 array[28][11]='-';
 array[29][11]='-';
 array[30][11]='-';
 array[31][11]='-';
 array[32][11]='-';
 array[34][11]='|';
 array[36][11]='-';
 array[37][11]='-';
 array[38][11]='-';
 array[39][11]='-';
 array[44][11]='~';
 array[45][11]='C';
 array[46][11]='//';
 array[48][11]='\\';
 array[33][12]='\\';
 array[34][12]='|';
  array[35][12]='//';
 return ;}

 void clear1D(int x, char alpha[]){
  for(int count=0; count<x; count++){
   alpha[count]=' ';}
 return;}

 void display1D(int x, char alpha[]){cout<<setw(20);
  for(int count=0; count<x; count++){
   cout<<alpha[count];}
 return;}

void ticLoser(){
 int const x=78, y=16;
 int f;
  char array[x][y]={' '};
 int slides=39;
 char alpha[34]={' '};

 for(int count=0; count<slides; count++){
  
  //cout<<count<<" of "<<slides<<endl;
  cout<<endl;
  cout<<setw(68)<<"|"<<endl;
  cout<<setw(68)<<"|"<<endl;
  backGround(array);
 if(count==0){f=0;
 array[3+f][1]='|';
 array[4+f][1]='-';
 array[5+f][1]='|';
 array[3+f][2]='|';
 array[5+f][2]='|';
 array[6+f][2]='-';
 array[3+f][4]='/';
 array[4+f][4]='|';
 array[5+f][4]='\\';
 array[2+f][5]='//';
 array[4+f][5]='|';
 array[6+f][5]='\\';
 array[2+f][6]='\\';
 array[4+f][6]='|';
 array[3+f][7]='|';
 array[5+f][7]='\\';
 array[3+f][8]='|';
 array[6+f][8]='\\';
 array[3+f][9]='|';
 array[6+f][9]='//';
 array[3+f][10]='|';
 array[5+f][10]='//';
 array[3+f][11]='|';
 array[6+f][11]='\\';
 array[3+f][12]='-';
 array[4+f][12]='-';}

 if(count==1){f=3;
 array[3+f][1]='|';
 array[4+f][1]='-';
 array[5+f][1]='|';
 array[3+f][2]='|';
 array[5+f][2]='|';
 array[6+f][2]='-';
 array[3+f][4]='/';
 array[4+f][4]='|';
 array[2+f][5]='//';
 array[4+f][5]='|';
 array[2+f][6]='\\';
 array[4+f][6]='|';
 array[3+f][7]='//';
 array[5+f][7]='\\';
 array[2+f][8]='//';
 array[6+f][8]='\\';
 array[1+f][9]='//';
 array[7+f][9]='\\';
 array[0+f][10]='|';
 array[8+f][10]='\\';
 array[9+f][10]='-';
 array[0+f][11]='|';
 array[0+f][12]='-';
 array[1+f][12]='-';
 }

 if(count==2){f=5;
 array[3+f][1]='|';
 array[4+f][1]='-';
 array[5+f][1]='|';
 array[3+f][2]='|';
 array[5+f][2]='|';
 array[6+f][2]='-';
 array[3+f][4]='/';
 array[4+f][4]='|';
 array[6+f][4]='\\';
 array[2+f][5]='//';
 array[4+f][5]='|';
 array[4+f][5]='|';
 array[7+f][5]='\\';
 array[2+f][6]='\\';
 array[4+f][6]='|';
 array[3+f][7]='|';
 array[5+f][7]='|';
 array[3+f][8]='|';
 array[5+f][8]='|';
 array[2+f][9]='//';
 array[5+f][9]='|';
 array[1+f][10]='//';
 array[5+f][10]='|';
 array[1+f][11]='\\';
 array[5+f][11]='|';
 array[5+f][12]='-';
 array[6+f][12]='-';
 }
 
 if(count==3){f=7;
 array[3+f][1]='|';
 array[4+f][1]='-';
 array[5+f][1]='|';
 array[3+f][2]='|';
 array[5+f][2]='|';
 array[6+f][2]='-';
 array[3+f][4]='/';
 array[4+f][4]='|';
 array[2+f][5]='//';
 array[4+f][5]='|';
 array[2+f][6]='\\';
 array[4+f][6]='|';
 array[3+f][7]='|';
 array[5+f][7]='\\';
 array[3+f][8]='|';
 array[6+f][8]='\\';
 array[3+f][9]='|';
 array[7+f][9]='//';
 array[3+f][10]='|';
 array[6+f][10]='//';
 array[3+f][11]='|';
 array[6+f][11]='\\';
 array[4+f][12]='-';
 array[5+f][12]='-';
 array[11][3]=' ';
 array[12][3]=' ';
 }


 if(count==4){f=9;
 array[3+f][1]='|';
 array[4+f][1]='-';
 array[5+f][1]='|';
 array[3+f][2]='|';
 array[5+f][2]='|';
 array[6+f][2]='-';
 array[3+f][4]='/';
 array[4+f][4]='|';
 array[2+f][5]='//';
 array[4+f][5]='|';
 array[2+f][6]='\\';
 array[4+f][6]='|';
 array[3+f][7]='//';
 array[5+f][7]='\\';
 array[2+f][8]='//';
 array[6+f][8]='\\';
 array[1+f][9]='//';
 array[7+f][9]='\\';
 array[0+f][10]='|';
 array[8+f][10]='\\';
 array[9+f][10]='-';
 array[0+f][11]='|';
 array[0+f][12]='-';
 array[1+f][12]='-';
 array[13][3]=' ';
 }

 if(count==5){f=10;
 array[3+f][1]='|';
 array[4+f][1]='-';
 array[5+f][1]='|';
 array[3+f][2]='|';
 array[5+f][2]='|';
 array[6+f][2]='-';
 array[3+f][4]='/';
 array[4+f][4]='|';
 array[6+f][4]='\\';
 array[2+f][5]='//';
 array[4+f][5]='|';
 array[4+f][5]='|';
 array[7+f][5]='\\';
 array[2+f][6]='\\';
 array[4+f][6]='|';
 array[3+f][7]='|';
 array[5+f][7]='|';
 array[3+f][8]='|';
 array[5+f][8]='|';
 array[2+f][9]='//';
 array[5+f][9]='|';
 array[1+f][10]='//';
 array[5+f][10]='|';
 array[1+f][11]='\\';
 array[5+f][11]='|';
 array[5+f][12]='-';
 array[6+f][12]='-';
 array[14][3]=' ';
 }
 
 if(count==6){f=11;
 array[3+f][1]='|';
 array[4+f][1]='-';
 array[5+f][1]='|';
 array[3+f][2]='|';
 array[5+f][2]='|';
 array[6+f][2]='-';
 array[3+f][4]='/';
 array[4+f][4]='|';
 array[2+f][5]='//';
 array[4+f][5]='|';
 array[2+f][6]='\\';
 array[4+f][6]='|';
 array[3+f][7]='|';
 array[5+f][7]='\\';
 array[3+f][8]='|';
 array[6+f][8]='\\';
 array[3+f][9]='|';
 array[7+f][9]='//';
 array[3+f][10]='|';
 array[6+f][10]='//';
 array[3+f][11]='|';
 array[6+f][11]='\\';
 array[4+f][12]='-';
 array[5+f][12]='-';
 array[15][2]=' ';
 }

 if(count==7){f=11;
 array[4+f][1]='|';
 array[5+f][1]='-';
 array[6+f][1]='|';
 array[4+f][2]='|';
 array[5+f][2]='v';
 array[6+f][2]='|';
 array[4+f][4]='/';
 array[5+f][4]='|';
 array[6+f][4]='\\';
 array[3+f][5]='//';
 array[5+f][5]='|';
 array[7+f][5]='\\';
 array[4+f][6]='\\';
 array[5+f][6]='|';
 array[6+f][6]='//';
 array[4+f][7]='|';
 array[6+f][7]='|';
 array[4+f][8]='|';
 array[6+f][8]='|';
 array[4+f][9]='|';
 array[6+f][9]='|';
 array[4+f][10]='|';
 array[6+f][10]='|';
 array[4+f][11]='|';
 array[6+f][11]='|';
 array[3+f][12]='-';
 array[4+f][12]='-';
 array[6+f][12]='-';
 array[7+f][12]='-';
 array[16][3]=' ';
 }

  if(count==8){f=11;
 array[4+f][1]='|';
 array[5+f][1]='-';
 array[6+f][1]='|';
 array[4+f][2]='|';
 array[5+f][2]='v';
 array[6+f][2]='|';
 array[4+f][4]='/';
 array[5+f][4]='|';
 array[6+f][4]='\\';
 array[3+f][5]='//';
 array[5+f][5]='|';
 array[7+f][5]='\\';
 array[4+f][6]='\\';
 array[5+f][6]='|';
 array[6+f][6]='//';
 array[4+f][7]='|';
 array[6+f][7]='|';
 array[4+f][8]='|';
 array[6+f][8]='|';
 array[4+f][9]='|';
 array[6+f][9]='|';
 array[4+f][10]='|';
 array[6+f][10]='|';
 array[4+f][11]='|';
 array[6+f][11]='|';
 array[3+f][12]='-';
 array[4+f][12]='-';
 array[6+f][12]='-';
 array[7+f][12]='-';
 array[16][3]=' ';
 }
 if(count==9){f=11;
 array[4+f][1]='|';
 array[5+f][1]='-';
 array[6+f][1]='|';
 array[4+f][2]='|';
 array[7+f][2]='-';
 array[6+f][2]='|';
 array[5+f][4]='|';
 array[5+f][5]='|';
 array[6+f][5]='-';
 array[7+f][5]='-';
 array[8+f][5]='-';
 array[5+f][6]='|';
 array[4+f][7]='|';
 array[6+f][7]='|';
 array[4+f][8]='|';
 array[6+f][8]='|';
 array[4+f][9]='|';
 array[6+f][9]='|';
 array[4+f][10]='|';
 array[6+f][10]='|';
 array[4+f][11]='|';
 array[6+f][11]='|';
 array[3+f][12]='-';
 array[4+f][12]='-';
 array[6+f][12]='-';
 array[7+f][12]='-';
 }
 
 if(count==10){f=11;
 array[4+f][2]='|';
 array[5+f][2]='-';
 array[6+f][2]='|';
 array[4+f][3]='|';
 array[7+f][3]='-';
 array[6+f][3]='|';
 array[5+f][5]='|';
 array[4+f][6]='//';
 array[5+f][6]='-';
 array[6+f][6]='-';
 array[7+f][6]='-';
 array[4+f][7]='\\';
 array[4+f][8]='\\';
 array[6+f][8]='\\';
 array[5+f][9]='\\';
 array[7+f][9]='\\';
 array[5+f][10]='//';
 array[7+f][10]='//';
 array[4+f][11]='//';
 array[6+f][11]='//';
 array[3+f][12]='//';
 array[4+f][12]='-';
 array[6+f][12]='-';
 array[5+f][12]='//';
 array[16][3]=' ';
 array[16][4]=' ';

 }

  if(count==11){f=11;
 array[4+f][1]='|';
 array[5+f][1]='-';
 array[6+f][1]='|';
 array[4+f][2]='|';
 array[7+f][2]='-';
 array[6+f][2]='|';
 array[5+f][4]='|';
 array[5+f][5]='|';
 array[6+f][5]='-';
 array[7+f][5]='-';
 array[8+f][5]='-';
 array[5+f][6]='|';
 array[4+f][7]='|';
 array[6+f][7]='|';
 array[4+f][8]='|';
 array[6+f][8]='|';
 array[4+f][9]='|';
 array[6+f][9]='|';
 array[4+f][10]='|';
 array[6+f][10]='|';
 array[4+f][11]='|';
 array[6+f][11]='|';
 array[3+f][12]='-';
 array[4+f][12]='-';
 array[6+f][12]='-';
 array[7+f][12]='-';
 array[16][3]=' ';
 }

 if(count==12){f=11;
 array[4+f][2]='|';
 array[5+f][2]='-';
 array[6+f][2]='|';
 array[4+f][3]='|';
 array[7+f][3]='-';
 array[6+f][3]='|';
 array[5+f][5]='|';
 array[4+f][6]='//';
 array[5+f][6]='-';
 array[6+f][6]='-';
 array[7+f][6]='-';
 array[4+f][7]='\\';
 array[4+f][8]='\\';
 array[6+f][8]='\\';
 array[5+f][9]='\\';
 array[7+f][9]='\\';
 array[5+f][10]='//';
 array[7+f][10]='//';
 array[4+f][11]='//';
 array[6+f][11]='//';
 array[3+f][12]='//';
 array[4+f][12]='-';
 array[6+f][12]='-';
 array[5+f][12]='//';
 array[16][3]=' ';
 array[16][4]=' ';
 }
 
 if(count==13){f=11;
 array[4+f][1]='|';
 array[5+f][1]='-';
 array[6+f][1]='|';
 array[4+f][2]='|';
 array[7+f][2]='-';
 array[6+f][2]='|';
 array[5+f][4]='|';
 array[5+f][5]='|';
 array[6+f][5]='-';
 array[7+f][5]='-';
 array[8+f][5]='-';
 array[5+f][6]='|';
 array[4+f][7]='|';
 array[6+f][7]='|';
 array[4+f][8]='|';
 array[6+f][8]='|';
 array[4+f][9]='|';
 array[6+f][9]='|';
 array[4+f][10]='|';
 array[6+f][10]='|';
 array[4+f][11]='|';
 array[6+f][11]='|';
 array[3+f][12]='-';
 array[4+f][12]='-';
 array[6+f][12]='-';
 array[7+f][12]='-';
 array[16][3]=' ';
 }

  if(count==14){f=11;
 array[4+f][1]='|';
 array[5+f][1]='-';
 array[6+f][1]='|';
 array[4+f][2]='|';
 array[5+f][2]='v';
 array[6+f][2]='|';
 array[8+f][2]='//';
 array[7+f][3]='//';
 array[5+f][4]='|';
 array[5+f][4]='//';
 array[4+f][5]='//';
 array[5+f][5]='|';
 array[3+f][6]='//';
 array[5+f][6]='|';
 array[3+f][7]='\\';
 array[4+f][7]='|';
 array[6+f][7]='|';
 array[4+f][8]='|';
 array[6+f][8]='|';
 array[4+f][9]='|';
 array[6+f][9]='|';
 array[4+f][10]='|';
 array[6+f][10]='|';
 array[4+f][11]='|';
 array[6+f][11]='|';
 array[3+f][12]='-';
 array[4+f][12]='-';
 array[6+f][12]='-';
 array[7+f][12]='-';
 array[16][3]=' ';
 array[16][4]=' ';
 }

  if(count==15){f=11;
 array[4+f][1]='|';
 array[5+f][1]='-';
 array[6+f][1]='|';
 array[4+f][2]='|';
 array[5+f][2]='v';
 array[6+f][2]='|';
 array[8+f][2]='//';
 array[7+f][3]='//';
 array[5+f][4]='|';
 array[5+f][4]='//';
 array[4+f][5]='//';
 array[5+f][5]='|';
 array[3+f][6]='//';
 array[5+f][6]='|';
 array[3+f][7]='\\';
 array[4+f][7]='|';
 array[6+f][7]='|';
 array[4+f][8]='|';
 array[6+f][8]='|';
 array[4+f][9]='|';
 array[6+f][9]='|';
 array[4+f][10]='|';
 array[6+f][10]='|';
 array[4+f][11]='|';
 array[6+f][11]='|';
 array[3+f][12]='-';
 array[4+f][12]='-';
 array[6+f][12]='-';
 array[7+f][12]='-';
 array[16][3]=' ';
 array[16][4]=' ';
 }
 
  if(count==16){f=11;
 array[4+f][1]='|';
 array[5+f][1]='-';
 array[6+f][1]='|';
 array[4+f][2]='|';
 array[5+f][2]='v';
 array[6+f][2]='|';
 array[5+f][4]='|';
 array[4+f][5]='//';
 array[5+f][5]='|';
 array[3+f][6]='//';
 array[4+f][6]='//';
 array[5+f][6]='|';
 array[3+f][7]='X';
 array[4+f][7]='|';
 array[6+f][7]='|';
 array[2+f][8]='//';
 array[4+f][8]='|';
 array[6+f][8]='|';
 array[4+f][9]='|';
 array[6+f][9]='|';
 array[4+f][10]='|';
 array[6+f][10]='|';
 array[4+f][11]='|';
 array[6+f][11]='|';
 array[3+f][12]='-';
 array[4+f][12]='-';
 array[6+f][12]='-';
 array[7+f][12]='-';
 array[16][3]=' ';
 }

  if(count==17){f=11;
 array[4+f][1]='|';
 array[5+f][1]='-';
 array[6+f][1]='|';
 array[4+f][2]='|';
 array[5+f][2]='v';
 array[6+f][2]='|';
 array[8+f][2]='//';
 array[7+f][3]='//';
 array[5+f][4]='|';
 array[5+f][4]='//';
 array[4+f][5]='//';
 array[5+f][5]='|';
 array[3+f][6]='//';
 array[5+f][6]='|';
 array[3+f][7]='\\';
 array[4+f][7]='|';
 array[6+f][7]='|';
 array[4+f][8]='|';
 array[6+f][8]='|';
 array[4+f][9]='|';
 array[6+f][9]='|';
 array[4+f][10]='|';
 array[6+f][10]='|';
 array[4+f][11]='|';
 array[6+f][11]='|';
 array[3+f][12]='-';
 array[4+f][12]='-';
 array[6+f][12]='-';
 array[7+f][12]='-';
 array[16][3]=' ';
 array[17][4]=' ';
 }

 if(count==18){f=11;
 array[4+f][1]='|';
 array[5+f][1]='-';
 array[6+f][1]='|';
 array[4+f][2]='|';
 array[3+f][2]='-';
 array[6+f][2]='|';
 array[5+f][4]='|';
 array[5+f][5]='|';
 array[3+f][5]='-';
 array[4+f][5]='-';
 array[2+f][5]='-';
 array[5+f][6]='|';
 array[4+f][7]='|';
 array[6+f][7]='|';
 array[4+f][8]='|';
 array[6+f][8]='|';
 array[4+f][9]='|';
 array[6+f][9]='|';
 array[4+f][10]='|';
 array[6+f][10]='|';
 array[4+f][11]='|';
 array[6+f][11]='|';
 array[3+f][12]='-';
 array[4+f][12]='-';
 array[6+f][12]='-';
 array[7+f][12]='-';
 array[16][3]=' ';
 }
 
if(count==19){f=11;
 array[4+f][2]='|';
 array[5+f][2]='-';
 array[6+f][2]='|';
 array[4+f][3]='|';
 array[3+f][3]='-';
 array[6+f][3]='|';
 array[5+f][5]='|';
 array[5+f][6]='-';
 array[3+f][6]='-';
 array[4+f][6]='-';
 array[2+f][6]='-';
 array[6+f][6]='\\';
 array[6+f][7]='//';
 array[4+f][8]='//';
 array[6+f][8]='//';
 array[3+f][9]='//';
 array[5+f][9]='//';
 array[3+f][10]='\\';
 array[5+f][10]='\\';
 array[4+f][11]='\\';
 array[6+f][11]='\\';
 array[7+f][12]='\\';
 array[5+f][12]='\\';
 array[4+f][12]='-';
 array[6+f][12]='-';
 array[16][3]=' ';
 array[16][4]=' ';
 }

 if(count==20){f=11;
 array[4+f][1]='|';
 array[5+f][1]='-';
 array[6+f][1]='|';
 array[4+f][2]='|';
 array[3+f][2]='-';
 array[6+f][2]='|';
 array[5+f][4]='|';
 array[5+f][5]='|';
 array[3+f][5]='-';
 array[4+f][5]='-';
 array[2+f][5]='-';
 array[5+f][6]='|';
 array[4+f][7]='|';
 array[6+f][7]='|';
 array[4+f][8]='|';
 array[6+f][8]='|';
 array[4+f][9]='|';
 array[6+f][9]='|';
 array[4+f][10]='|';
 array[6+f][10]='|';
 array[4+f][11]='|';
 array[6+f][11]='|';
 array[3+f][12]='-';
 array[4+f][12]='-';
 array[6+f][12]='-';
 array[7+f][12]='-';
 array[16][3]=' ';
 }
 
 if(count==21){f=11;
 array[4+f][2]='|';
 array[5+f][2]='-';
 array[6+f][2]='|';
 array[4+f][3]='|';
 array[3+f][3]='-';
 array[6+f][3]='|';
 array[5+f][5]='|';
 array[5+f][6]='-';
 array[3+f][6]='-';
 array[4+f][6]='-';
 array[2+f][6]='-';
 array[6+f][6]='\\';
 array[6+f][7]='//';
 array[4+f][8]='//';
 array[6+f][8]='//';
 array[3+f][9]='//';
 array[5+f][9]='//';
 array[3+f][10]='\\';
 array[5+f][10]='\\';
 array[4+f][11]='\\';
 array[6+f][11]='\\';
 array[7+f][12]='\\';
 array[5+f][12]='\\';
 array[4+f][12]='-';
 array[6+f][12]='-';
 array[16][3]=' ';
 array[16][4]=' ';
 }

  if(count==22){f=11;
 array[4+f][1]='|';
 array[5+f][1]='-';
 array[6+f][1]='|';
 array[4+f][2]='|';
 array[3+f][2]='-';
 array[6+f][2]='|';
 array[5+f][4]='|';
 array[5+f][5]='|';
 array[3+f][5]='-';
 array[4+f][5]='-';
 array[2+f][5]='-';
 array[5+f][6]='|';
 array[4+f][7]='|';
 array[6+f][7]='|';
 array[4+f][8]='|';
 array[6+f][8]='|';
 array[4+f][9]='|';
 array[6+f][9]='|';
 array[4+f][10]='|';
 array[6+f][10]='|';
 array[4+f][11]='|';
 array[6+f][11]='|';
 array[3+f][12]='-';
 array[4+f][12]='-';
 array[6+f][12]='-';
 array[7+f][12]='-';
 array[16][3]=' ';
 }

 if(count==23){f=11;
 array[1+f][1]='\\';
 array[4+f][1]='|';
 array[5+f][1]='-';
 array[6+f][1]='|';
 array[9+f][1]='//';
 array[2+f][2]='\\';
 array[4+f][2]='|';
 array[5+f][2]='v';
 array[6+f][2]='|';
 array[8+f][2]='//';
 array[3+f][3]='\\';
 array[7+f][3]='//';
 array[4+f][4]='\\';
 array[5+f][4]='|';
 array[6+f][4]='//';
 array[5+f][5]='|';
 array[5+f][6]='|';
 array[4+f][7]='|';
 array[6+f][7]='|';
 array[4+f][8]='|';
 array[6+f][8]='|';
 array[4+f][9]='|';
 array[6+f][9]='|';
 array[4+f][10]='|';
 array[6+f][10]='|';
 array[4+f][11]='|';
 array[6+f][11]='|';
 array[3+f][12]='-';
 array[4+f][12]='-';
 array[6+f][12]='-';
 array[7+f][12]='-';
 array[16][3]=' ';
 }

 if(count==24){f=12;
 array[1+f][1]='//';
 array[13+f][1]='//';
 array[1+f][2]='\\';
 array[12+f][2]='//';
 array[2+f][3]='\\';
 array[10+f][3]='//';
 array[3+f][4]='\\';
 array[9+f][4]='//';
 array[4+f][5]='\\';
 array[8+f][5]='//';
 array[10+f][5]='-';
 array[11+f][5]='-';
 array[5+f][6]='-';
 array[6+f][6]='-';
 array[7+f][6]='-';
 array[11+f][6]='|';
 array[5+f][7]='|';
 array[9+f][7]='\\';
 array[11+f][7]='-';
 array[5+f][8]='|';
 array[10+f][8]='\\';
 array[11+f][9]='\\';
 array[5+f][9]='|';
 array[5+f][10]='|';
 array[12+f][10]='\\';
 array[5+f][11]='|';
 array[13+f][11]='\\';
 array[5+f][12]='-';
 array[6+f][12]='-';
 }

  if(count==25){f=12;
 array[4+f][1]='//';
 array[5+f][1]='\\';
 array[14+f][1]='//';
 array[15+f][1]='\\';
 array[6+f][2]='\\';
 array[13+f][2]='//';
 array[7+f][3]='\\';
 array[12+f][3]='//';
 array[8+f][4]='\\';
 array[11+f][4]='//';
 array[11+f][5]='\\';
 array[12+f][6]='\\';
 array[12+f][7]='|';
 array[14+f][7]='\\';
 array[11+f][8]='|';
 array[12+f][8]='|';
 array[13+f][8]='-';
 array[14+f][8]='|';
 array[15+f][8]='\\';
 array[11+f][9]='|';
 array[16+f][9]='\\';
 array[11+f][10]='|';
 array[17+f][10]='\\';
 array[11+f][11]='|';
 array[18+f][11]='\\';
 array[19+f][11]='\\';
 array[10+f][12]='-';
 array[11+f][12]='-';
 }

 if(count==26){f=23;
 array[2+f][0]='-';
 array[3+f][0]='\\';
 array[11+f][0]='//';
 array[12+f][0]='-';
 array[10+f][1]='//';
 array[4+f][1]='\\';
 array[5+f][2]='\\';
 array[9+f][2]='//';
 array[6+f][3]='\\';
 array[8+f][3]='//';
 array[7+f][4]='|';
 array[7+f][5]='|';
 array[7+f][6]='|';
 array[6+f][8]='//';
 array[8+f][8]='\\';
 array[5+f][9]='//';
 array[6+f][9]='|';
 array[7+f][9]='-';
 array[8+f][9]='|';
 array[9+f][9]='\\';
 array[4+f][10]='//';
 array[10+f][10]='\\';
 array[2+f][12]='-';
 array[3+f][11]='//';
 array[11+f][11]='\\';
 array[12+f][12]='-';
 array[13+f][12]='-';
 array[1+f][12]='-';
 }

  if(count==27){f=27;
 array[1+f][1]='\\';
 array[2+f][2]='\\';
 array[3+f][3]='\\';
 array[4+f][4]='\\';
 array[15+f][4]='|';
 array[2+f][5]='-';
 array[3+f][5]='-';
 array[10+f][5]='-';
 array[11+f][5]='-';
 array[12+f][5]='-';
 array[13+f][5]='-';
 array[14+f][5]='-';
 array[2+f][6]='|';
 array[6+f][6]='-';
 array[7+f][6]='-';
 array[8+f][6]='-';
 array[2+f][7]='-';
 array[3+f][7]='-';
 array[9+f][7]='\\';
 array[4+f][8]='|';
 array[10+f][8]='\\';
 array[4+f][9]='|';
 array[11+f][9]='\\';
 array[4+f][10]='|';
 array[12+f][10]='\\';
 array[4+f][11]='|';
 array[13+f][11]='|';
 array[3+f][12]='-';
 }

if(count==28){f=34;
 array[1+f][1]='\\';
 array[4+f][1]='|';
 array[5+f][1]='-';
 array[6+f][1]='|';
 array[9+f][1]='//';
 array[2+f][2]='\\';
 array[4+f][2]='|';
 array[5+f][2]='v';
 array[6+f][2]='|';
 array[8+f][2]='//';
 array[3+f][3]='\\';
 array[7+f][3]='//';
 array[4+f][4]='\\';
 array[5+f][4]='|';
 array[6+f][4]='//';
 array[5+f][5]='|';
 array[5+f][6]='|';
 array[4+f][7]='|';
 array[6+f][7]='|';
 array[4+f][8]='|';
 array[6+f][8]='|';
 array[4+f][9]='|';
 array[6+f][9]='|';
 array[4+f][10]='|';
 array[6+f][10]='|';
 array[4+f][11]='|';
 array[6+f][11]='|';
 array[3+f][12]='-';
 array[4+f][12]='-';
 array[6+f][12]='-';
 array[7+f][12]='-';
 }

if(count==29){f=33;
 array[1+f][1]='//';
 array[13+f][1]='//';
 array[1+f][2]='\\';
 array[12+f][2]='//';
 array[2+f][3]='\\';
 array[10+f][3]='//';
 array[3+f][4]='\\';
 array[9+f][4]='//';
 array[4+f][5]='\\';
 array[8+f][5]='//';
 array[10+f][5]='-';
 array[11+f][5]='-';
 array[5+f][6]='-';
 array[6+f][6]='-';
 array[7+f][6]='-';
 array[11+f][6]='|';
 array[5+f][7]='|';
 array[9+f][7]='\\';
 array[11+f][7]='-';
 array[5+f][8]='|';
 array[10+f][8]='\\';
 array[11+f][9]='\\';
 array[5+f][9]='|';
 array[5+f][10]='|';
 array[12+f][10]='\\';
 array[5+f][11]='|';
 array[13+f][11]='\\';
 array[5+f][12]='-';
 array[6+f][12]='-';
 }

  if(count==30){f=33;
 array[4+f][1]='//';
 array[5+f][1]='\\';
 array[14+f][1]='//';
 array[15+f][1]='\\';
 array[6+f][2]='\\';
 array[13+f][2]='//';
 array[7+f][3]='\\';
 array[12+f][3]='//';
 array[8+f][4]='\\';
 array[11+f][4]='//';
 array[11+f][5]='\\';
 array[12+f][6]='\\';
 array[12+f][7]='|';
 array[14+f][7]='\\';
 array[11+f][8]='|';
 array[12+f][8]='|';
 array[13+f][8]='-';
 array[14+f][8]='|';
 array[15+f][8]='\\';
 array[11+f][9]='|';
 array[16+f][9]='\\';
 array[11+f][10]='|';
 array[17+f][10]='\\';
 array[11+f][11]='|';
 array[18+f][11]='\\';
 array[19+f][11]='\\';
 array[10+f][12]='-';
 array[11+f][12]='-';
 }

 if(count==31){f=43;
 array[2+f][0]='-';
 array[3+f][0]='\\';
 array[11+f][0]='//';
 array[12+f][0]='-';
 array[10+f][1]='//';
 array[4+f][1]='\\';
 array[5+f][2]='\\';
 array[9+f][2]='//';
 array[6+f][3]='\\';
 array[8+f][3]='//';
 array[7+f][4]='|';
 array[7+f][5]='|';
 array[7+f][6]='|';
 array[6+f][8]='//';
 array[8+f][8]='\\';
 array[5+f][9]='//';
 array[6+f][9]='|';
 array[7+f][9]='-';
 array[8+f][9]='|';
 array[9+f][9]='\\';
 array[4+f][10]='//';
 array[10+f][10]='\\';
 array[2+f][12]='-';
 array[3+f][11]='//';
 array[11+f][11]='\\';
 array[12+f][12]='-';
 array[13+f][12]='-';
 array[1+f][12]='-';
 }

  if(count==32){f=47;
 array[1+f][1]='\\';
 array[2+f][2]='\\';
 array[3+f][3]='\\';
 array[4+f][4]='\\';
 array[15+f][4]='|';
 array[2+f][5]='-';
 array[3+f][5]='-';
 array[10+f][5]='-';
 array[11+f][5]='-';
 array[12+f][5]='-';
 array[13+f][5]='-';
 array[14+f][5]='-';
 array[2+f][6]='|';
 array[6+f][6]='-';
 array[7+f][6]='-';
 array[8+f][6]='-';
 array[2+f][7]='-';
 array[3+f][7]='-';
 array[9+f][7]='\\';
 array[4+f][8]='|';
 array[10+f][8]='\\';
 array[4+f][9]='|';
 array[11+f][9]='\\';
 array[4+f][10]='|';
 array[12+f][10]='\\';
 array[4+f][11]='|';
 array[13+f][11]='|';
 array[3+f][12]='-';
 array[51][5]=' ';
 array[56][5]=' ';
 array[50][6]=' ';
 array[52][6]=' ' ;
 array[51][7]=' ';
 }

if(count==33){f=55;
 array[1+f][1]='\\';
 array[4+f][1]='|';
 array[5+f][1]='-';
 array[6+f][1]='|';
 array[9+f][1]='//';
 array[2+f][2]='\\';
 array[4+f][2]='|';
 array[5+f][2]='v';
 array[6+f][2]='|';
 array[8+f][2]='//';
 array[3+f][3]='\\';
 array[7+f][3]='//';
 array[4+f][4]='\\';
 array[5+f][4]='|';
 array[6+f][4]='//';
 array[5+f][5]='|';
 array[5+f][6]='|';
 array[4+f][7]='|';
 array[6+f][7]='|';
 array[4+f][8]='|';
 array[6+f][8]='|';
 array[4+f][9]='|';
 array[6+f][9]='|';
 array[4+f][10]='|';
 array[6+f][10]='|';
 array[4+f][11]='|';
 array[6+f][11]='|';
 array[3+f][12]='-';
 array[4+f][12]='-';
 array[6+f][12]='-';
 array[7+f][12]='-';
 }

if(count==34){f=57;
 array[1+f][1]='//';
 array[1+f][2]='\\';
 array[2+f][3]='\\';
 array[3+f][4]='\\';
 array[9+f][4]='//';
 array[4+f][5]='\\';
 array[8+f][5]='//';
 array[5+f][6]='-';
 array[6+f][6]='-';
 array[7+f][6]='-';
 array[11+f][6]='|';
 array[5+f][7]='|';
 array[9+f][7]='\\';
 array[5+f][8]='|';
 array[5+f][9]='|';
 array[5+f][10]='|';
 array[5+f][11]='|';
 array[5+f][12]='-';
 array[6+f][12]='-';
 }

  if(count==35){f=58;
 array[4+f][1]='//';
 array[5+f][1]='\\';
 array[6+f][2]='\\';
 array[7+f][3]='\\';
 array[8+f][4]='\\';

 }

  if(count==0){alpha[34]='C';}
  
  if(count==1){alpha[32]='C';
       alpha[33]='o';
    alpha[34]='m';}
  
  if(count==2){alpha[30]='C';
       alpha[31]='o';
    alpha[32]='m';
       alpha[33]='p';
    alpha[34]='u';}
  
  if(count==3){alpha[28]='C';
       alpha[29]='o';
    alpha[30]='m';
       alpha[31]='p';
    alpha[32]='u';
    alpha[33]='t';
    alpha[34]='e';}
  
  if(count==4){alpha[26]='C';
       alpha[27]='o';
    alpha[28]='m';
       alpha[29]='p';
    alpha[30]='u';
    alpha[31]='t';
    alpha[32]='e';
    alpha[33]='r';}
  
  if(count==5){alpha[24]='C';
       alpha[25]='o';
    alpha[26]='m';
       alpha[27]='p';
    alpha[28]='u';
    alpha[29]='t';
    alpha[30]='e';
    alpha[31]='r';
    alpha[32]='s';
    alpha[34]='r';}
  
  if(count==6){alpha[22]='C';
       alpha[23]='o';
    alpha[24]='m';
       alpha[25]='p';
    alpha[26]='u';
    alpha[27]='t';
    alpha[28]='e';
    alpha[29]='r';
    alpha[30]='s';
    alpha[32]='r';
    alpha[33]='u';
    alpha[34]='l';}

  if(count==7){alpha[20]='C';
       alpha[21]='o';
    alpha[22]='m';
       alpha[23]='p';
    alpha[24]='u';
    alpha[25]='t';
    alpha[26]='e';
    alpha[27]='r';
    alpha[28]='s';
    alpha[30]='r';
    alpha[31]='u';
    alpha[32]='l';
    alpha[33]='e';
    alpha[34]='!';}
 
 if(count>7 && count<17){alpha[20-2*count+12]='C';
       alpha[21-2*count+12]='o';
    alpha[22-2*count+12]='m';
       alpha[23-2*count+12]='p';
    alpha[24-2*count+12]='u';
    alpha[25-2*count+12]='t';
    alpha[26-2*count+12]='e';
    alpha[27-2*count+12]='r';
    alpha[28-2*count+12]='s';
    alpha[30-2*count+12]='r';
    alpha[31-2*count+12]='u';
    alpha[32-2*count+12]='l';
    alpha[33-2*count+12]='e';
    alpha[34-2*count+12]='!';
    alpha[35-2*count+12]='!';}

 if(count==17){ alpha[0]='o';
    alpha[1]='m';
    alpha[2]='p';
    alpha[3]='u';
    alpha[4]='t';
    alpha[5]='e';
    alpha[6]='r';
     alpha[7]='s';
    alpha[9]='r';
       alpha[10]='u';
    alpha[11]='l';
    alpha[12]='e';
    alpha[13]='!';
    alpha[14]='!';}

 if(count==18){ alpha[0]='u';
    alpha[1]='t';
    alpha[2]='e';
    alpha[3]='r';
    alpha[4]='s';
     alpha[6]='r';
    alpha[7]='u';
       alpha[8]='l';
    alpha[9]='e';
    alpha[10]='!';
    alpha[11]='!';}

 if(count==19){ alpha[0]='e';
    alpha[1]='r';
    alpha[2]='s';
     alpha[3]='r';
    alpha[4]='u';
       alpha[5]='l';
    alpha[6]='e';
    alpha[7]='!';
    alpha[8]='!';}
 
 if(count==20){alpha[0]='s';
     alpha[2]='r';
    alpha[3]='u';
       alpha[4]='l';
    alpha[5]='e';
    alpha[6]='!';
    alpha[7]='!';}

  
  if(count==21){alpha[0]='r';
    alpha[1]='u';
       alpha[2]='l';
    alpha[3]='e';
    alpha[4]='!';
    alpha[5]='!';}

    if(count==22){alpha[0]='l';
    alpha[1]='e';
    alpha[2]='!';
    alpha[3]='!';}
  
  if(count==23){alpha[0]='!';
  alpha[1]='!';}

  
 

  foreGround(array);
 display2D(x, y, array);
 if(count<25){display1D(34, alpha);}
 wait ( .5 );
 clear2D(x, y, array);
 if(count<25){clear1D(34, alpha);}
//system("pause");
 ClearScreen();}
 
 return ;}



int main(){
 ticLoser();
return 0;}
