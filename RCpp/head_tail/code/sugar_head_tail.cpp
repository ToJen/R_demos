/**
  @author TOMISIN JENROLA
  @date   20-AUG-2016
*/

#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
NumericVector top_n(NumericVector y, int n) {
  NumericVector x = clone(y);
  // sort x in ascending order
  std::sort(x.begin(), x.end());
  return tail(x, n);
}

NumericVector bottom_n(NumericVector y, int n) {
  NumericVector x = clone(y);
  // sort x in ascending order
  std::sort(x.begin(), x.end());
  return head(x, n);
}