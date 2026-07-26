#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
if(argc > 2)
{ cout <<
"too much option,we will upgrade soon!"
<< "\n";  return 0;
}

else if (argc == 2 &&
    (std::string(argv[1]) == "-v" ||
     std::string(argv[1]) == "--version"))
{
    std::cout << "clear (XUTILS) version 0.1\n";
    return 0;
}
else {
    std::cout << "\033[2J\033[H";
    return 0;
}
}
