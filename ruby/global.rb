#!/usr/bin/ruby        #????global.rb

$global_var = 10        #define global var with $
class Class1
  def print_global
     puts "Global variable in Class1 is #$global_var."
     # when  you  want print a var,you shoule put a # in  a string  
  end
end
class Class2
  def print_global
     puts "Global variable in Class2 is #$global_var."
  end
end

class1obj = Class1.new    # creat  a object
class1obj.print_global    #  call  global var
class2obj = Class2.new
class2obj.print_global
