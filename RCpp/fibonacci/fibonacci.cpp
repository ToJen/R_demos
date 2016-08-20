/**
  @author TOMISIN JENROLA
  @date   20-AUG-2016
*/

int g(int n) {
  if (n < 2) return(n);
  return(g(n-1) + g(n-2));
}