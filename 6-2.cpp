#include<bits/stdc++.h>
using namespace std;

int main(){

    int num[1000], mean;
    srand(time(NULL));

	freopen("rand.txt","w",stdout); 
    for(int i = 0; i < 1000; i++){
        num[i] = rand() % 10000;
        cout << num[i]  << endl;
        mean += num[i];
    } 
	fclose(stdout);
    mean /= 1000;
    
    cout << "Mean: " << mean << endl;
    return 0;
}