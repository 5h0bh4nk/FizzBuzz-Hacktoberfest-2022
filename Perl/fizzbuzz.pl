#// $fizzbuzz Perl
#// Author: @rhopkins7428

my @count = ( 1 .. 100 );

foreach my $fizzbuzz ( @count )
{

    if ( $fizzbuzz % 3 == 0 )
    {
        print "fizz";
    }

    if ( $fizzbuzz % 5 == 0 )
    {
        print "buzz";
    }

    if ( $fizzbuzz % 3 != 0 and $fizzbuzz % 5 != 0 )
    {
        print $fizzbuzz;
    }

    print "\n";

}

