<font size="3"> Suppose we want to find the sum of multiples of **`3`**  or **`5`** below **`1000`**. We'll have: </font>

$$3 + 6 + 9 + 12 + 15 + ... +  999 = 3 * (1 + 2 + 3 + 4 + 5 + ... + 333) = 3*[\frac{333*(333+1)}{2}]$$

$$5 + 10 + 15 + 20 + 25 + ... +  995 = 5 * (1 + 2 + 3 + 4 + 5 + ... + 199) = 5*[\frac{199*(199+1)}{2}]$$

$$ S = \frac{1}{2} * p * (1 + p) * n  $$

<font size="3"> So we can generalize the sum of multiples of **`n`** in the range 1 to num (__NOT__ including num), where **`p = (num-1) // n`**  </font>
