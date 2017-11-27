import os
import sys
from resource_management import Script

class Slave(Script):
    def install(self, env):
        print 'Install the Sample Slave';
    def stop(self, env):
        print 'Stop the Sample Slave';
    def start(self, env):
        print 'Start the Sample Slave';
    def status(self, env):
        print 'Status of the Sample Slave';
    def configure(self, env):
        print 'Configure the Sample Slave';

if __name__ == "__main__":
    Slave().execute()
