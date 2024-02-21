#include <iostream>
using namespace std;

int main()
{
// int x{-1};
// long runs{0};
// while(x) {
//     x--;
//     runs++;
// }
//  std::cout << runs << std::endl;
 int x{10};
 while(x) {
     x--;
     std::cout << x << "\n";
 }

// int main(){
//    int sum = 0;
//    int count = 3;
//    do{
//       sum++;
//    }
//    while(count < 3);
//    std::cout << sum << std::endl;
int i = 0;
do {
  cout << i << "\n";
  i++;
}
while (i < 5);
   return 0;
}