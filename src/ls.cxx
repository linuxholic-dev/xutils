#include<iostream>
#include<filesystem>
#include<string>

using namespace std;
namespace fs = std::filesystem;

int main(int argc, char** argv) {
	if(argc < 2) {
		for(const auto& entry : fs::directory_iterator(".")) 
		{
			cout << entry.path().filename() << "\n";
		}
	}
  else if(string(argv[1]) == "-v" || string
(argv[1]) == "--version")
{
cout << "ls (XUTILS) version 0.1" << "\n";
return 0;
}
  else if(argc == 2) {
  	for(const auto& entry : fs::directory_iterator(argv[1])) {
  		cout << entry.path().filename() << "\n";
  	}
  }
  else {cout << "ls: too much parameter:(" << "\n";
  return 1;}
return 0; //exit succesful
}
