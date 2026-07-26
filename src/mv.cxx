#include<filesystem>
#include<iostream>
#include<string>

using namespace std;
namespace fs = std::filesystem;


int main(int argc, char** argv) {
if(string(argv[1]) == "-v" || string(argv[1]) ==
"--version")
{
cout <<
 "mv (XUTILS) version 0.1"
 << "\n"; return 0;
}

else if(argc != 3) {cerr <<
"mv: missing operand"
<< "\n"; return 1; //error
}
else if(!fs::is_directory(argv[2]))
{
fs::rename(argv[1], argv[2]);
return 0;
}
else {
fs::path src = argv[1];
fs::path dst = argv[2];

dst /= src.filename();

fs::rename(src, dst);

return 0;
}
}
