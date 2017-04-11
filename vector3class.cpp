#include <iostream>
#include <cmath>
#include <sstream>

class vec2{
public:
  vec2(){
    x = 0;
    y = 0;
  }
  vec2(float _x, float _y)
  {
    x = _x;
    y = _y;
  }

  float x;
  float y;
  
};

class vec3 {
public:
  //on creation:
  vec3()//on a empty creation
  {
    x = 0;
    y = 0;
    z = 0;
  }
  vec3(float _x, float _y, float _z)//when have predefined values
  {
    x = _x;
    y = _y;
    z = _z;
  }
  //main variable's
  float x;
  float y;
  float z;

  //basic operatators
  vec3 operator+(const vec3 other)
  {
    return vec3(x + other.x, y + other.y, z + other.z);
  }
  vec3 operator+(int other)
  {
    return vec3(x + other, y + other, z + other);
  }
  vec3 operator+(float other)
  {
    return vec3(x + other, y + other, z + other);
  }

  vec3 operator-(const vec3 other)
  {
    return vec3(x - other.x, y - other.y, z - other.z);
  }
  vec3 operator-(int other)
  {
    return vec3(x - other, y - other, z - other);
  }
  vec3 operator-(float other)
  {
    return vec3(x - other, y - other, z - other);
  }

  vec3 operator*(const vec3 other)
  {
    return vec3(x * other.x, y * other.y, z * other.z);
  }
  vec3 operator*(int other)
  {
    return vec3(x * other, y * other, z * other);
  }
  vec3 operator*(float other)
  {
    return vec3(x * other, y * other, z * other);
  }

  vec3 operator/(const vec3 other)
  {
    return vec3(x / other.x, y / other.y, z / other.z);
  }
  vec3 operator/(int other)
  {
    return vec3(x / other, y / other, z / other);
  }
  vec3 operator/(float other)
  {
    return vec3(x / other, y / other, z / other);
  }
  //vector assign operators
  vec3 operator+=(const vec3 other)
  {
    x += other.x;
    y += other.y;
    z += other.z;
    return *this;
  }
  vec3 operator+=(int other)
  {
    x += other;
    y += other;
    z += other;
    return *this;
  }
  vec3 operator+=(float other)
  {
    x += other;
    y += other;
    z += other;
    return *this;
  }

  vec3 operator-=(const vec3 other)
  {
    x -= other.x;
    y -= other.y;
    z -= other.z;
    return *this;
  }
  vec3 operator-=(int other)
  {
    x -= other;
    y -= other;
    z -= other;
    return *this;
  }
  vec3 operator-=(float other)
  {
    x -= other;
    y -= other;
    z -= other;
    return *this;
  }
  
  vec3 operator*=(const vec3 other)
  {
    x *= other.x;
    y *= other.y;
    z *= other.z;
    return *this;
  }
  vec3 operator*=(int other)
  {
    x *= other;
    y *= other;
    z *= other;
    return *this;
  }
  vec3 operator*=(float other)
  {
    x *= other;
    y *= other;
    z *= other;
    return *this;
  }

  vec3 operator/=(const vec3 other)
  {
    x /= other.x;
    y /= other.y;
    z /= other.z;
    return *this;
  }
  vec3 operator/=(int other)
  {
    x /= other;
    y /= other;
    z /= other;
    return *this;
  }
  vec3 operator/=(float other)
  {
    x /= other;
    y /= other;
    z /= other;
    return *this;
  }

  //vector manipulators
  float length()
  {
    return sqrt(x*x + y*y + z*z);
  }
  vec3 Normalize()
  {
    float reverseLength = flipvalue(length());
    x *= reverseLength;
    y *= reverseLength;
    z *= reverseLength;
    return *this;
  }
  float Dot_Scalar(vec3 other)
  {
    return x * other.x + y * other.y + z * other.z;
  }
  vec3 Dot_Projection(vec3 other)
  {
    float scalefactor = Dot_Scalar(other) / pow (length(), 2.0);
    return *this * scalefactor;
  }
  vec3 Cross_product(vec3 other)
  {
    float _x =y * other.z - z * other.y;
    float _y =z * other.x - x * other.z;
    float _z =x * other.y - y * other.x;
  }

    
  //change variable to vec3
  vec3 toVec3(float base)
  {
    x = base;
    y = base;
    z = base;
    return *this;
  }
  vec3 toVec3(vec2 base)
  {
    x = base.x;
    y = base.y;
    z = 0;
  }
  vec3 toVec3(vec2 baseVec,float basefloat)
  {
    x = baseVec.x;
    y = baseVec.y;
    z = basefloat;
  }

  //getting value's of the vector
  std::string getvalue()
  {
    std::ostringstream ss;
    std::string result;
    
    ss << x;
    result = "[" + ss.str();
    ss.str("");
    
    ss << y;
    result += "," + ss.str();
    ss.str("");
    
    ss << z;
    result += "," + ss.str() + "]";
    return result;
  }
  //math functions
  float flipvalue(float value)
  {
    return 1/value;
  }

  
};

int main()
{
  std::cout << "Type x:" << std::endl;
  int x;
  std::cin >> x;

  std::cout << "Type y:" << std::endl;
  int y;
  std::cin >> y;

  std::cout << "Type z:" << std::endl;
  int z;
  std::cin >> z;

  vec3 A = vec3(x,y,z);

  std::cout << "The lengt of this vector is: " << A.length() << std::endl;
  float length = A.length();
  A.Normalize();

  std::cout << "the  vector normalized is: " << A.x << ", " << A.y << ", "  << A.z << std::endl;
  A *= length;

  std::cout << "second vector" << std::endl;

  std::cout << "Type x:" << std::endl;
  std::cin >> x;

  std::cout << "Type y:" << std::endl;
  std::cin >> y;

  std::cout << "Type z:" << std::endl;
  std::cin >> z;
  
  vec3 B = vec3(x,y,z);

  vec3 C = A.Dot_Projection(B);

  std::cout << "the dot product of vector A and B: " << A.Dot_Scalar(B) << " with value: " << A.getvalue() << " " << B.getvalue() << std::endl;
  
  std::cout << "the  vector B projected on A is: " << C.x << ", " << C.y << ", "  << C.z << " with value: " << A.getvalue() << " " << B.getvalue() << std::endl;

  C = B.Dot_Projection(A);

  std::cout << "the  vector A Pojected on B is: " << C.x << ", " << C.y << ", "  << C.z <<  " with value: " << A.getvalue() << " " << B.getvalue() << std::endl;

  C = A.Cross_product(B);
  std::cout << "the  cross product with A on B is: " << C.x << ", " << C.y << ", "  << C.z << " with value: " << A.getvalue() << " " << B.getvalue() << std::endl;

  C = B.Cross_product(A);
  std::cout << "the  cross product with B on A is: " << C.x << ", " << C.y << ", "  << C.z <<  " with value: " << A.getvalue() << " " << B.getvalue() << std::endl;
  
  std::cin >> x; //pause

  return 0;

}
