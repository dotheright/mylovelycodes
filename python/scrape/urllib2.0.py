#!/usr/bin/env python
#coding  = utf-8

import urllib2
<<<<<<< HEAD
url="http://www.baidu.com/s?ie=utf-8&f=3&rsv_bp=1&tn=ubuntuu_cb&wd=mobi%20%E5%BE%AE%E7%9B%98&oq=kate%E3%80%80%E3%80%80%E8%AE%BE%E7%BD%AE%E6%96%87%E4%BB%B6&rsv_pq=8d281a90007679d6&rsv_t=b9b2qGn18HC6V1efae15Ia3xTnFwmElxTy7wgUYgV4xyp9dKkHkLrkwreXJ0%2FplIJQ&rqlang=cn&rsv_enter=1&inputT=16183&rsv_sug3=29&rsv_sug1=20&rsv_sug7=100&rsv_sug2=0&prefixsug=mobi%20wei&rsp=0&rsv_sug4=16364" 
url_sub0 = r'http://vdisk.weibo.com/s/ahLfbselke2yx'
response = urllib2.urlopen(url)
print response.read()
=======
url= r'http://www.zoudupai.com/public/db_backup/20160411180814/user/'
for name in range(0,60001,5000):
    filename = str(name)+".sql"
    response = urllib2.urlopen(url+filename)
    content = response.read()
    fileOpt= open(filename,"w");
    fileOpt.write(content);
    fileOpt.close()
#print response.read()
>>>>>>> d0e5270efc453b6ca253c16ce69d7efa04b6aecc

