#include <iostream>

#include <chrono>
#include <ctime>

class Timer
{
private:
    using clock_t = std::chrono::high_resolution_clock;
    using second_t = std::chrono::duration < double, std::ratio<1> >;

    std::chrono::time_point <clock_t> m_beg;

public:
    Timer() :m_beg( clock_t::now() )
    {

    }

    void reset()
    {
        m_beg = clock_t::now();
    }

    double elapsed() const
    {
        return std::chrono::duration_cast <second_t> (clock_t::now() - m_beg).count();
    }
};

int main()
{
   Timer t;
   double duration = t.elapsed();

   double lower = 0.9999;
   double upper = 1;

   while (true)
   {
       auto start = std::chrono::system_clock::now();
       auto end = std::chrono::system_clock::now();

       std::time_t end_time = std::chrono::system_clock::to_time_t(end);

       duration = t.elapsed();

       if ( lower < duration && duration < upper)
       {
            std::cout << std::ctime(&end_time) << std::flush;
            lower++;
            upper++;
       }


      if (duration > 10)
      {
        break;
      }
   }


    return 0;
}
