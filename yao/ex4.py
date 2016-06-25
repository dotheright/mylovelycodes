#!/usr/bin/python

cars=100
space_in_car = 4 ;
drivers = 30
passengers =90
cars_drivern=drivers
cars_not_drivern = cars -drivers

carpool_capacity =cars_drivern*space_in_car
average_passenge_per_car=passengers/cars_drivern

print"There are",cars,"cars available."
print "There are only",drivers,"drivers available."
print "There will be",cars_not_drivern,"empty cars today."
print "We have ",passengers,"to car pool taday"
print "We need to put about",average_passenge_per_car,"each car"