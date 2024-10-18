// the simple method here
bool isPrime( int n ) {
  if ( n <= 1 ) return 0;
  for ( int i = 2; i < n; i++ ) 
    if ( n % i == 0 ) return 0;
  return 1;
}

// If a number is not a prime, it must have a divisor less or equal to sqrt(number)
# include <math>
bool isPrime( int n ) {
  if ( n <= 1 ) return 0;
  int limit = sqrt( n + 1 )
  for ( int i = 2; i <= limit; i++ )
    if ( n % i == 0 ) return 0;
  return 1;
}
