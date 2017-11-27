import os
import sys
from resource_management import Script

class Master(Script):
    def install(self, env):
        print 'Install the Srv Master';
    def stop(self, env):
        print 'Stop the Srv Master';
    def start(self, env):
        print 'Start the Srv Master';
    def status(self, env):
        print 'Status of the Srv Master';
    def configure(self, env):
        print 'Configure the Srv Master';

if __name__ == "__main__":
    Master().execute()
