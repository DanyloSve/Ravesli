#include <iostream>
#include <chrono>
#include <thread>


int main()
{
   int time;
   std::cout << "Input time in seconds:\n";
   std::cin >> time;
   //for (int i(0); i !-= time; i++)
   // using namespace std::chrono_literals; // C++14

   auto start = std::chrono::high_resolution_clock::now();
   std::this_thread::sleep_for(std::chrono::seconds(time)); // C++11
   // std::this_thread::sleep_for(2s); // C++14
   auto end = std::chrono::high_resolution_clock::now();
   std::chrono::duration<double, std::milli> elapsed = end-start;
   std::cout << "Out of time!\n";
}
