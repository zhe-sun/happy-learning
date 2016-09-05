Lazy initialization
=
**Definition**
___
lazy initialization is the tactic of delaying the creation of an object, the calculation of a value, or some other expensive process until the first time it is needed.[Reference](https://en.wikipedia.org/wiki/Lazy_initialization)
		
**Implementation**
___
	1. Using a factory method to get instances of a class
	2. Store the instances in a map, so you get the same instance the next time you ask for an instance with same parameter
	3. Using lazy initialization to instantiate the object the first time it is requested
**Attention**
___
	1. In multithreaded code, access to lazy-initialized objects/state must be synchronized to guard against a race condition
	2. In heavily imperative languages this pattern carries hidden dangers, as does any programming habit that relies on shared state.

**Code Implementation Example** 
(happy-learning/software-design-patterns/lazy-initialization/cplusplus/)
____
	CDaily
	Create this instance with favor type specified when used.
	CIFavor
	Offer Factory method to create concrete object could be used in CDaily.
	CApple,CBook
	Just two implementation of CIFavor.
