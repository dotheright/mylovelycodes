#!/bin/sh
url=http://$1:6188/ws/v1/timeline/metrics
while [ 1 ]
do
millon_time=$(( $(date +%s%N) / 1000000 ))
random=`expr $RANDOM % 10`
json="{
 \"metrics\": [
 {
 \"metricname\": \"$2\",
 \"appid\": \"$3\",
 \"hostname\": \"$1\",
 \"timestamp\": ${millon_time},
 \"starttime\": ${millon_time},
 \"metrics\": {
 \"${millon_time}\": ${random}
 }
 }
 ]
}"
  
echo $json |tee -a /root/my_metric.log
curl -i -X POST -H "Content-Type: application/json" -d "${json}" ${url}
sleep 5
done
# ./send.sh slave test1 sample
# cd /var/lib/ambari-server/resources/stacks/HDP/2.3/services/SAMPLE

curl -i -X POST -H "Content-Type: application/json" -d @test_metrics.json  http://master:6188/ws/v1/timeline/metrics

#!/bin/env python

json='{
    "AlertDefinition": {
        "service_name": "SZWTEST",
        "component_name": "SZW_MASTER",
        enabled" : true, "interval" :1, "label" : "NewtestAlert", "name" : "example_test_alert", "scope" : "ANY", "source" : {"default_port" : 4000, "reporting" : { "ok" : { "text" : "TCPOK-{
            0: .4f
        }responseonport{
            1
        }" }, "warning" : { "text" : "TCPOK-{
            0: .3f
        }sresponseonport{
            1
        }", "value" : 1.0 },"critical" : { "text" : "Connectionfailed: {
            0
        }onhost{
            1
        }: {
            2
        }", "value" : 6.0 } }, "type": "PORT", "uri" : {{zwshen71:4000}}"
    }
}
}'


curl -u admin:admin -H "X-Requested-By: ambari" -X POST http://localhost:8080/api/v1/mycluster/master/alert_definitions -d '${json}'



curl -u admin:admin -i -H 'X-Requested-By: ambari' -X POST -d @alerts.json http://localhost:8080/api/v1/mycluster/master/alert_definitions;
