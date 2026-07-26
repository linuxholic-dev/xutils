#include<iostream>
#include<filesystem>
#include<string>

using namespace std;
namespace fs = std::filesystem;

//pwd is very easy,we just need absolute func in fs
int main(int argc, char** argv)
{
if(argc == 2 && (string(argv[1]) == "-v" ||
 string(argv[1]) == "--version")) {
cout << "pwd (XUTILS) version 0.1" << "\n";
}
else if(argc < 2 && argc > 0) {
auto pwd = fs::absolute(".");
cout << pwd << "\n"; return 0; }
else { cout << "pwd: unknow option" << "\n"; }
return 0;
}

