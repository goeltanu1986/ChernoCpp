//
//  ThreadDemo.cpp
//  ChernoCpp
//
//  Created by Tanu Goel on 7/12/20.
//  Copyright © 2020 None. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <thread>

using namespace std;

void foo()
{
    //    std::this_thread::sleep_for(std::chrono::milliseconds(5000));
    std::cout << "Hello from foo" << std::endl;
}

void bar()
{
    //    std::this_thread::sleep_for(std::chrono::milliseconds(5000));
    std::cout << "Hello from bar" << std::endl;
}

void run()
{
    std::thread foo_thread(foo);
    std::thread bar_thread(bar);
    bar_thread.detach();
    std::cout << "this is after bar detach " << std::endl;

    foo_thread.join();
    std::cout << "this is after foo join " << std::endl;
}
