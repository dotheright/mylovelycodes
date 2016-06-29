#!/usr/bin/env python
#coding  = utf-8

import urllib2
url_baidu_search="http://www.baidu.com/s?ie=utf-8&f=3&rsv_bp=1&tn=ubuntuu_cb&wd=mobi%20%E5%BE%AE%E7%9B%98&oq=kate%E3%80%80%E3%80%80%E8%AE%BE%E7%BD%AE%E6%96%87%E4%BB%B6&rsv_pq=8d281a90007679d6&rsv_t=b9b2qGn18HC6V1efae15Ia3xTnFwmElxTy7wgUYgV4xyp9dKkHkLrkwreXJ0%2FplIJQ&rqlang=cn&rsv_enter=1&inputT=16183&rsv_sug3=29&rsv_sug1=20&rsv_sug7=100&rsv_sug2=0&prefixsug=mobi%20wei&rsp=0&rsv_sug4=16364" 
url_weipan= r'http://vdisk.weibo.com/s/ahLfbselke2yx'
url_weipan_sub='http://vdisk.weibo.com/s/ahLfbselo3Adh?category_id=12&parents_ref=ahLfbselke2yx'
response = urllib2.urlopen(url_weipan_sub)
print response.read()

