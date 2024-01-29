# Decimal to Binary Conversion

The process of converting a decimal number to binary involves the following steps:

## 1. Divide by 2:

- Start with the given decimal number.
- Divide the decimal number by 2 (the binary base).

## 2. Store Remainder:

- Record the remainder when dividing by 2.
- This remainder will be either 0 or 1, as binary is a base-2 system.

## 3. Repeat Steps 1 and 2:

- Continue the process by taking the quotient from the previous division and repeating steps 1 and 2 until the quotient becomes 0.

## 4. Reverse the Remainder Output:

- After completing the division and storing the remainders, reverse the order of the remainders to get the binary representation.

### Example:

For the decimal number 10:

- Step 1: 10 / 2 = 5, remainder = 0
- Step 2: 5 / 2 = 2, remainder = 1
- Step 3: 2 / 2 = 1, remainder = 0
- Step 4: 1 / 2 = 0, remainder = 1

The remainders in reverse order are 1010, so the binary representation of decimal 10 is 1010.

## JavaScript Implementation:

```javascript
function decimalToBinary(decimal) {
    if (isNaN(decimal) || decimal < 0) {
        return 'Invalid input. Please provide a non-negative decimal number.';
    }

    let binary = '';
    while (decimal > 0) {
        const remainder = decimal % 2;
        binary = remainder + binary;
        decimal = Math.floor(decimal / 2);
    }

    // Write to text file
    const fileName = 'binary_output.txt';
    fs.writeFileSync(fileName, binary);

    return `Binary representation has been written to ${fileName}.`;
}

// Example usage
const decimalNumber = 42; // Replace with your desired decimal number
console.log(decimalToBinary(decimalNumber));
