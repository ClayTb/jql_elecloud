#ifndef _MQTT_H
#define _MQTT_H

#include <map>
#include <string>
#include "misc.h"
#include <mosquitto.h>
using namespace std;
void mqtt_setup_local();
int cloudThread();
void mqtt_setup_cloud();
int localThread();

extern Queue<string> cloud_state_q, cloud_rsp_q;
extern Queue<string> local_q;


extern std::map<string, string> topic;
extern std::map<string, string> cloud_topic;
extern string MAC;

extern struct mosquitto *mosq_c, *mosq_l;
extern int connected_c, connected_l;

int mqtt_send(struct mosquitto *mosq, string topic, const char *msg);


#endif
