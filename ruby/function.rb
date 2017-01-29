#!/usr/bin/ruby  

def test(arg1 ="hello",arg2="ruby")
   puts "#{arg1} #{arg2}"
end

test

def re_test()
   i = 20;
   j = 30;
   k =  i+j;
   return  k;
end

re_var= re_test

puts "return #{re_var} "
#puts "return   "+re_var

def decla_te( *decla)
    puts "The number of parameter is #{decla.length}"
    for i in  0... decla.length
       puts "The parameter is #{decla [i]}"
    end
end

decla_te "1_input","2_input","3_input"

