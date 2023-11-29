
# Output: 

Base constructor-0 param\
Base constructor-1 param\
Base constructor-1 param\
Base constructor-0 param\
DerivedA constructor-0 param\
Base constructor-0 param\
DerivedA constructor-1 param\
Base constructor-0 param\
DerivedA constructor-2 params\
Base constructor-0 param\
Base constructor-0 param\
DerivedA constructor-2 params\
Base constructor-0 param\
DerivedB constructor-0 param\
Base constructor-0 param\
DerivedB constructor-1 param\
Base constructor-1 param\
DerivedB constructor-2 params\
Base copy constructor\
DerivedB copy constructor\
Base constructor-1 param\
DerivedB constructor-2 params\
Base copy constructor\
Function f\
Base destructor\
Base copy constructor\
Function f\
Base destructor\
Base copy constructor\
Function f\
Base destructor\
Base destructor\
DerivedB destructor\
Base destructor\
DerivedB destructor\
Base destructor\
DerivedB destructor\
Base destructor\
DerivedB destructor\
Base destructor\
DerivedA destructor\
Base destructor\
DerivedA destructor\
Base destructor\
DerivedA destructor\
Base destructor\
DerivedA destructor\
Base destructor\
Base destructor\
Base destructor

* Line 81: **Base b1** \
This calls the *Base constructor-0 param* 

* Line 82: **Base b2(3)** \
This calls the *Base constructor-1 param*

* Line 83: **Base*pb=new Base(1)** \
This creates a new address to store `Base(1)` which will call *Base constructor-1 param* and then creates a `Base` pointer `pb` to store it

* Line 84: **DerivedA da1** \
This first constructor `Base()` because `DerivedA` inherited from `Base` then calls *DerivedA constructor-0 param*

* Line 85: **DerivedA da2(2)** \
This first constructor `Base()` because `DerivedA` inherited from `Base` then calls *DerivedA constructor-1 param*

*Line 86: **DerivedA da3(2,3)** \
This first constructor `Base()` because `DerivedA` inherited from `Base` then calls *DerivedA constructor-2 param*

*Line 87: **DerivedA da4(da2)** \
This calls constructor `Base()` then perform a clone constructor

*Line 88: **pb=new DerivedA(4,5)** \
This creates a new address to store `DerivedA(4,5)` which will first call *Base constructor-0 param* and then creates calls *DerivedA constructor-2 param*. After the pointer `pb` got assigned with it.

*Line 89: **DerivedB db1** \
This first constructor `Base()` because `DerivedB` inherited from `Base` then calls *DerivedB constructor-0 param*

*Line 90: **DerivedB db2(2.7)** \
This first constructor `Base()` because `DerivedB` inherited from `Base` then calls *DerivedB constructor-1 param*

*Line 91: **DerivedB db3(3,2.7)** \
This first constructor *Base constructor-1 param* because to call *DerivedB constructor-2 param* you would need to construct Base(1 param)

*Line 92: **DerivedB db4(db2)** \ 
This first constructor *Base copy constructor* because to call *DerivedB copy constructor* you would need to construct Base(Base const&)

*Line 93: **pb=new DerivedB(4,5)** \
This creates a new address to store `DerivedB(4,5)` which will first call *Base constructor-1 param* and then creates calls *DerivedB constructor-2 param*. After the pointer `pb` got assigned with it.
