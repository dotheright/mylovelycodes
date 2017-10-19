#!/bin/sh
url=http://$1:6188/ws/v1/timeline/metrics
while [ 1 ]
do
millon_time=$(( $(date +%s%N) / 1000000 ))
random=$(( $(date +%N)%1000 ))
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
  
echo $json 
curl -i -X POST -H "Content-Type: application/json" -d "${json}" ${url}
sleep 5
done
# ./new_send.sh master test1 k8s_test  
# ./send.sh slave  test1 sample
# cd /var/lib/ambari-server/resources/stacks/HDP/2.3/services/SAMPLE