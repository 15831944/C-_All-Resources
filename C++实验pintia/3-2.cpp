// 实验3 可变维度矩阵转置 文件名用中文命名运行时有问题 
#include <iostream>
using namespace std;
class Matrix{
	int * * a;
	int r,c;
public:
	Matrix(int r,int c){
		this->r = r;
		this->c = c;
		a = new int* [r];
		for(int i=0;i<r;i++){
			a[i] = new int[c];
		}
	}
	void input(){
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cin>>a[i][j];
			}
		}
	}
	void transform(){
		int ** p;
		p = new int* [c];
		for(int i=0;i<c;i++){
			p[i] = new int[r];
		}		
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				p[j][i] = a[i][j];
			}
		}
		a = p;
		int tem = r; r = c; c =tem;
	}
	void show(){		
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cout<<" "<<a[i][j];
			}
			cout<<endl;
		}
	}
}; 
int main(){
	int r,c;
	cin>>r>>c; 
	Matrix m(r,c); // 初始大小 2行3列 
	m.input();
	cout<<"datas before:"<<endl;
	m.show();
	m.transform();
	cout<<"datas after:"<<endl;
	m.show();
}
