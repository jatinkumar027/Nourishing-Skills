def find_maximum_height(coins):
  """
  This function finds maximum height when coins are arranged in a triangle.
  Input : coins -> no. of coins
  Output : maximum height
  """
	n = 1 + 8*coins
	max_height = (-1 + square_root(n)) / 2
	return int(max_height)


def square_root(n):
  """
  This function finds the squareroot of a number
  Input : n -> number for which this function will return square root
  Output : square root of n
	
  x = n
	y = 1
  e = 0.000001 #for accuracy
	
  while (x - y > e):
		x = (x + y) / 2
		y = n/x	
	return x


# driver code
coins = 12
print(find_maximum_height(coins))
