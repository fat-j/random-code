#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int binomial_coef(int n, int k) {
    // calculate binomial coefficient using dynamic programming
    int i, j;
    int** coef = (int**) malloc((n+1) * sizeof(int*));
    for (i = 0; i <= n; i++) {
        coef[i] = (int*) malloc((k+1) * sizeof(int));
        coef[i][0] = 1;
    }
    for (i = 1; i <= k; i++) {
        coef[0][i] = 0;
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= k; j++) {
            coef[i][j] = coef[i-1][j-1] + coef[i-1][j];
        }
    }
    int binom = coef[n][k];
    for (i = 0; i <= n; i++) {
        free(coef[i]);
    }
    free(coef);
    return binom;
}

double binomial_pmf(int n, int k, double p) {
    // calculate binomial probability mass function
    double binom_coef = binomial_coef(n, k);
    double prob = binom_coef * pow(p, k) * pow(1-p, n-k);
    return prob;
}

double binomial_cdf(int n, int k, double p) {
    // calculate binomial cumulative distribution function (CDF)
    int i;
    double prob = 0;
    for (i = 0; i <= k; i++) {
        prob += binomial_pmf(n, i, p);
    }
    return prob;
}

int main() {
    int n = 10;  // number of trials
    int k = 4;  // number of successes
    double p = 0.105;  // probability of success in each trial

    double prob_k = binomial_pmf(n, k, p);
    double prob_less = binomial_cdf(n, k-1, p);
    double prob_more = 1 - binomial_cdf(n, k, p);

    printf("The probability of getting exactly %d successes out of %d trials with probability of success %f is %f.\n", k, n, p, prob_k);
    printf("The probability of getting less than %d successes is %f.\n", k, prob_less);
    printf("The probability of getting more than %d successes is %f.\n", k, prob_more);

    return 0;
}
