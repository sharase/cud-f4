# Tausworthe generators over $\mathbb{F}_4$ for Markov chain QMC

---

### Paper:

S. Harase, "A search for short-period Tausworthe generators over <strong>F</strong><sub>b</sub> with application to Markov chain quasi-Monte Carlo", Journal of Statistical Computation and Simulation, Volume 94 (June 2024), Issue 9, Pages 2040-2062. <a href="https://doi.org/10.1080/00949655.2024.2312951">[doi]</a> <a href="https://doi.org/10.48550/arXiv.2303.10622">[arXiv]</a>

---

### Usage:

```
gcc cud_f4.c -o cud_f4 -lm -O3 # Our proposed Tausworthe generators using fast state transition
./cud_f4 6 >> output_m6.txt
```
---

### Further reading:
<a href = "https://github.com/sharase/cud">A table of short-period Tausworthe generators for Markov chain quasi-Monte Carlo</a>.
