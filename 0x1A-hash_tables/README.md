# C-Hash-Tables Project README

## Introduction

Welcome to the C-Hash-Tables project! This README provides an overview of the project, including the concepts and code discussed during our discussions.

## Contents

1. [Hash Function](#hash-function)
2. [Hash Table](#hash-table)
3. [Collision Handling](#collision-handling)
4. [Advantages and Drawbacks](#advantages-and-drawbacks)
5. [Common Use Cases](#common-use-cases)

---

## Hash Function

A hash function is a fundamental concept in this project. It's a mathematical function that takes an input (key) and returns a fixed-size string of characters (hash value). In C, you can implement hash functions to map keys to specific indices in a hash table.

### Code Example

```c
// Sample hash function in C
int customHash(char* key) {
    int hash = 0;
    for (int i = 0; key[i] != '\0'; i++) {
        hash += key[i];
    }
    return hash % TABLE_SIZE;
}
```

## Hash Table

A hash table is a data structure used for efficient data retrieval and storage. It uses a hash function to map keys to specific locations in an array. In our project, we've implemented a basic hash table with separate chaining for collision resolution.

### Code Example

```c
// Sample hash table in C with separate chaining
struct KeyValue {
    char* key;
    int value;
    struct KeyValue* next;
};

struct KeyValue* hashTable[TABLE_SIZE];
```

## Collision Handling

Collisions occur when two different keys hash to the same index in the hash table. We've discussed two common collision resolution methods: separate chaining and open addressing. In our project, we used separate chaining to handle collisions.

### Code Example

```c
// Handling collisions with separate chaining
if (hashTable[index] == NULL) {
    hashTable[index] = newPair;
} else {
    // Collision occurred, add to the linked list
    struct KeyValue* current = hashTable[index];
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newPair;
}
```

## Advantages and Drawbacks

Hash tables offer fast data retrieval and insertion, making them suitable for various applications. However, they have advantages and drawbacks to consider.

### Advantages

- Fast retrieval
- Dynamic sizing
- Versatile key types
- Efficient for search and insertion

### Drawbacks

- Hash collisions
- Memory consumption
- Deterministic behavior
- No inherent ordering
- Hash function selection

## Common Use Cases

Hash tables find application in many domains due to their efficiency in data retrieval. Some common use cases include:

- Data caching
- Dictionaries and sets
- Symbol tables
- Database indexing
- Password storage
- Caching DNS queries
- Hash-based file systems
- Implementing hash functions
