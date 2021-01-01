const fs = require('fs');
let input = '';
let floor = 0;
let inputLength = 0;



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
}

console.timeEnd('santa-time');
console.log(floor);

/**
* other way
*/

console.time('santa-time-improve');

const directions = input.split('');
const answer = directions.reduce( (acc, currentValue) => {
	if( currentValue ===  '(' )
		return acc += 1;
	else
		return acc -= 1;
}, 0);

console.timeEnd('santa-time-improve');
console.log(answer);