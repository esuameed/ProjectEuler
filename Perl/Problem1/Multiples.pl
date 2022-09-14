use warnings;
use strict;


my @stack = (); # empty array
my $total = 0;

for (my $i=1; $i < 1000; $i++){

	if($i % 3==0 or $i % 5==0){
		push(@stack,$i);
	}

}

# Find sum of array @stack
foreach (@stack) {
  $total += $_;
}

print ("the total is: $total\n");

#say($soma);
my $arrSize = @stack;# Lenght of an array
print("The number of divisors of 3 or 5 less than 1000 is: $arrSize\n"); # Third way to print array size

#print ("The number of divisors are:$soma");
