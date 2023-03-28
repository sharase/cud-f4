# Tausworthe generators over $\mathbb{F}_4$ for Markov chain QMC

---

### Preprint:

S. Harase, "A generalization of short-period Tausworthe generators and its application to Markov chain quasi-Monte Carlo". <a href = "https://arxiv.org/abs/2303.10622">[arXiv]</a>

---

### Usage:

```
gcc cud_f4.c -o cud_f4 -lm -O3 # Our proposed Tausworthe generators using fast state transition
./cud_f4 6 >> output_m6.txt
```
---

### Further reading:
<a href = "https://github.com/sharase/cud">A table of short-period Tausworthe generators for Markov chain quasi-Monte Carlo</a>.
