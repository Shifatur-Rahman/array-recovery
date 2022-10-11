#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

int t, n, i, flag;
cin>>t;

while(t--){

	cin>>n;
    vector <int> a(n);
    vector <int> d(n);

	for(i=0; i<n; i++){
		cin>>d[i];
	}

    a[0] = d[0];

    if(n==1){
		cout<<a[0]<<endl;
		continue;
    }
     bool flag = false;
    for(i=1; i<n; i++){
		if(a[i-1]-d[i] < 0 || d[i] == 0 ){
			a[i] = a[i-1] + d[i];
		}
		else{
			flag = true;
			break;
		}
    }

if(flag){
	cout<<-1<<endl;
} else{
    for(i=0; i<n; i++){
		cout<<a[i]<<" ";
    }
    cout<<endl;
}

}




}


 //  b+=arr[i];
 //  cout<<b<<" ";
