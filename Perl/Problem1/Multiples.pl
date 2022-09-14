use warnings;
use strict;


my @stack = (); # introducing how to create an empty array in Perl!!! I know that its not necessary! But we gain some experience with arrays in Perl!!
my $total = 0;

for (my $i=1; $i < 1000; $i++){

	if($i % 3==0 or $i % 5==0){
		push(@stack,$i); # Add element to array!
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
