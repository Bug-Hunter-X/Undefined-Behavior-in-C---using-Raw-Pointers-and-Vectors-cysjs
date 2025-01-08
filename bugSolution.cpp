std::vector<int> vec = {1, 2, 3, 4, 5};

// Safe method to access the vector's elements
for (size_t i = 0; i < vec.size(); ++i) {
  //Access elements within bounds
  std::cout << vec[i] << " ";
}

//If you need to use iterators, prefer using std::vector::at() or checking bounds manually.

//If you need to use a raw pointer, allocate the memory dynamically and manage it properly:
int* dynamic_ptr = new int[10];

// ... use dynamic_ptr ...

delete[] dynamic_ptr; // don't forget to deallocate the memory!