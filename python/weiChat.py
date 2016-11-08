#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sys
import urllib2


content = urllib2.urlopen(r"http://mp.weixin.qq.com/s?timestamp=1477932062&src=3&ver=1&signature=pRBYWHUlei4Uzt0BxaG6qpjbtNamj2IXxPqG*uAWUQaSJXXYnyYXbjO-p1Ld2Wo4cMRCgCRPZ2-knmYnmyuLwAtaDP6gOZ1gOvPnPrGk72b3fYQ6p5L1CZZCW3NjaMHa6FlwDvNJOe7mMdGTlwHdkoghnGoTtS0f00tjIHGn5Qg=");
print content