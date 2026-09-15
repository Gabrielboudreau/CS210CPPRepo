# README QUESTIONS

### 1.What value does topIndex hold immediately after construction, and why does that specific value make isEmpty() return the right answer with no special-casing?

ANSWER: After Construction topIndex is fed no values in Stack.h. Therefore, since it is an int it was initialized to 0. 

### 2. Walk through push step by step, in words: what happens to data and topIndex, in what order, and why would swapping that order break the stack?

ANSWER: Push() when called pushes a value into data and at the topIndex (top of stack) before increasing topIndex to account for the increase in stack size. 

### 3. Give the time complexity of push, pop, peek, isEmpty, isFull, and size, individually, in Big-O. For each one, justify it by describing what your code actually does, not by naming the general rule for stacks.

ANSWER: 

Push(): O(1) Changes value of elements in stack which doesn't move beyond a 1 dimensional operation

Pop():O(1) No shifting or moving of elements in notation of n

Peek():O(1) No searching or looping, just access of single element

IsEmpty():O(1) Single operation

isFull():O(1) Single Operation

size():O(1) Returns topIndex however no iteration is required

### 4. Exactly what happens in your code when push is called while the stack is full? State what prints (if anything), what gets returned (if anything), and whether topIndex changes. Then say why you chose that behavior.

ANSWER: Nothing prints or is returned since the stack overflows. TopIndex does still get iterated though. This is due to the set array bounds of data limiting our capacity.

### 5. Exactly what happens when pop or peek is called while the stack is empty? Same level of detail as above.

ANSWER: Same response, no return, no print, however topIndex remains 0 due to the conditional keeping it at 0. Preventing this allows for error limitation.

### 6. Your array is fixed at 100 slots. If a caller needed more room than that, what would have to change in your class to support it, and what would it likely cost in terms of the time complexity you gave in question 3?

ANSWER: The way data is stored would need to be dynamic, so push would likely need to allow for O(n) elements to be flexible to increased data size increasing complexity. 

### 7. Without looking anything up: if this stack were built on a linked list instead of an array, name one advantage and one disadvantage that trade-off would bring, based on what you already know about how arrays and pointers behave differently.

ANSWER: The limit to the list size would be fluid allowing for more flexibility and use in larger scale scenarios, however it's increased complexity could lead to worse runtime due to a larger O. 