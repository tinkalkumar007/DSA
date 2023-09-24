#include<iostream>
#include<cmath>
#include<string>
using namespace std;
/*int main(){
	int x=1;
	int i,j,k;
	cout << "Enter two no.";
	//cin >> x;
	//cin >> y;
	while(x<=5){
		cout << x <<"\n";
		x++;
	}
	for(i=0;i<=6;i+=2){
		cout << i << "\n";
	}
	int Mynum[4]={10,20,30,40};
	//Mynum[2]="Mamta";
	for (i=0;i<4;i+=2){
		cout << Mynum[i] << endl;
	}
	int ArrLength = sizeof(Mynum) / sizeof(int);
	cout << ArrLength << endl;
	int Arr[2][4]={
		{1,2,3,4},
		{7,8,9,10}
	};
	for (i=0;i<2;i++){
		for (j=0;j<4;j++){
			cout << Arr[i][j] << "\t";
		}
	}
	cout << "\n";
	int Arr1[3][2][2]={
		{
			{1,2},
			{3,4}
		},{
			{5,6},
			{7,8}
		},{
			{9,10},
			{11,12}
			}					
	};
	cout << Arr1[0][1][1] << endl;
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
				cout << Arr1[i][j][k] << "\t";
			}
		}
	};
	cout << "\n";
	/* int Arr2[3][3]={
		{0,1,0},
		{1,0,1},
		{0,1,0}
			};

	int row, column;
	int hit=0;
	int trail=0;
	
	while(hit<3){
		cout << "Enter Row Number";
	    cin >> row;
	    cout << "Enetr column Number";
	    cin >> column;
		if (Arr2[row][column]){
		Arr2[row][column]=0;
		hit++;
		cout << "you have " << (3-hit) << " attempt remaining\n"; 
	}
	else{
		cout << "You Missed\n";
	}
	trail++;
	}
	cout << "win\n";
	cout << "You won in " << trail << " Trails";*/
/*	string Dish = "Pizza";
	string &meal=Dish;
	cout << Dish << endl;
	cout << &Dish << endl;
	cout << meal << endl;
	string* ptr=&Dish;
	cout << ptr;
	
	//cout << Mynum[3];
/*	if(x>y){
		cout << x << " is greater than " << y;
	}
	else{
		cout << x << " is less than " << y;
	}
	//cout << (2<1);*/
	//cout << "Recursion\n";
	int sum(int x) {
		if (x>0){
			return(x+sum(x-1));
		}
		else{
			return 0;
		}
	}
	int main(){
		int z=sum(10);
		cout << z;
		return 0;
	}
	
//	return 0;
//}


