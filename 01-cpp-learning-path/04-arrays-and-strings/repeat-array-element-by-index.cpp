#include <iostream>
int main(){
    int x;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    std:: cout << "Enter an index (0-9): ";
    std::cin >> x;
   
    for(int i=0;i<7;i++){
        std::cout << arr[x] << std::endl;
    }
}
