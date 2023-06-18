# Interpreter Project

This GitHub repository represents the culmination of several distinct projects undertaken throughout the FALL 2022 semester to develop a comprehensive interpreter for a simple programming language.

### Program Execution

Valid Execution of the program necessitates the appropriate header and footer in the file, indicating the program's start and end.

Valid Program:

    PROGRAM <PROGRAM-NAME>
        <insert-code>
    END PROGRAM

### Variables

Variables can be declared without needing to be immediately defined.

Valid Datatypes:
- INT (Integers)
- FLOAT (Floating-Point Numbers)
- BOOL (Boolean)

Variable Declaration:
- Variable names are valid if they are alphanumeric, and can include an underscore (_) or an asperand (@). The variable name must start with either a letter or an underscore and can be followed by zero or more letters, digits, underscores, or asperands.
- Using a variable in an expression before assigning a value to it is invalid.

Valid Variable Declaration:

    <datatype> <variable-name>;
    <variable-name> = <value>;

### Comments

A comment is defined by all the characters following the sequence of characters “/\*” as the starting delimiters to the closing delimiters “*/”.
- Comments can span multiple lines.

### Mathematical Operators
Valid Mathematical Operators:
- Addition (+)
- Subtraction (-)
- Multiplication (*)
- Division (/)

Unary Operators:
- Positive (+)
- Negative (-)
- Not (!) [only for boolean variables/expressions]

### Conditionals and Control flow

Valid Logical Operators include:
- And (&&)
- Or (||)
- Equality (==)
- Greater Than (>)
- Less Than (<)

All logical operators and conditional expressions can be used inside and outside control flow statements including variable declarations.
- Based on their nature, they will only return true or false.

Valid Control Flow:

The "IF" statement is a control flow statement used to conditionally execute a block of code. It allows the program to execute different sets of code based on a specified condition.
- A valid "IF" statement can contain a singular code block or an alternate code block to run if the conditional expression is false ("IF/ELSE" statement).
- All "IF" statements must end with "END IF;" to indicate the end of the conditional block.

"IF" Statement:

    IF (<insert-conditional-expression>) THEN
        <insert-code>
    END IF;

"IF/ELSE" Statement:

    IF (<insert-conditional-expression>) THEN
        <insert-code>
    ELSE
        <insert-alternate-code>
    END IF;

### PRINT Statement

The "PRINT" statement is used to display output or information to the user. It allows the program to output values or text onto the screen or console.
- The "PRINT" statement can take any number of arguments.
- It accepts string literals, variables, and expressions, separated by commas.

Example:

    INT r, h, addition, multiply;
    r = 1;
    h = 2;
    addition = r + h; /* 3 */
    multiply = r * h; /* 2 */
    PRINT  ("The output results are: ", addition, " and ", multiply); /* returns "The output results are: 3 and 2" */

### Exception handling

Exception handling occurs when errors are encountered during parsing or execution.

Types of Errors:
- Syntax Errors: Occurs when invalid syntax is encountered that does not conform to the language syntax.
- Runtime Exceptions: Occurs when invalid operations are performed, such as using an undeclared variable within the "PRINT" statement or using the NOT unary operator in the definition of an INT variable.

