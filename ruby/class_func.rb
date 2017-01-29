#!/usr/bin/ruby  

class Class_fun
    def func1
       arg1 ="hello"
       arg2="ruby"
       puts "#{arg1} #{arg2}"
     end
     def func2
       puts "test2"
     end

end

test1 =Class_fun.new
test2 =Class_fun.new

test1.func1
test2.func2
