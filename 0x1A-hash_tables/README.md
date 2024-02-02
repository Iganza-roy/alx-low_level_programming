![hash tables](https://th.bing.com/th/id/OIP.I96ohlDIQBoTr5he3e5nMQHaEK?rs=1&pid=ImgDetMain)

# Hash tables
A hash table is a data structure that uses a hash function to map keys to indices of an array. It allows for efficient insertion, deletion, and retrieval of data.
- **Working:** The hash function is applied to each key, determining the index where the corresponding value will be stored or retrieved in the array.
- **Usage:** You can use hash tables to implement associative arrays, sets, or caches. In C, you might use an array of linked lists or other collision resolution methods to handle multiple keys mapping to the same index.

## A hash Function
A hash function is a mathematical function that takes an input (or 'key') and produces a fixed-size string of characters, which is typically a hash code or hash value. The purpose of a hash function is to convert data of arbitrary size into a fixed-size value, making it easier and faster to search for or retrieve data from a data structure like a hash table.

### what is Collision?
A collision occurs when two different keys hash to the same index. To handle collisions, there are mainly two approaches:

- **Separate Chaining:** Each index of the hash table is a linked list, and collisions are resolved by appending elements to the corresponding list.

- **Open Addressing:** All elements are stored directly in the array. When a collision occurs, the algorithm searches for the next available slot in the array according to a probing sequence.

### Applications of Hash tables
- **Databases:** Hash indexes for quick data retrieval.
- **Caching:** Storing frequently accessed data for quick access.
- **Compiler Symbol Tables:** Storing variable and function names.
- **Network Routing Tables:** Mapping IP addresses to route information.
- **Spell Checkers:** Quickly checking if a word is spelled correctly.
