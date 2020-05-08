/*
#author: matt ji
#date: 2020-4-22
#purpose: 将梯控数据发送到云端，接收云端控梯指令
  
*/
#include "mqtt.h"
#include "misc.h"
#include "stdio.h"
#include <unistd.h>
#include <thread>
#include "workerthread.h"

using namespace std;

int main(void)
{
    /* Init the signals to catch chld/quit/etc */
    init_signals();
    log(6, "tk cloud version V1.0 2020-5-8-14:03\n");

//初始化程序
    if(setup() != 0)
    {
        log(3,"初始化失败");
        return 1;
    }

    //初始化云端mqtt，需要把状态以及回复publish到云端，并订阅cmd
    mqtt_setup_cloud();
    //初始化本地mqtt，订阅楼层信息以及梯控的回复转发到云端
    mqtt_setup_local();


    while(1){
        //sleep 5s
        std::this_thread::sleep_for(chrono::seconds(5));   
    }
    return 0;
}
