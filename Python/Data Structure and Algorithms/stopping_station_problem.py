def is_possible_stopping_station( p, n):
  """
  This function finds the possible number of ways in which a train can be made to stop at p out of n intermediate stations so that no two stopping stations are consecutive
  Input : p -> no . of non consecutive stations, 
          n -> total no. of stations
  Output : if possible, returns count of ways, else -1
  """
	num = 1
	dem = 1
	pos = p

	# selecting pos number of positions
	# out of 'n - pos + 1'
	while p != 1:
		dem *= p
		p-=1
	
	t = n - pos + 1
	while t != (n-2 * pos + 1):
		num *= t
		t-=1
	if (n - pos + 1) >= pos:
		return int(num/dem)
	else:
		return -1

# driver code
num = is_possible_stopping_station(4, 12)
if num != -1:
	print(num)
else:
	print("No Way Possible")
