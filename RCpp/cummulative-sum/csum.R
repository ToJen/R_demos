# @author TOMISIN JENROLA
# @date   20-AUG-2016

#library(Rcpp)

cppFunction('NumericVector cumsum_sug(NumericVector x) { return cumsum(x); }')
x <- 1:10
all.equal(cumsum_sug(x), cumsum(x))