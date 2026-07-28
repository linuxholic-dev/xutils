#include<filesystem>
#include<iostream>

using namespace std;
namespace fs = std::filesystem;

int main(int argc, char** argv) {
if(argc < 2) {cout << "rmdir: missing target"
<< "\n"; return 1; }

else if(string(argv[1]) == "-v" || string(argv[1]) ==
"--version")
{
cout <<
 "rmdir (XUTILS) version 0.1"
 << "\n";
}
else if(!fs::is_directory(argv[1])) {
 cout <<
 "rmdir: target is not directory"
 << "\n"; return 1;
}

for(int i = 1; i < argc; i++) {
 fs::remove_all(argv[i]);
}
return 0;
}
