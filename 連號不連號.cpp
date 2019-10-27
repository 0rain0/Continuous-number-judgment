#include<iostream>

using namespace std;

int main(){
	int inPut=0,max=0,min,n,i=0;

	while(cin>>inPut){
		if(i==0){
			n=inPut;
			i=1;
		}else if(i==1){
			min=inPut;
			max=inPut;
			i=2;
		}else if(inPut>=max){
			max=inPut;
		}else if(inPut<=min){
			min=inPut;
		}	
	}

	
	if((max-min+1)==n){
		cout<<min<<" "<<max<<" "<<"yes"<<endl;
	}else{
		cout<<min<<" "<<max<<" "<<"no"<<endl;
	}
	
	return 0;
}
