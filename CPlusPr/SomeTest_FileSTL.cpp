/*test stl algorithm and iterator */
/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void main()
{
	int a[5]={5,7,8,3,1};
	int i=5;
	vector<int> v(a,a+5);
	vector<int>::iterator itr;
	int *p=find(a,a+5,i);
	cout<<*p<<endl;
	itr=find(v.begin(),v.end(),i); //find ���ص�����,����Ҫ���ǵ�����	
	if(itr!=v.end())
		cout<<"found "<<*itr<<" at position "<<itr-v.begin()<<endl;
	else
		cout<<"not found"<<endl;

    //test sort and copy for output
	ostream_iterator<int> oitr(cout, " "); //���������
	//copy(v.begin(),v.end(),oitr); cout<<endl;
	copy(a,a+5,oitr); cout<<endl;
	cout<<"after sort"<<endl;
	sort(v.begin(),v.end());
    copy(v.begin(),v.end(),oitr);
}
*/
/*test file read and write*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void main()
{
	ifstream ifs;
	char fn[20]="testforfile.txt"; // ע�� Ĭ�ϵ�ǰ·��Ϊ�����ļ�����·��
	char line[100];
	ifs.open(fn);

	// ����ʾ��򵥵Ķ�ȡ
    if(ifs.good()){
		//ifs.getline(line,120,'\n'); 
		ifs>>line;
		cout<<line<<endl;
    }	
	else
		cout<<"open file fause"<<endl;
    
	// Ϊÿ���м��к���ʾ
	/*
	ifs.seekg(0);
	int i=1;	
	while(!ifs.eof()){		
		ifs.getline(line,120,'\n');
		cout<<i++<<":"<<line<<endl;
	}*/
	// �������������ļ�
	/*
    ifs.seekg(0);
	int i=1;
	ofstream ofs("testfileout.txt");
	while(!ifs.eof()){		
		ifs.getline(line,120,'\n');
		ofs<<i++<<":"<<line<<endl;
	}
	ifs.close();
	ofs.close();
	*/
	// ������������ļ�,������ı��������ܱȽ��鷳
	// �����Ƚ�����ʱ�ļ����ٸ�����ʱ��Ȼ��ɾ����ʱ
	// ���߽������ı������ڴ����У����ڴ����޸����ݣ�Ȼ���ٻ�д
	ifs.close(); 
	int i=1;
	fstream fs("testforfile.txt",ios::in|ios::out);
    if(fs.good()){    
	while(!fs.eof()){		
		fs>>line; 
		fs.seekp(-2);
		fs<<"a:"<<line<<endl;
	}
	}else
		cout<<"open file error"<<endl;
	fs.close();
}
