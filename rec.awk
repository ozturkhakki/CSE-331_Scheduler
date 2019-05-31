BEGIN {
	sum = 0;
	count = 0;
	username = "FAIL";
}

{
	username = $2;
	sum += $9;
	count++;
}

END {
	print username " -> sum: " sum " | count: " count " | res: " sum/count;
}