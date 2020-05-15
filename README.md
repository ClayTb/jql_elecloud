Date: 2020-5-15:  
Author: matt ji  
Purpose: 对接平台云的同时，也对接梯控云  
+++++++++++++++++++++++++++   
###协议  
这里模拟云端发送呼梯：
mosquitto_pub -t cmd/IotApp/02:17:01:ee:c6:be/ping/plain/5ea2b243b3098dd6a9d34d5e  -m '{"ID":"8888", "requestID":"6666", "cmd":"call", "floorNum_r":"5"}'  
开门
mosquitto_pub -t cmd/IotApp/02:17:01:ee:c6:be/ping/plain/5ea2b243b3098dd6a9d34d5e  -m '{"ID":"8888", "requestID":"6666", "cmd":"open", "duration":"15"}'  

1. 本地增加自动开门10秒
	时间可以配置，做到config.ini里
	AUTO_OPEN:10

