const fs = require('fs');
let input = '';
let floor = 0;
let inputLength = 0;
let floorBasement = 0;


input = fs.readFileSync('./santa.txt','utf8');
inputLength = input.length;

//console.log(input);

console.time('santa-time');
for(let i = 0; i < inputLength; i++ ){	
	if ( input[i] === '(' ) {
		//console.log(input[i]);
		floor++;
	} else if (input[i] === ')' ) {
		//console.log(input[i]);
		floor--;
	}

	if(floor < 0){
		floorBasement = i + 1; //plus 1 cause index started in 0
		break;
	}
}

console.timeEnd('santa-time');
console.log(floorBasement);
