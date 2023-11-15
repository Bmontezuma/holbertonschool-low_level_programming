![Borderlands 3](https://media3.giphy.com/media/mFZKWLoWj2woWrbRdQ/giphy.gif?cid=ecf05e479ialzj82z8j1d7mxoizbydje4yh4hn7e8h8qz8yp&ep=v1_gifs_search&rid=giphy.gif&ct=g)


AUTHOR
[@Bmontezuma](https://github.com/Bmontezuma)
<PROTOTYPES>
  <summary>PROTOTYPES</summary>

  - size_t print_dlistint(const dlistint_t *h);
  - size_t dlistint_len(const dlistint_t *h);
  - dlistint_t *add_dnodeint(dlistint_t **head, const int n);
  - dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
  - void free_dlistint(dlistint_t *head);
  - dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
  - int sum_dlistint(dlistint_t *head);
  - dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
  - int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);



</details>
<summery

### Connect with Me

[![Twitter](https://img.shields.io/twitter/follow/BMontezuma01?style=social)](https://twitter.com/BMontezuma01)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-BrandonMontezuma-blue)](https://www.linkedin.com/feed/)


# HOLBERTON LOW LEVEL PROGRAMMING
# Doubly Linked List

<RESOURCES>
  <summary>RESOURCES</summary>

https://intranet.hbtn.io/rltoken/4k13B5KYF6vxzGZpOn4lXQ
</details>

<GENERAL>
  <summary>GENERAL</summary>
  
  - Allowed editors: vi, vim, emacs
  - All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
  - All your files should end with a new line
  - A README.md file, at the root of the folder of the project is mandatory
  - Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
  - You are not allowed to use global variables
  - No more than 5 functions per file
  - The only C standard library functions allowed are malloc, free, printf and exit
  - In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
  - The prototypes of all your functions should be included in your header file called lists.h
  - Don’t forget to push your header file
  - All your header files should be include guarded

</details>


More Info
Please use this data structure for this project:

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;



<QuIZ>
  <summary>details</summary>

  - Question #0
In a doubly linked list, what are possible directions to traverse it? (select all possible answers)


X - Forward


X - Backward



  - Question #1
In a doubly linked list, what’s the “head” of a linked list?


   It’s the node with the pointer to the next equals to NULL


X - It’s the node with the pointer to the previous equals to NULL




</details>

