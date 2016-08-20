/**
  @author TOMISIN JENROLA
  @date   20-AUG-2016
*/

#include <Rcpp.h>
#include <numeric> // for std::partial_sum used below
using namespace Rcpp;

// [[Rcpp::export]]
NumericVector cumsum1(NumericVector x){
	// initialize an accumulator variable
	double acc = 0;
	// initialize the result vector
	NumericVector res(x.size());
	for(int i = 0; i < x.size(); i++){
		acc += x[i];
		res[i] = acc;
	}
	return res;
}

NumericVector cumsum2(NumericVector x){
	// initialize the result vector
	NumericVector res(x.size());
	// use STL algorithm
	std::partial_sum(x.begin(), x.end(), res.begin());
	return res;
}

NumericVector cumsum_sug(NumericVector x){
	return cumsum(x); // compute + return result vector
}