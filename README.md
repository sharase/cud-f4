# Tausworthe generators over $\mathbb{F}_4$ for Markov chain QMC

---

### Preprint:

S. Harase, "A polynomial analogue of Fibonacci lattice rules and its application to low-discrepancy point sets for Markov chain quasi-Monte Carlo", submitted.


### Abstract:
A one-dimensional sequence $u_0, u_1, u_2, \ldots \in [0, 1)$ is said to be completely uniformly distributed (CUD) if overlapping $s$-blocks $(u_i, u_{i+1}, \ldots , u_{i+s-1})$, $i = 0, 1, 2, \ldots$, are uniformly distributed for every dimension $s \geq 1$. 
This concept naturally arises in Markov chain quasi-Monte Carlo (QMC). 
However, the definition of CUD sequences is not constructive, and 
thus there remains the problem of how to implement the Markov chain QMC algorithm in practice. 
Harase (2021) focused on the $t$-value, which is a measure of 
uniformity widely used in the study of QMC, and implemented 
short-period Tausworthe generators (i.e., linear feedback shift register generators) 
over the two-element field $\mathbb{F}_2$ 
that approximate CUD sequences by running for the entire period. 
In this paper, we generalize a search algorithm over 
$\mathbb{F}_2$ to that over arbitrary finite fields $\mathbb{F}_b$ with $b$ elements 
and conduct a search for Tausworthe generators over $\mathbb{F}_b$ 
with $t$-values zero (i.e., optimal) for dimension $s = 3$ and small for $s \geq 4$, 
especially in the case where $b = 3, 4$, and $5$. 
We provide a parameter table of Tausworthe generators over $\mathbb{F}_4$, 
and report a comparison between our new generators over $\mathbb{F}_4$ 
and existing generators over $\mathbb{F}_2$ 
in numerical examples using Markov chain QMC.

---

### Usage:

```
cud_f4.c   # Our proposed Tausworthe generators using fast state transition

gcc cud_f4.c -o cud_f4 -O3
./cud_f4 6 >> output_m6.txt
```
---

### Further reading:
<a href = "https://github.com/sharase/cud">A table of short-period Tausworthe generators for Markov chain quasi-Monte Carlo</a>.
