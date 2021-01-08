#include <iostream>
#include <thread>

using namespace std;


//void tFunction(){
//
//    for(int i = 2; i < 20; i+=2){  //prints even
//        cout << i << "\n";
//    }
//
//}

class Fctor {
public:
    void operator()(){
        cout << "Hello";
    }

};
int main()
{
//       thread t1{Fctor{}};
//       t1.join();
    cout<< thread::hardware_concurrency()<<endl;
//    thread t1(tFunction); //t1 starts running // thread object to maintain/control the newly created thread/threads state
//
//
//    for(int i = 1; i < 20; i+=2){ //prints odd
//        cout << i << "\n";
//    }
//
// //    t1.detach() // t1 will run independently
//    t1.join(); // main thread waits for the t1 thread to finish  .,, the other thread will do its job while main thread will do its job ...once the t1 threads job is done we will launch the statements below t1.join()(which depends on the results of the t1 thread)
    return 0;
}
