#ifndef _THREAD_h
#define _THREAD_h
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string>
#include <iostream>
#include <pthread.h>  //pthread_create/join/pthread_exit 
#include <chrono>
#include <thread>
using namespace std;
int localStateThread();
int localRspThread();
int cloudThread();
int setup();
string parseCloud(string data);

#endif
