#!/usr/bin/env python
#-*- encoding: utf-8 -*-

import os

from pyinotify import WatchManager,Notifier, ProcessEvent, \
IN_DELETE, IN_CREATE,IN_MODIFY,IN_ATTRIB,IN_CLOSE_WRITE,IN_MOVED_FROM,IN_MOVED_TO,IN_DELETE_SELF,IN_MOVE_SELF



class EventHandler(ProcessEvent):
    """事件处理"""
    def process_IN_CREATE(self, event):
        print  "Create file: %s " %  os.path.join(event.path,event.name)
    def process_IN_MODIFY(self, event):
        print  "Modify file: %s " %  os.path.join(event.path,event.name)
    def process_IN_ATTRIB(self, event):
        print  "ATTRIB file: %s " %  os.path.join(event.path,event.name)
    def process_IN_CLOSE_WRITE(self, event):
        print  "CLOSE_WRITE file: %s " %  os.path.join(event.path,event.name)
    def process_IN_MOVED_TO(self, event):
        print  "MOVED_TO file: %s " %  os.path.join(event.path,event.name)
    def process_IN_DELETE(self, event):
        print  "Delete file: %s " %  os.path.join(event.path,event.name)
    def process_IN_MOVED_FROM(self, event):
        print  "MOVED_FROM file: %s " %  os.path.join(event.path,event.name)
    def process_IN_DELETE_SELF(self, event):
        print  "DELETE_SELF file: %s " %  os.path.join(event.path,event.name)
    def process_IN_MOVE_SELF(self, event):
        print  "IN_MOVE_SELF file: %s " %  os.path.join(event.path,event.name)

def FSMonitor(path='.'):
    wm = WatchManager() 
    mask = IN_DELETE | IN_CREATE | IN_MODIFY | IN_ATTRIB | IN_CLOSE_WRITE | IN_MOVED_FROM | IN_MOVED_TO | IN_DELETE_SELF | IN_MOVE_SELF
    notifier = Notifier(wm, EventHandler())
    wm.add_watch(path, mask,auto_add=True,rec=True)
    print 'now starting monitor %s'%(path)
    while True:
        try:
            notifier.process_events()
            if notifier.check_events():
                notifier.read_events()
        except KeyboardInterrupt:
            notifier.stop()
            break

if __name__ == "__main__":
    FSMonitor('/home/dotheright/mylovelycodes/python')