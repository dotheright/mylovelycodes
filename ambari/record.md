### add service  目录
/var/lib/ambari-server/resources/stacks/HDP/2.6/services


host alert 


script input
/var/lib/ambari-server/resources/host_scripts


hbase_links的实现
/ambari-web/app/views/main/dashboard/widgets/hbase_links.js


其中页面上的 HBase Links 定义在  /ambari-web/app/messages.js 中
'dashboard.widgets.HBaseLinks': 'HBase Links',


host metric
 'hosts.host.summary.hostMetrics':'Host Metrics',

/ambari-web/app/templates/main/host/summary.hbs


dashboard的widgets
/ambari-web/app/views/main/dashboard/widgets/
cluster_metrics_widget.js	     
datanode_live.js
flume_agent_live.js	             
hawqsegment_live.js	             
hbase_average_load.js	         
hbase_links.js	                 
hbase_master_heap.js	         
hbase_master_uptime.js	         
hbase_regions_in_transition.js	 
hdfs_capacity.js	             
hdfs_links.js	                 
links_widget.js	                 
metrics_cpu.js	                 
metrics_load.js	                 
metrics_memory.js	             
metrics_network.js	             
namenode_cpu.js	                 
namenode_heap.js	             
namenode_rpc.js	                 
namenode_uptime.js	             
node_managers_live.js	         
pie_chart_widget.js	             
pxf_live.js	                     
resource_manager_heap.js	     
resource_manager_uptime.js	     
supervisor_live.js	             
text_widget.js	                 
text_widget_single_threshold.js	 
uptime_text_widget.js	         
yarn_links.js	                 
yarn_memory.js	                 


