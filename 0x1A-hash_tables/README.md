0x1A. C - Hash tables

Author : AUSTINE ABINE

# Hash Table

A hash table is a data structure that allows efficient insertion, deletion, and retrieval of key-value pairs. It uses a hash function to map keys to array indices, providing fast access to stored values.

## Usage

To use the hash table implementation, follow these steps:

1. Include the `hash_tables.h` header file in your code:
   
   `````
   #include "hash_tables.h"
   ```

2. Create a hash table using the `hash_table_create` function, specifying the desired size:

   ````
   hash_table_t *ht = hash_table_create(10);
   ```

3. Insert key-value pairs into the hash table using the `hash_table_set` function:

   ````
   hash_table_set(ht, "key1", "value1");
   hash_table_set(ht, "key2", "value2");
   ```

4. Retrieve values from the hash table using the `hash_table_get` function:

   ````
   char *value1 = hash_table_get(ht, "key1");
   char *value2 = hash_table_get(ht, "key2");
   ```

5. Print the contents of the hash table using the `hash_table_print` function:

   ````
   hash_table_print(ht);
   ```

6. Delete the hash table and free the allocated memory using the `hash_table_delete` function:

   ````
   hash_table_delete(ht);
   ```

## Implementation Details

The hash table implementation consists of the following components:

`hash_table_t`: A struct representing the hash table, containing the size and an array of `hash_node_t` pointers.

`hash_node_t`: A struct representing a node in the hash table, containing the key, value, and a pointer to the next node (for handling collisions).

`hash_table_create`: Creates a new hash table with the specified size.

`hash_djb2`: A hash function (DJB2) used to compute the hash value of a given string.

`key_index`: Computes the index in the hash table array for a given key.

`hash_table_set`: Inserts or updates a key-value pair in the hash table.

`hash_table_get`: Retrieves the value associated with a given key from the hash table.

`hash_table_print`: Prints the key-value pairs of the hash table.

`hash_table_delete`: Deletes the hash table and frees the allocated memory.