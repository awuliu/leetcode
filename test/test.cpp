
#include <string>
#include <vector>
#include <iostream>
using namespace std;

void test();
void testItEnd(){
  vector<int> arr1 = {1,2,3};
  vector<int> arr2 = {4,5,6};
  auto it1 = arr1.end();
  auto it2 = arr2.end();

}
void testItEnd2(){
  int arr1[] = {1,2,3};
  int arr2[] = {4,5,6};
  auto it1 = end(arr1);
  auto it2 = end(arr2);
  bool isEndEqual = (it1 == it2);
  cout << "============" << isEndEqual << endl;
}

int main(int argc, char **argv)
{
  testItEnd();
}

void test(){
  
  string a = "123";
  cout << '1' - 0x30 << endl;
}
