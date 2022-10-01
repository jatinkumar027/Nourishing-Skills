from collections import Counter

def find_most_occ_character(input):
  
  """
  This function finds the most occuring character and return its value along with its count as a dictionary
  Input : input -> input string
  Output : dictionary item
  """

	w_count_dictionary = Counter(input)

	# Finding maximum occurrence of a character
	max_occuring_char = max(w_count_dictionary.values())
	index_in_dictionary = w_count_dictionary.values().index(max_occuring_char)
	
	print w_count_dictionary.items()[index_in_dictionary]

# Driver code
if __name__ == "__main__":
	input = 'Iamateststring'
	find_most_occ_character(input)
