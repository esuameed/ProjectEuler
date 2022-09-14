#!/usr/bin/env ruby

multiples = Array.new()
limit=1000
soma=0
for yr in 3...limit do
  if (yr % 3 == 0) || (yr % 5 == 0) # parenthesis are optional
    multiples.push(yr)
    soma=soma+yr
    #puts yr
  end
end

puts "#{soma} is The Sum of divisors of 3 or 5 below #{limit}!"
