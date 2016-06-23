# File Name: mycommit.sh
# Author: guoqingyao
# mail: stepbystepto@163.com
# Created Time: 2016年06月23日 星期四 18时33分36秒
#########################################################################
#!/bin/bash
git pull oringe master;
git add -A;
git commit -m $1 ;
git push oringe master;

