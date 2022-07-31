#include <bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
 
    // int t = 1;
    // /*is Single Test case?*/ cin >> t;
    // while (t--) {
    //     solve();
    //     cout << "\n";
    // }
 	solve();
    // cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
void toggle(int &a){
	if(a==1)
		a=0;
	else
		a=1;
}
void solve()
{
	int grid[3][3];
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 3; ++j)
			grid[i][j]=1;
	
	int input;
	int n = 9;
	for (int i = 0; i < n; ++i)
	{
		cin>>input;
		if(input%2==1){
			if(i==0){
				toggle(grid[0][0]);
				toggle(grid[0][1]);
				toggle(grid[1][0]);
			}
			else if(i==1){
				toggle(grid[0][1]);
				toggle(grid[0][0]);
				toggle(grid[0][2]);
				toggle(grid[1][1]);
			}
			else if(i==2){
				toggle(grid[0][2]);
				toggle(grid[0][1]);
				toggle(grid[1][2]);
			}
			else if(i==3){
				toggle(grid[1][0]);
				toggle(grid[0][0]);
				toggle(grid[1][1]);
				toggle(grid[2][0]);
			}
			else if(i==4){
				toggle(grid[1][1]);
				toggle(grid[1][0]);
				toggle(grid[0][1]);
				toggle(grid[1][2]);
				toggle(grid[2][1]);
			}
			else if(i==5){
				toggle(grid[1][2]);
				toggle(grid[1][1]);
				toggle(grid[0][2]);
				toggle(grid[2][2]);
			}
			else if(i==6){
				toggle(grid[2][0]);
				toggle(grid[1][0]);
				toggle(grid[2][1]);
			}
			else if (i==7){
				toggle(grid[2][1]);
				toggle(grid[2][0]);
				toggle(grid[1][1]);
				toggle(grid[2][2]);
			}
			else if(i==8){
				toggle(grid[2][2]);
				toggle(grid[2][1]);
				toggle(grid[1][2]);
			}

		}

	}
	for (int i = 0; i < 3; ++i){
		for (int j = 0; j < 3; ++j)
			cout<<grid[i][j];
		cout<<endl;
	}

}

#import<iostream>
int i,j,k,e[5][5];
main()
{
	for(;i++<3;j=0)
		for(;j++<3;e[i-1][j]^=(k%=2),e[i][j-1]^=k,e[i][j]^=k,e[i][j+1]^=k,e[i+1][j]^=k)std::cin>>k;for(;j++<3;std::cout<<'\n')for(i=0;i++<3;)std::cout<<!e[j][i];}