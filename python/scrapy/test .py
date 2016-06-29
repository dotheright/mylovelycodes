#!/usr/bin/env python
#-*-coding:utf-8-*-



fileOpt=open("index","r")

#for line in fileOpt.readlines():
#    part =line.split("]")
#    if None != part[1]:
#        targe=part[1].lstrip().split(" ")[0]
#        print targe
#        url=r"http://www.zoudupai.com/public/upload/annex/"+targe
#        response = urllib2.urlopen(url.encode('utf-8'),timeout=300)
#        wfile=open(r"book/"+targe,"w")
#        wfile.write(response.read())
#        wfile.close()        
#    #print part2[1]

mm = 0.0

for line in fileOpt.readlines():
    part =line.rstrip().split(" ")
    if None != part[-1]:
        if "M" in part[-1]:
            one =float(part[-1].replace("M"," ").rstrip());
            if  one > mm:
                mm =one
print mm          

fileOpt.close()