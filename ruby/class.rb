#!/usr/bin/ruby -w


$g_glob=2 # $global var

class  Customer
  @@no_of_customer= 0; # @@ class's var
  def initialize( id,name,addr)
     @cust_id =id
     @cust_name =name 
     @cust_addr =addr
  end
  def  my_print()
     puts "Hello,world"
  end
end

cust1 =Customer.new("bessy")
cust2 = Customer. new("jack")
cust1.my_print 
cust2.my_print

