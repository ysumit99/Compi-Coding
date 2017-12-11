<!DOCTYPE html>
<html>
<head>
	<title></title>

	<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.2.1/jquery.min.js"></script>
  <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js"></script>

  <link rel="stylesheet" type="text/css" href="index.css">	

  <link rel="stylesheet" type="text/css" href="https://maxcdn.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css">
</head>
<body>

</body>
</html>

<?php

for ($i=1; $i < 50 ; $i++) { 
	for ($j=1; $j < 50; $j++) { 
		
		$sum = $i + $j;
		$count = 0;
		$sum1 = 0;
		$sum2 = 0;
		$result = 0;
		while ($sum > 0) {
			if($count % 2 == 0)
			{
				$temp = $sum % 10;
				$sum1+=$temp;
				$sum /= 10;
			}
			else
			{
				$temp = $sum % 10;
				$sum2+=$temp;
				$sum /= 10;
			}
			$count++;
		}
		if($sum1 >= $sum2)
		{
			$result = $sum1 - $sum2;
		}
		else
		{
			$result = $sum2 - $sum1;
		}
		echo $result. "hi";
	}
	echo "\n";
}

?>