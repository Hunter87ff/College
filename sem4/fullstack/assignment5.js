// write a nodejs function to calculate execution of multiple functions





async function executed(callback=()=>{}){

    console.time(callback.name);

    await callback();

    console.timeEnd(callback.name);

}

async function HttpFunction(){

    await fetch("https://google.com"); 

} 

function simpleFunc(){

    console.log("HAHAHAHAHAHA....");

}



executed(simpleFunc)

executed(HttpFunction)
