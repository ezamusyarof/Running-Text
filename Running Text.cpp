#include<iostream>
#include<string>
#include<windows.h>

using namespace std;

string kata;
string line[5];

void ubahKata(){
	for(int i=0; i<kata.length(); i++){
		if(kata[i]=='A' || kata[i]=='a'){
			line[0]=line[0]+"[][][]";
			line[1]=line[1]+"[]  []";
			line[2]=line[2]+"[][][]";
			line[3]=line[3]+"[]  []";
			line[4]=line[4]+"[]  []";
		}else if(kata[i]=='B' || kata[i]=='b'){
			line[0]=line[0]+"[][][]";
			line[1]=line[1]+"[]  []";
			line[2]=line[2]+"[][]  ";
			line[3]=line[3]+"[]  []";
			line[4]=line[4]+"[][][]";
		}else if(kata[i]=='C' || kata[i]=='c'){
			line[0]=line[0]+"[][][]";
			line[1]=line[1]+"[]  []";
			line[2]=line[2]+"[]   ";
			line[3]=line[3]+"[]  []";
			line[4]=line[4]+"[][][]";
		}else if(kata[i]=='D' || kata[i]=='d'){
			line[0]=line[0]+"[][]  ";
			line[1]=line[1]+"[]  []";
			line[2]=line[2]+"[]  []";
			line[3]=line[3]+"[]  []";
			line[4]=line[4]+"[][]  ";
		}else if(kata[i]=='E' || kata[i]=='e'){
			line[0]=line[0]+"[][][]";
			line[1]=line[1]+"[]    ";
			line[2]=line[2]+"[][]  ";
			line[3]=line[3]+"[]    ";
			line[4]=line[4]+"[][][]";
		}else if(kata[i]=='F' || kata[i]=='f'){
			line[0]=line[0]+"[][][]";
			line[1]=line[1]+"[]    ";
			line[2]=line[2]+"[][][]";
			line[3]=line[3]+"[]    ";
			line[4]=line[4]+"[]    ";
		}else if(kata[i]=='G' || kata[i]=='g'){
			line[0]=line[0]+"[][][]";
			line[1]=line[1]+"[]    ";
			line[2]=line[2]+"[][][]";
			line[3]=line[3]+"[]  []";
			line[4]=line[4]+"[][][]";
		}else if(kata[i]=='H' || kata[i]=='h'){
			line[0]=line[0]+"[]  []";
			line[1]=line[1]+"[]  []";
			line[2]=line[2]+"[][][]";
			line[3]=line[3]+"[]  []";
			line[4]=line[4]+"[]  []";
		}else if(kata[i]=='I' || kata[i]=='i'){
			line[0]=line[0]+"[][][]";
			line[1]=line[1]+"  []  ";
			line[2]=line[2]+"  []  ";
			line[3]=line[3]+"  []  ";
			line[4]=line[4]+"[][][]";
		}else if(kata[i]=='J' || kata[i]=='j'){
			line[0]=line[0]+"  [][]";
			line[1]=line[1]+"    []";
			line[2]=line[2]+"    []";
			line[3]=line[3]+"[]  []";
			line[4]=line[4]+"[][][]";
		}else if(kata[i]=='K' || kata[i]=='k'){
			line[0]=line[0]+"[]  []";
			line[1]=line[1]+"[]  []";
			line[2]=line[2]+"[][]  ";
			line[3]=line[3]+"[]  []";
			line[4]=line[4]+"[]  []";
		}else if(kata[i]=='L' || kata[i]=='l'){
			line[0]=line[0]+"[]    ";
			line[1]=line[1]+"[]    ";
			line[2]=line[2]+"[]    ";
			line[3]=line[3]+"[]    ";
			line[4]=line[4]+"[][][]";
		}else if(kata[i]=='M' || kata[i]=='m'){
			line[0]=line[0]+"[][]  [][]";
			line[1]=line[1]+"[][]  [][]";
			line[2]=line[2]+"[]  []  []";
			line[3]=line[3]+"[]  []  []";
			line[4]=line[4]+"[]      []";
		}else if(kata[i]=='N' || kata[i]=='n'){
			line[0]=line[0]+"[]    []";
			line[1]=line[1]+"[][]  []";
			line[2]=line[2]+"[][][][]";
			line[3]=line[3]+"[]  [][]";
			line[4]=line[4]+"[]    []";
		}else if(kata[i]=='O' || kata[i]=='o'){
			line[0]=line[0]+"[][][]";
			line[1]=line[1]+"[]  []";
			line[2]=line[2]+"[]  []";
			line[3]=line[3]+"[]  []";
			line[4]=line[4]+"[][][]";
		}else if(kata[i]=='P' || kata[i]=='p'){
			line[0]=line[0]+"[][][]";
			line[1]=line[1]+"[]  []";
			line[2]=line[2]+"[][][]";
			line[3]=line[3]+"[]    ";
			line[4]=line[4]+"[]    ";
		}else if(kata[i]=='Q' || kata[i]=='q'){
			line[0]=line[0]+"[][][]  ";
			line[1]=line[1]+"[]  []  ";
			line[2]=line[2]+"[]  []  ";
			line[3]=line[3]+"[]  []  ";
			line[4]=line[4]+"[][][][]";
		}else if(kata[i]=='R' || kata[i]=='r'){
			line[0]=line[0]+"[][][]";
			line[1]=line[1]+"[]  []";
			line[2]=line[2]+"[][]  ";
			line[3]=line[3]+"[]  []";
			line[4]=line[4]+"[]  []";
		}else if(kata[i]=='S' || kata[i]=='s'){
			line[0]=line[0]+"[][][]";
			line[1]=line[1]+"[]    ";
			line[2]=line[2]+"[][][]";
			line[3]=line[3]+"    []";
			line[4]=line[4]+"[][][]";
		}else if(kata[i]=='T' || kata[i]=='t'){
			line[0]=line[0]+"[][][]";
			line[1]=line[1]+"  []  ";
			line[2]=line[2]+"  []  ";
			line[3]=line[3]+"  []  ";
			line[4]=line[4]+"  []  ";
		}else if(kata[i]=='U' || kata[i]=='u'){
			line[0]=line[0]+"[]  []";
			line[1]=line[1]+"[]  []";
			line[2]=line[2]+"[]  []";
			line[3]=line[3]+"[]  []";
			line[4]=line[4]+"[][][]";
		}else if(kata[i]=='V' || kata[i]=='v'){
			line[0]=line[0]+"[]  []";
			line[1]=line[1]+"[]  []";
			line[2]=line[2]+"[]  []";
			line[3]=line[3]+"[]  []";
			line[4]=line[4]+"  []  ";
		}else if(kata[i]=='W' || kata[i]=='w'){
			line[0]=line[0]+"[]      []";
			line[1]=line[1]+"[]  []  []";
			line[2]=line[2]+"[]  []  []";
			line[3]=line[3]+"[][]  [][]";
			line[4]=line[4]+"[][]  [][]";
		}else if(kata[i]=='X' || kata[i]=='x'){
			line[0]=line[0]+"[]  []";
			line[1]=line[1]+"[]  []";
			line[2]=line[2]+"  []  ";
			line[3]=line[3]+"[]  []";
			line[4]=line[4]+"[]  []";
		}else if(kata[i]=='Y' || kata[i]=='y'){
			line[0]=line[0]+"[]  []";
			line[1]=line[1]+"[]  []";
			line[2]=line[2]+"[][][]";
			line[3]=line[3]+"  []  ";
			line[4]=line[4]+"  []  ";
		}else if(kata[i]=='Z' || kata[i]=='z'){
			line[0]=line[0]+"[][][]";
			line[1]=line[1]+"    []";
			line[2]=line[2]+"[][][]";
			line[3]=line[3]+"[]    ";
			line[4]=line[4]+"[][][]";
		}else if(kata[i]==' '){
			line[0]=line[0]+"   ";
			line[1]=line[1]+"   ";
			line[2]=line[2]+"   ";
			line[3]=line[3]+"   ";
			line[4]=line[4]+"   ";
		}
		
		for(int j=0; j<5; j++){
			line[j]=line[j]+"  ";
		}
	}
		
//	for(int i=0; i<5; i++){
//		
//		cout << line[i] << endl;
//	}
}

