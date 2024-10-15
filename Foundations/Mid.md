
![Static Badge](https://img.shields.io/badge/-Falconeri-black?style=for-the-badge&link=https%3A%2F%2Fgithub.com%2Ffalconeri-8)

>Code snippets embedded are shown for reference only

## Type Conversion

**Implicit type** conversion is done by compiler

```cpp
double doubleNumber = 10.5
int intNumber = doubleNumber // We get 10
```

#### Overflow

```cpp
int Number = 2147483647 // Max value for an integer
Number = Number * 2 // We get integer overflow
```

#### Underflow

```cpp
unsigned int Number
Number = 4 - 5 // We get integer underflow, cannot take negative int
```

### Type Casting

**Explicit type** conversion is user defined
**Double to Integer** example

```cpp
double doubleNumber = 3.14

int intNumber = (int)doubleNumber // C-Style
int intNumber = int(doubleNumber) // Function 
```

### Positive Remainders

Avoid negative remainders

```cpp
int positiveRemainder = (dividend % divisor + divisor) % divisor;
```
<br><br>

## Exception Handling

Safely parse errors

`try`
`catch`
`throw`

### Syntax

```cpp
try {
	// First Condition
		throw firstArgument
	// Second Condition
		throw secondArgument
}

catch (datatype firstIdentifier) {
	// Handle
}
catch (datatype secondIdentifier) {
	// Handle
}
// Final Block
catch (...) {
	// Handle all other possible exceptions
}
```

### Custom Exceptions

`exception`
`Class Constructors`
`Pointers` `References`

```cpp
#include <exception> // Use this
#include <string> 

class MyException : public exception { 
	private: 
		string message; 
		
	public:
		// Overriding what() function  
		MyException(const string& msg) : message(msg) {}
		 
		const char* what() const noexcept override {
			return message.c_str(); 
		} 
};

void doSomething(int value) {
    // Condition
        throw MyException(<string>);
}

int main() {
    try {
        doSomething(value);
    }
    catch (const MyException& e) {
        // e.what() is returned
    }

    return 0;
}
```

### File Exceptions

`fstream`
`ifstream`

```cpp
// Ex: 01
if (file.fail()) { 
	throw FileException(<string>);
}

// Ex: 02
if (!file.eof()) {
	throw FileException(<string>)
}
```

## Functions

### Overloading Functions

Multiple functions with like `return types`, `identifiers` but different `arguments`

```cpp
int identifier() {}
int identifier(int value) {}
int identifier(int value, int number)
float identifier(float value) {}
```

### Inline Functions

Defined outside `main()`, compiles as an efficient `nested` function

```cpp
inline void identifier() {
	// Code
}
int main() {
	identifier() // The 'Code' runs here
}
```

### exit() Function

`cstdlib`

```cpp
#include <cstdlib> // Use this

// Condition
	cerr << string;
	exit(<int>)
```