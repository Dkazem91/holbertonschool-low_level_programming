## 0x19. C - Hash tables

**What you should learn from this project**

       At the end of this project you are expected to be able to explain
       to anyone, without the help of Google:

* What is a hash function
* what makes a good hash function
* What is a hash table, how do they work and how to use them
* What is a collison and what are the main ways of dealing with collisions
  in the context of a hash table
* What are the advantages and drawbacks of using hash tables
* What are the most common use cases of hash tables

**Exercises**

**0 >>> ht ={}**

    	Write a function that creates a hash table

* Returns a pointer to the newly created hash table
* if something went wrong, your function should return NULL

**1.djb2**

	Write a hash function implementing the djb2 algorithm

* You are allowed to copy and past the function from this page<>

**2. key -> index**

     Write a function that gives you the index of a key.

* Prototype: unsigned long int key_index(const unsigned char *key,
  unsigned long int size);
  * where key is the key
  * and size is the size of the array of the hash table
* This function should use the hash_djb2 function that you wrote earlier
* Returns the index at which the key/value pair should be stored in the
  array of the hash table
* You will have to use this hash function for all the next tasks

**3. >>> ht['betty'] = 'holberton'**

     Write a function that adds an element to the hash table.

* Prototype: int hash_table_set(hash_table_t *ht, const char *key,
  const char *value);
  * Where ht is the hash table you want to add or update the key/value to
  * key is the key. key can not be an empty string
  * and value is the value associated with the key. value can be an empty string
* Returns: 1 if it succeeded, 0 otherwise
* In case of collision, add the new node at the beginning of the list

**4. >>> ht['betty']**

     Write a function that retrieves a value associated with a key.

* Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);
  * where ht is the hash table you want to look into
  * and key is the key you are looking for
* Returns the value associated with the element, or NULL if key couldn’t be found

**5. >>> print(ht)**

     Write a function that prints a hash table.

* Prototype: void hash_table_print(const hash_table_t *ht);
  * where ht is the hash table
* You should print the key/value in the order that they appear in the array
  of hash table
  * Order: array, list
* Format: see example
* If ht is NULL, don’t print anything

**6. >>> del ht**

     Write a function that deletes a hash table.

* Prototype: void hash_table_delete(hash_table_t *ht);
  * where ht is the hash table