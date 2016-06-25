#!/usrbin/env python
#create a mapping of state to abbreviation
states = {
 'oregon':'or',
 'florida':'fl',
 'california':'ca',
 'new york':'ny',
 'michigan': 'mi'}

# create a basic set of states and some cities in them
cities = {
      'ca':'san francisco',
      'mi':'detroit',
      'fl':'jacksonville'
      }

# add some more cities
cities['ny'] = 'new york'
cities['or'] = 'portland '

# print out some cities
print '-' * 10
print "ny state has: ", cities['ny']
print "or state has: ", cities['or']

# print some states
print '-' * 10
print "michigan's addreviation is: ", states['michigan']
print "florida's addreviation is: ", states['florida']

# do it by using the states then cities dict
print '-' * 10
print "michigan has: ", cities[states['michigan']]
print "florida has: ", cities[states['florida']]

#print every state addreviation
print '-' * 10
for state, addrev in states.items():
	print "%s is addreviated %s" % (state,addrev)

# print every city in state
print '-' * 10
for addrev,city in cities.items():
	print "%s has the city %s" % (addrev,city)

# now do both at same time
print '-' * 10
for state,addrev in states.items():
	print "%s state is addreviated %s and has city %s" % (state,addrev,cities[addrev])

print '-' * 10
#stfely get a addreviation by state that might not be there
state = states.get('texa',None)

if not state:
	print "sorry, no texa."

#get a city with a default value
city = cities.get('tx','does not exist')
print "the city for the state 'tx' is: %s" % city
