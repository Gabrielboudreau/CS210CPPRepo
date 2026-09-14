# README QUESTIONS

### 1.What value does topIndex hold immediately after construction, and why does that specific value make isEmpty() return the right answer with no special-casing?

ANSWER: After Construction topIndex is fed no values in Stack.h. Therefore, since it is an int it was initialized to 0. 

### 2. Walk through push step by step, in words: what happens to data and topIndex, in what order, and why would swapping that order break the stack?

ANSWER: Push() when called pushes a value into data and at the topIndex (top of stack) before increasing topIndex to account for the increase in stack size. 

### 3. Give the time complexity of push, pop, peek, isEmpty, isFull, and size, individually, in Big-O. For each one, justify it by describing what your code actually does, not by naming the general rule for stacks.

ANSWER: 

Push():

Pop():

Peek():

IsEmpty():

isFull():

size():

### 4. Exactly what happens in your code when push is called while the stack is full? State what prints (if anything), what gets returned (if anything), and whether topIndex changes. Then say why you chose that behavior.

ANSWER: 

### 5. Exactly what happens when pop or peek is called while the stack is empty? Same level of detail as above.

ANSWER: 

### 6. Your array is fixed at 100 slots. If a caller needed more room than that, what would have to change in your class to support it, and what would it likely cost in terms of the time complexity you gave in question 3?

ANSWER:

### 7. Without looking anything up: if this stack were built on a linked list instead of an array, name one advantage and one disadvantage that trade-off would bring, based on what you already know about how arrays and pointers behave differently.

ANSWER: 