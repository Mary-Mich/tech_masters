
let currentInput='';/* les operation en cour*/
let lastOperators=null;/* le dernier operateur*/
const operators=['+','*','.','/','-'];
const getValue= function (value) {
document.getElementById('result').textContent= value
/*verifions si l'operateur en cour et le dernier
 operateur ne sont pas les memes*/
if(operators.includes(value) && operators.includes(lastOperators)){
    /*modification, en coupant la derniere valeur de l'operation
    en cour puis faire une concatenation avec la nouvelle valeur */
    currentInput=currentInput.slice(0,-1)+value;
}
else{/*dans le cas contraire l'operation en cour s'incremente*/
currentInput=currentInput+ value;
}
/*si le dernier caractere un operateur alors faire une
 modification du dernier operateur*/
if(operators.includes(value)){
    lastOperators=value;
}
else{
    lastOperators=null
}
document.getElementById('result').textContent=currentInput;
}
/*gestion des button*/
 function gestion (value){ 
if(value==='clear'){
    currentInput=''
document.getElementById('result').textContent= currentInput;
}
if(value==='back'){
    currentInput =currentInput.slice(0,-1);
    document.getElementById('result').textContent = currentInput
}
}
function solution(){
    let result;
    if(currentInput !='' && operators.includes(currentInput)===false){
        try{
            result=eval(currentInput);
            document.getElementById('result').textContent=result;
            currentInput=result.toString();
        }catch(error){
            document.getElementById('result').textContent=error;
            currentInput=''
        }
    }
}
