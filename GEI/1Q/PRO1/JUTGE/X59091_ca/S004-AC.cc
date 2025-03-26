#include <iostream>
using namespace std;

//X59091
//pre: diversos naturals
//post: per cada parell (n,m), escriure rectangle nxm omplint-lo amb
// 9,8,..0,9, separar-los amb una linia en blanc.


int main(){
	int n,m;
	bool Primer = true;
	while(cin>>n>>m) {
		int num=0;
		if (!Primer) cout << endl;
		else Primer = false;
		for(int i=0;i<n;++i){
			for(int j=0;j<m; ++j){
				cout<<9-num%10;
				num++;
			}
			cout<<endl;
		}
	}
}
