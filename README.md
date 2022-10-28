# Code Converter
## To convert C code to Python code automatically
## Workflow
1. Create a C code and a Python code that have simple and identical functions. Note that the code does not include any advanced functions or any third-party libraries.
2. The code can be converted character by character, without regard to syntax or indentation. The resulting Python code is an executable code with a legal syntax.

## Process
1. Parse and split C code to token stream.
2. Analyze the tokens and turn it into Python tokens according to the semantics.
3. Generate Python code from the token stream.
