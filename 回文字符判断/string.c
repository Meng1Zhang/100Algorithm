#include<iostream>
#include<string>
using namespace std;

bool  IsCharorNumber(char c){
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c<='Z') || ( c >= '0' &&  c<='9'))
		return true;
}

bool  IsDaXiaoX(char a,char b){
	     if( a>='A' && a<='Z' ) a+=32;
	     if(b>='A' && b<='Z') b+=32;
	     return a ==b;
}

bool Ishuiwenchang(string s){
	   int i=0,j=s.size()-1;
	   for(;i<j;++i,--j){
	         while( s=="" && s.size()==0)  return true;
		 while(!IsCharorNumber(s.at(i))) i++;
		 while(!IsCharorNumber(s.at(j))) j--;
		 while(!IsDaXiaoX(s.at(i),s.at(j)))  return false;
	  }
	  return true;
}        
          
int main(){
	   string s="race - Ecar";
           bool answer=Ishuiwenchang(s);
	   cout<<answer<<endl;  
	   return 0;
}

