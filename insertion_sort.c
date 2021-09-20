//We use long long as long long is 8 bytes, which all values are according to the project docs


/*
 * This procedure takes three parameters, the address of an array of ints, the index of the final element in the array, and a position in the array.  
 * It overwrites the final element, shifting intermediate elements to the right, leaving a whole at the position.
 * addr 
 */
void shift_right(long long[] addr, long long pos, long long final) {
	
}

/*
 * This procedure takes three parameters, the address of an array of sorted ints, a value, and the index of the last element in the array.  
 * It searches the array for the sorted position of the value and returns that index.
 */
void find_sorted_pos(long long[] addr, long long val, long long final) {
	
}

/*
 * This procedure takes three parameters, the address of a partially-sorted array of ints, the index of the first item in the array that is not in sorted position, 
 * and the index of the last element of the array.  It moves the first unsorted element into its sorted position, shifting elements to the right as necessary such that the 
 * entire element is in sorted order and no data is lost.
 */
void insert_sorted_pos(long long[] addr, long long val, long long final) {
	
}

/*
 * This procedure takes two parameters, the address of an array of ints and the number of elements in the array.  It sorts the array using the insertion sort algorithm.
*/
void insertion_sort(long long *a, long long n) {
	
}

/*
 * create an array at address addr of length elements containing length unique integers in reverse sorted order
 */
void fill(long long[] addr, long long n) {
	
}

//Calls fills to create a reverse sorted array then calls insertion_sort to sort it.
int main(int argc, char *argv[]) {
	
}