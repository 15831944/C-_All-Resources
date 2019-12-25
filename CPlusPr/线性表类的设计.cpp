/*
 演示实现一个线性表类
 假设节点仅包含一个整型数据
 */
/* ver 1: 公式化描述方法,用固定大小的数组存储数据*/
class LinearList {
   public: 
      LinearList(); // constructor
      ~LinearList() {delete [] element;} // destructor
      bool IsEmpty() const {return length == 0;}
      int Length() const {return length;}
      bool Find(int k, int& x) const;
         // return the k'th element of list in x
      int Search(const int& x) const;
         // return position of x
      LinearList& Delete(int k, int& x);
         // delete k'th element and return in x
      LinearList& Insert(int k, const int& x);
         // insert x just after k'th element
      void Output();
   private:
      int element[10]; // dynamic 1D array
};

/* ver 2: 公式化描述方法, 线性表容量可变，利用动态内存分配*/
class LinearList {
   public: 
      LinearList(int MaxListSize = 10); // constructor
      ~LinearList() {delete [] element;} // destructor
      bool IsEmpty() const {return length == 0;}
      int Length() const {return length;}
      bool Find(int k, int& x) const;
         // return the k'th element of list in x
      int Search(const int& x) const;
         // return position of x
      LinearList& Delete(int k, int& x);
         // delete k'th element and return in x
      LinearList& Insert(int k, const int& x);
         // insert x just after k'th element
      void Output() const;
   private:
      int length;
      int MaxSize;
      int *element; // dynamic 1D array
};

/* 公式化描述方法测试程序 */
#include <iostream.h>
#include "llist.h"

void main(void)
{
  
      LinearList<int> L(5);
      cout << "Length = " << L.Length() << endl;
      cout << "IsEmpty = " << L.IsEmpty() << endl;
      L.Insert(0,2).Insert(1,6);
      cout << "List is "  << endl;;
	  L.Output() ;
      cout << "IsEmpty = " << L.IsEmpty() << endl;
      int z;
      L.Find(1,z);
      cout << "First element is " << z << endl;
      cout << "Length = "<<L.Length()  << endl;
	  L.Delete(1,z);
      cout << "Deleted element is " << z << endl;
      cout << "List is "  << endl;;
	  L.Output() ;
}


/* ver 3: 链式描述算法，利用指针域 */

class Chain;
class ChainNode {
   friend Chain<int>; 
   private:
      int data;
      ChainNode *link;
};

class Chain {   
   public:
      Chain() {first = 0;}
      ~Chain();
      bool IsEmpty() const {return first == 0;}
      int Length() const; 
      bool Find(int k, int& x) const; 
      int Search(const int& x) const; 
      Chain<int>& Delete(int k, int& x); 
      Chain<int>& Insert(int k, const int& x);
      void Output() const;
   private:
      ChainNode *first;  // pointer to first node
};


/* 链表方法测试程序 */
#include <iostream.h>
void main(void)
{
  
      LinearList<int> L(5);
      cout << "Length = " << L.Length() << endl;
      cout << "IsEmpty = " << L.IsEmpty() << endl;
      L.Insert(0,2).Insert(1,6);
      cout << "List is "  << endl;;
	  L.Output() ;
      cout << "IsEmpty = " << L.IsEmpty() << endl;
      int z;
      L.Find(1,z);
      cout << "First element is " << z << endl;
      cout << "Length = "<<L.Length()  << endl;
	  L.Delete(1,z);
      cout << "Deleted element is " << z << endl;
      cout << "List is "  << endl;;
	  L.Output() ;
}

