
def tower_of_hanoi(n , source, destination, aux):
  """
  This function solves tower of hanoi problem
  Input : n -> no. of disks
          source -> source disk
          destination -> destination disk
          aux -> auxiliary disk
  Output : none -> As it prints the sequence of steps to solve the problem using recursion
  """
	if n==1:
		print ("Move A disk from source", source, "to destination", destination)
		return
	tower_of_hanoi(n-1, source, aux, destination)
	print ("Move disk from source", source, "to destination", destination)
	tower_of_hanoi(n-1, aux, destination, source)
		
# Driver code
n = 3
tower_of_hanoi(n, 'A', 'B', 'C')
