#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

int main()
{
    std::vector<int> list;
    //loads file
    std::ifstream Readobject;
    Readobject.open("test.txt", std::fstream::in);

    if(Readobject)
    {
      std::cout << "output:" << std::endl;
      int temp;
      std::string buffer = "";
      int it = 0;
      while(std::getline(Readobject, buffer, ',') && it++ != -1)
      {
 	std::istringstream(buffer) >> temp;
	list.push_back(temp);
	std::cout << list[it-1] << "," ;
      }
       std::cout << std::endl  << "this is the list" << std::endl;
    }
     
    Readobject.close();
    return 0;
}
