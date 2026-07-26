#include <fstream>
#include <filesystem>
#include <iostream>
#include <string>

namespace fs = std::filesystem;
using namespace std;
int main(int argc, char** argv) {
if(string(argv[1]) == "-v" || string(argv[1]) ==
"--version")
{
cout <<
 "touch (XUTILS) version 0.1"
 << "\n"; return 0;
}
 for(int i = 1; i < argc; i++) {
 if(!fs::exists(argv[i]))
  ofstream(argv[i]).close();
 else { cout << "touch: file already exists"
<< "\n";
return 1;
}
}
}
