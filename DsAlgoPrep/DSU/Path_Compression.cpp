/*

	using path compression with DSU, when calling find function, we can keep updating
	the parent of every node. What is the advantage of this. Consider for example: 
	2 -> 5 -> 4 -> 6 // if parent for this group is 2;

	we can assign parent for nodes 5, 4, 6 all as 2. so that calling find function in 
	future will save many recursive calls i.e for getting parent of 6 we will not have 
	to go to 4 then to 5 then 2, instead directly call 2 

*/


//Recursive find function


find(a){
	if(parent[a] < 0)
	{
		return a;


		else{
			int x = 1;
			parent[a] = x;
			return x;

			/*
			this can also be written
			as return parent[a] = find(parent[a]);
			*/ 
		}
	}
}