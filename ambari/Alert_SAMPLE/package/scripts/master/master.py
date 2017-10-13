
import sys, os 
import json 
import logging
import platform from resource_management 
import * from resource_management.core.exceptions 
import ComponentIsNotRunning from resource_management.core.environment 
import Environment from resource_management.core.logger 
import Logger 

class Master(Script): 
	def install(self, env):
		print "install my master" 
	def configure(self, env): 
		print "configure this service here" 
	def start(self, env): #解析 service 的配置参数 
	    config = Script.get_config()
	    AMBARI_USER =config['configurations']['ambari-server-env']['AMBARI_USER'] 
	    AMBARI_USER_PWD =config['configurations']['ambari-server-env']['AMBARI_USER_PASSWORD'] 
	    AMBARI_SERVER_HOST =config['configurations']['ambari-server-env']['AMBARI_SERVER_HOST'] 
	    AMBARI_WEB_LISTEN_PORT = config['configurations']['ambari-server-env']['AMBARI_WEB_LISTEN_PORT'] 
	    print "Ambari User:" + AMBARI_USER + " \nAmbari user password: " + AMBARI_USER_PWD + "\nServer: " +AMBARI_SERVER_HOST + "\nLinsten port " + str(AMBARI_WEB_LISTEN_PORT) 
	    cmd = "mkdir -p /var/run/guoqingyao" 
	    os.system(cmd) 
	    print "start the service" 
	 def stop(self, env): 
	 	cmd ="rm -rf /var/run/guoqingyao" 
	 	os.system(cmd) 
	 	print "stop the service" 
	 def status(self, env):
	 	cmd = "echo 'check one time' > /tmp/my.log" 
	 	os.system(cmd) cmd = "ls /var/run/guoqingyao" 
	 	result = os.system(cmd) 
	 	if result != 0: 
	 		raise ComponentIsNotRunning()
if __name__ == "__main__": 
	Master().execute()