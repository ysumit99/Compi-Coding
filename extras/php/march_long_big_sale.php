<?php
$t = 0;
fscanf(STDIN, "%d",
        $t // name of enemy 1
    );
//echo $t;

for ($j=0; $j < $t ; $j++) 
{
    fscanf(STDIN, "%d",
        $n // name of enemy 1
    );
    $total_loss = 0.0;

    for ($i=0; $i < $n; $i++) { 
    	fscanf(STDIN, "%d",
        $p // name of enemy 1
    );

    	fscanf(STDIN, "%d",
        $q // name of enemy 1
    );

    	fscanf(STDIN, "%d",
        $d // name of enemy 1
    );

    	$loss = 0.0;
    	$temp = 0.0;

    	$temp = $p + (($p * ($d/100.0)));
    	 //echo $total_loss . "\n";
    	 echo  ($d/100.0) . "\n";
    	$loss = $temp - (($temp * ($d/100.0)));
    	 echo $loss . "\n";
    	$total_loss += (($p - $loss)*$q);
    	 echo $total_loss . "\n";*/
    	 echo $p . "\n";
    	 echo $q . "\n";
    	 echo $d . "\n";


    }

   // echo $total_loss . "\n";
   
}

?>