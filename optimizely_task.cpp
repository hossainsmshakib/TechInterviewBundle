// Problem Description:

/*
This is a fun problem I always enjoy walking through with people. It's influenced by a problem I had to solve in my career which may not need super advanced coding skills or knowledge of data structures, but needs some good old fashioned thinking and problem solving. Submit your solution and I'll reach out to you if I find it interesting!

Here's the problem:

Imagine you're working at T-shirt factory and you manage orders by packing a bulk amount of shirts into a certain amount of bags. Meaning, for every order you have a specification of how many bags you have to fill, and a fixed number of shirts to fill them with.

The requirement is to be able to distribute the shirts in the bag as evenly as possible. For example, if there are 100 shirts, and 10 bags, then each bag will get 10 shirts. However, sometimes the shirt factory will have production errors, and it might produce the wrong number of shirts. It's not going to be 200 shirts instead of 100, but it will have some minor deviation from the original number.

Just to clarify, for every order there is a fixed number of shirts and fixed number of bags, you will just have to distribute the shirts across the bags as evenly as possible.

Write a function to solve this problem. Define the function name, input parameters and output type as you wish.

Constraints:
- The number of shirts and number of bags will always be known
- The size of the bag does not matter
- You have to use all the bags, and cannot add or remove any bags
- The goal is to minimise the deviation of number of shirts in each bag, i.e. as even as possible
- You should come up with your own test cases

Some things in this problem are purposefully left vague to see how you think about this problem. Think of what you would do if you physically had the shirts and bags in front of you, and what would the most efficient way to do this would be.
 */

#include <iostream>
#include <vector>
using namespace std;

std::vector<int> distributeShirts(int numShirts, int numBags)
{

  // Calculate number of shirts per bag
  int shirtsPerBag = numShirts / numBags;

  // Handle extra shirts if division has remainder
  int remaining = numShirts % numBags;

  // Create vector to hold number of shirts per bag
  std::vector<int> bags(numBags);

  // Distribute shirtsPerBag to each bag
  for (int i = 0; i < numBags; i++)
  {
    bags[i] = shirtsPerBag;
  }

  // Distribute remaining shirts to first few bags
  for (int i = 0; i < remaining; i++)
  {
    bags[i]++;
  }

  return bags;
}


int main() {

  // Test case 1
  vector<int> bags = distributeShirts(100, 10);

  // Test case 2 
  bags = distributeShirts(105, 10);

  // Print results
  for(int i=0; i<bags.size(); i++) {
    cout << "Bag " << i << ": " << bags[i] << " shirts" << endl; 
  }

  return 0;
}

/* // Unit test
#include <iostream>
#include <vector>
#include "task.cpp"

using namespace std;

// Test distributeShirts 
void test_distributeShirts() {

  // Normal case
  int numShirts = 100;
  int numBags = 10;
  vector<int> bags = distributeShirts(numShirts, numBags);
  assert(bags.size() == numBags);
  for(int i=0; i<bags.size(); i++) {
    assert(bags[i] == 10); 
  }

  // Edge case - 0 bags
  numBags = 0;
  bags = distributeShirts(numShirts, numBags);
  assert(bags.size() == 0);

  // Edge case - 0 shirts
  numShirts = 0;
  numBags = 10;
  bags = distributeShirts(numShirts, numBags);
  assert(bags.size() == numBags);
  for(int i=0; i<bags.size(); i++) {
    assert(bags[i] == 0);
  }

  // Remainder case
  numShirts = 105;
  numBags = 10;
  bags = distributeShirts(numShirts, numBags);
  assert(bags.size() == numBags);
  for(int i=0; i<5; i++) {
    assert(bags[i] == 11);
  }
  for(int i=5; i<bags.size(); i++) {  
    assert(bags[i] == 10);
  }

}

int main() {
  test_distributeShirts();
  return 0;
}
 */

// justification for my solution
/* 
The problem is intentionally a bit vague on details, so I made some assumptions:

1. The goal is to distribute shirts as evenly as possible among the bags.
2. The exact bag size or capacity is not specified, so I assumed it was not a limiting factor.
3. The order of distribution does not matter, just the final counts per bag.

My approach aimed for an efficient algorithm by:

1. Dividing total shirts by number of bags to get the base distribution amount.
2. Using the modulus of that division to get remainder shirts.
3. Distributing the base amount to all bags first.
4. Then distributing remainder to the first few bags.
5. This avoids iterating through all bags multiple times.

The code implements this efficiently:

1. Uses integer division and modulus operators to calculate amounts.
2. Pre-allocates the output vector once rather than growing.
3. Uses simple loops over indexes rather than anything fancy.
4. Does the minimum computations needed and avoids repeated work.

For physical distribution, I'd probably:

1. Sort shirts into stacks of equal height for each bag's base amount.
2. Count out remainder shirts into a separate stack.
3. Combine remainder stack into the first few bag stacks.

Testing wise, I focused on:

1. Validating the algorithmic logic, not implementation details.
2. Covering edge cases like zero shirts or bags.
3. Testing key aspects like vector size and per-bag counts. */

