
# Decimal to Binary Conversion

The process of converting a decimal number to binary involves the following steps:

## Approach 1->

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


## Approach 2 -->

here in this approach we'll use bit manipulation 

1. **Perform AND operation with 1:**
   - Start with the given decimal number.
   - Perform the AND operation with 1 to get the last bit of the number.

2. **Right Shift by 1:**
   - Once we obtain the last bit, make a 1-bit right shift on the decimal number.
   - This effectively moves to the next bit in the binary representation.

3. **Repeat Until Decimal is Zero:**
   - Repeat steps 1 and 2 until the decimal number becomes zero.
   - At each step, append the obtained bit to the binary representation.

4. **Merge with Decimal Place Value:**
   - For each obtained bit, multiply it by 10 raised to the power of its position and add it to the result.
   - This step effectively merges the bits to construct the final binary representation.


##  Decimal To BINARY

```cpp
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,ans=0,i=0;
    cin>> n;

    while (n)
    {
        int Lastdigit=n&1;
       
        // ans=(ans*10)+Lastdigit; give reverse
        ans=(Lastdigit*pow(10,i)+ans);
         n=n>>1;
         i++;

    }

    cout<<ans;
    
}
```

# Binary To Decimal
```cpp

#include<iostream>
#include<math.h>
using namespace std;


int main() {

    int n;
    cin >> n;

    int i = 0, ans = 0 ;

    while( n != 0) {

        int digit = n % 10;

        if( digit == 1) {
            ans = ans + pow(2, i);
        }

        n = n/10;
        i++;

    }
    cout<< ans << endl;
    return 0;
}
```


-----------------------------------------------
for getting N=123 ANS=321 in iteration

(ANS*10)+Digit
```cpp

int ReverseDigit(){

int ans = 0;

    while (n > 0) {
        int digit = n % 10;
        n /= 10;             
        ans = (ans * 10) + digit;  
    }

    return ans;
}
```

N=123 ANS=123

(digit*10**i)+ANS

```cpp

int sameDigit(){

int ans = 0;
int i=0;

    while (n > 0) {
        int digit = n % 10;
        n /= 10;             
        ans = (digit * pow(10,i)) + ANS; 
        i++; 
    }

    return ans;
}
```

## Binary Arithmetic Example

1. `00000000000110` in binary is **6** in decimal.
2. You've written `11111111111001`, then added 1 to it, resulting in `11111111111010`.
3. `11111111111010` in binary is **-6** in decimal.
4. You've added `00000000000101` to **-6**, which results in `00000000000110`, which is **6** in decimal.




