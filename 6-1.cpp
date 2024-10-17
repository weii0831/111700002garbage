#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("input.txt","r",stdin); 
	freopen("output.txt","w",stdout); 
    
    string s, token, line, c1, c2;
    int yy, mm, dd, hour, min;
    stringstream ss;

    getline(cin, s);
    getline(cin, line);
    ss << line;
    getline(ss, token, '/');
    yy = stoi(token);
    getline(ss, token, '/');
    mm = stoi(token);
    getline(ss, token, ' ');
    dd = stoi(token);
    getline(ss, token, ':');
    hour = stoi(token);
    getline(ss, token, ' ');
    min = stoi(token);
    ss.clear();


    int t1;
    if(s[0] == 'T') t1 = 8;
    else if(s[0] == 'S') t1 = -8;
    else if(s[0] == 'C') t1 = -6;
    else if(s[0] == 'L') t1 = 0;

    if(s[4] == 'T') t1 = 8 - t1;
    else if(s[4] == 'S') t1 = -8 - t1;
    else if(s[4] == 'C') t1 = -6 - t1;
    else if(s[4] == 'L') t1 = 0 - t1;

    if(hour + t1 < 0) hour = 24 + hour + t1, dd--;
    else if(hour + t1 >= 24) hour = hour + t1 - 24, dd++;
    else hour -= t1;
    cout << yy << "/" << mm << "/" << dd << " " << hour << ":" << min << endl;
    fclose(stdin);
	fclose(stdout);
   
    return 0;
}