#include<iostream>
using namespace std;
class Matrix{
public:
	void input(){//¸³Öµ 
		
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++)
				cin>>a[i][j];
		}
	}
		
void transform() 
{
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			a[i][j]=a[j][i];
		}
	}
}
	void show(){//Êä³ö
	cout<<"datas:"<<endl;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++)
				cout<<" "<<a[i][j]<<" ";
		cout<<'\t'<<endl;
		} 
	}
private:
	int a[3][3];
};
int main(){
	Matrix m;
	m.input();
	m.show();
	m.transform();
	m.show();
}