void animateKata(int index){
	system("cls");
	string lineDisplay[5];
	if(index>=line[0].length()){
		index=0;
	}
	for(int i=index; i<line[0].length(); i++){
		lineDisplay[0]=lineDisplay[0]+line[0][i];
		lineDisplay[1]=lineDisplay[1]+line[1][i];
		lineDisplay[2]=lineDisplay[2]+line[2][i];
		lineDisplay[3]=lineDisplay[3]+line[3][i];
		lineDisplay[4]=lineDisplay[4]+line[4][i];
	}
	
	for(int i=0; i<5; i++){
		lineDisplay[i]=lineDisplay[i]+"     []      ";
	}
	
	for(int i=0; line[0].length()>lineDisplay[0].length(); i++){
		lineDisplay[0]=lineDisplay[0]+line[0][i];
		lineDisplay[1]=lineDisplay[1]+line[1][i];
		lineDisplay[2]=lineDisplay[2]+line[2][i];
		lineDisplay[3]=lineDisplay[3]+line[3][i];
		lineDisplay[4]=lineDisplay[4]+line[4][i];
	}
	
	
	cout << endl << endl;
	cout << "    Kalimat => " << kata << endl << endl;
	for(int i=0; i<5; i++){
		cout << "    ";
		for(int j=0; j<120; j++){
			if(lineDisplay[i][j]=='\0'){
				break;
			}
			cout << lineDisplay[i][j];
		}
		cout << endl;
	}
	
	
	cout << endl;
	Sleep(10);
	animateKata(index=index+1);
}

main(){
	cout << endl << endl;
	cout << "    Masukkan Kalimat => "; getline(cin,kata);
	ubahKata();
	animateKata(0);
}
