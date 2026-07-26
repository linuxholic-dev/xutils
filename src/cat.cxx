#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(int argc, char** argv) {

if(string(argv[1]) == "-v" || string(argv[1]) ==
"--version")
{
cout <<
 "mkdir (XUTILS) version 0.1"
 << "\n"; return 0;
}

else if(argc < 2){ cout << "cat: you vant only run cat without parameter"
<< "\n"; return 1; }
string line;
for(int i = 1; i < argc; i++) {
ifstream file(argv[i]);
if(!file) {
cout << "cat: can't open file"
<< argv[i] <<  "\n"; continue; }
while (getline(file, line))
{
    cout << line << '\n';
}

}
return 0;
}
