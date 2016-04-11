#!/usr/bin/perl

open (INFILE, "< multigenome_bubble_chr21.fasta")
or die "Can't open file";
while (<INFILE>) {
	$line = $_;
	chomp $line;
	if ($line =~ /\>/) { #if has fasta >
		close OUTFILE;
		$new_file = substr($line,1);
		$new_file .= ".fa";
		open (OUTFILE, ">$new_file")
			or die "Can't open: $new_file $!";
	}
	print OUTFILE "$line\n";
}
close OUTFILE;
