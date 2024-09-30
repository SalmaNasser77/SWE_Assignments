#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>

void Calculate (std::function<bool (void)> swap, 
                                     std::function<void (void)> print)
{   
    bool valid = swap();
    if(valid){
        print();
    }
    else{
        std::cout << "Error While swapping\n";
    }
}

int main() {
    std::vector<int> v1, v2;
    int n;

    std::cout << "Enter the size of the 2 vectors:\n";
    std::cin >> n;

    std::cout << "Enter the Elements of the first vector: \n";
    for(int i = 0; i < n; i++){
        int num;
        std::cin >> num;
        v1.push_back(num); 
    }

    std::cout << "Enter the Elements of the second vector: \n";
    for(int i = 0; i < n; i++){
        int num;
        std::cin >> num;
        v2.push_back(num); 
    }
    auto swab = [&v2, &v1]() -> bool{
        std::sort(v2.begin(), v2.end());
        for(int i = 0; i < v2.size(); i++)
        {
            int temp = v1[i];
            v1[i] = v2[i];
            v2[i] = temp;
        }
        return true;
    };


    auto print = [&v1, &v2](){
        std:: cout << "Elements are swapped!!\n";
        std:: cout << "Second vector sorted:\n";
        for(int i = 0; i < v1.size(); i++){
            std::cout << v1[i] << " ";
        }
        std:: cout << "\n";
        std:: cout << "First vector:\n";
        for(int i = 0; i < v2.size(); i++){
            std::cout << v2[i] << " ";
        }
        std:: cout << "\n";
    };

    Calculate(swab, print);


   return 0;
}
