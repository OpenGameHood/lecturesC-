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
    int temp;
    int it = 0;
    
    std::string buffer = "";
    std::cout << "output:" << std::endl;
    
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
