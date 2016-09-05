Builder Pattern
-Definition: The intent of the Builder design pattern is to separate the construction of a complex object from its representation. By doing so the same construction process can create different representations.[Reference: https://en.wikipedia.org/wiki/Builder_pattern]
-Advantages
--Allows you to vary a product.s internal representation.
--Encapsulates code for construction and representation.
--Provides control over steps of construction process.
-Disadvantages
--Requires creating a separate ConcreteBuilder for each different type of Product.


In this simple Example(cplusplus/):
The implementation shows the both "Allows you to vary a product.s internal representation", "Encapsulates code for construction and representation" and "Provides control over steps of construction process"
[Product]
class CDockerfile in the Dockerfile.h
[Builder]
class CBuilder int the Builder.h
with CBuilder we could construct CDockerfile's attributes, and  with its own build methos to build different products.


