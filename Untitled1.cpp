#include<iostream>
using namespace std;
class Matrix{
int mat[50][50];
int row, col;
public:
Matrix(int r, int c){
	row=r;
	col=c;
}	
void read(){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>mat[i][j];
		}
	}
}
void show(){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<mat[i][j]<<endl;
		}
	}cout<<endl;
}
Matrix operator+(Matrix& m2){
	Matrix m3(row,col);
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			m3.mat[i][j]=mat[i][j]+m2.mat[i][j];
		}
	}
	return m3;
}
Matrix operator*(Matrix& m2){
	Matrix m3(row,m2.col);
	for(int i=0;i<row;i++){
		for(int j=0;j<m2.col;j++){
			m3.mat[i][j]=0;
			for(int k=0;k<col;k++){
				m3.mat[i][j]+=mat[i][j]*m2.mat[i][j];
			
			}
			
		}
	}
	return m3;
}
};
int main(){
	Matrix m1(2,3),m2(3,2),m3(2,3),m4(3,2);
	m3=m1+m2;
	m4=m1*m2;
	m1.read();
	m2.read();
	m3.read();
	Matrix m5=m1+m2;
	Matrix m6=m3*m4;
	m5.show();
	m6.show();
	return 0;
}
