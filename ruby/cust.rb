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
     puts "Customer id  #@cust_id"
     puts "Customer name #@cust_name"
     puts "Customer add #@cust_addr"
  end
end

cust1 =Customer.new(1,"bessy","china")
cust2 = Customer. new(2,"jack","England")
cust1.my_print 
cust2.my_print

