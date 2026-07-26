#include<filesystem>
#include<iostream>
#include<string>

using namespace std;

namespace fs = std::filesystem;

int main(int argc, char** argv) {
 if(argc < 2) { cerr <<
               "!" << "\n"; return 1; }
 else if(string(argv[1]) == "-v" || string(argv[1]) ==
"--version")
{
cout <<
 "mkdir (XUTILS) version 0.1"
 << "\n";
}
 else if(!fs::exists(argv[1])) {
fs::create_directory(argv[1]);
}
else if(fs::exists(argv[1])) {
string cmd;
 cout <<
 "mkdir: name of directory you try to create is already exist, do you want to change it to your new directory?(y or n)";
cin >> cmd;
if(cmd == "y")
{
fs::remove_all(argv[1]);
fs::create_directory(argv[1]);
}
else if(cmd == "n"){
cout <<"stop."
<< "\n";
return 0;
}
else { cout << "unknow option:(" << "\n";
return 1;
 }
}
}
