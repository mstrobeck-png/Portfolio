"use strict";

let gains, losses, surprise, newLoc, everyone;

gains = [
    "You  received 5 pieces of candy!",
    "You  received 5 pieces of candy!",
    "You  received 5 pieces of candy!",
    "You  received 10 pieces of candy!",
    "You  received 10 pieces of candy!",
    "You  received 10 pieces of candy!",
    "You  received 1 piece of candy!",
    "You  received 1 piece of candy!",
    "You  received 1 piece of candy!",
    "You  received 15 pieces of candy!",
    "You  received 15 pieces of candy!",
    "You  received 3 pieces of candy!",
    "You  received 3 pieces of candy!",
    "You  received 2 pieces of candy!",
    "You  received 2 pieces of candy!",
    "You  received 10 pieces of candy!",
    "You  received 4 pieces of candy!",
    "You  received 8 pieces of candy!",
    "You  received 4 pieces of candy!",
    "You  received 8 pieces of candy!",
    "You  received 15 pieces of candy!",
    "You  received 1 piece of candy!",
    "You  received 3 pieces of candy!",
    "You  received 2 pieces of candy!",
    "You  received 1 piece of candy!",

];

losses = [
    "You lose 5 pieces of candy!",
    "You lose 5 pieces of candy!",
    "You lose 5 pieces of candy!",
    "You lose 10 pieces of candy!",
    "You lose 10 pieces of candy!",
    "You lose 10 pieces of candy!",
    "You lose 1 piece of candy!",
    "You lose 1 piece of candy!",
    "You lose all your candy!",
    "You lose all your candy!",
    "You lose 10 pieces of candy!",
    "You lose 3 pieces of candy!",
    "You lose 3 pieces of candy!",
    "You lose 2 pieces of candy!",
    "You lose all your candy!",
    "You lose all your candy!",
    "You lose 4 pieces of candy!",
    "You lose 8 pieces of candy!",
    "You lose 4 pieces of candy!",
    "You lose 8 pieces of candy!",
    "You lose all your candy!",
    "You lose 1 pieces of candy!",
    "You lose 3 pieces of candy!",
    "You lose 2 pieces of candy!",
    "You lose 1 piece of candy!",

];

surprise = [
    "You lose 10 pieces of candy!",
    "You  received 3 pieces of candy!",
    "You  received 5 pieces of candy!",
    "Go back 2 spaces and do nothing. You lose a turn.",
    "You lose 3 pieces of candy!",
    "You lose all pieces of candy!",
    "Go back 1 space and do nothing. You lose a turn.",
    "Surprise.. you recieve nothing!",
    "Pull a card from the Pumpkin for a new location!",
    "You lose 2 pieces of candy!",   
    "You  received 10 pieces of candy!",
    "You  received 2 pieces of candy!",
    "You  received 8 pieces of candy!",
    "You lose 1 piece of candy!",
    "Pull a card from the Pumpkin for a new location!",
    "Surprise.. you recieve nothing!",
    "Go back 3 spaces and do nothing. You lose a turn.",
    "Pull a card from the Pumpkin for a new location!", //18
    "Everyone gains 5 pieces of candy!",
    "Everyone loses 3 pieces of candy", //20
    "Everyone.. recieves nothing. This was a card to get your hopes up :)",
    "You recieve 4 pieces of candy!",
    "You recieve 2 pieces of candy!",
    "You lose 1 piece of candy!",
    "You recieve 6 pieces of candy!",

];

newLoc = [
    "Gravestone 1: You stumped upon the grave of Annabelle. A young girl who died trying to save her best friend from drowning. She died on Halloween of 1916 and she wants to give you 5 pieces of candy for visiting her. Move to the nearest empty location on the board with no symbol on it.", //location 1
    "Gravestone 2: After a portal appears in front of you, you fall to the feet of a gravestone with a set of twins standing in front of you looking down. There is no date or name written on this one. One dressed as an angel and another as a devil. The angel tries to give you 10 pieces of candy, but the devil steals 6 pieces. Take your 4 pieces and hurry away. Move to the nearest empty location on the board with no symbol on it.", //location 2

    "Gravestone 3: Boom. You nearly crack your head falling onto gravestone. It has a family's last name on it rather than a single individual. The Casters, passed away in 1834 from murder while they slept peacefully. A figure of a father appears with his three children. These children have nothing, so you give them each 3 pieces of candy and move to the nearest empty location.", //location 3
    "Gravestone 4: This gravestone is broken in multiple locations and there appears to be broken glass besides it. An odor of decay creeps into your nose and you notice a child holding the broken glass and a flower. They peacefully they hand you the flower but it transforms into 7 pieces of candy for you to take instead. Move to the nearest blank space.", //location 4

    "Gravestone 5: You almost trip over this gravestone as there is tall grass hiding it. Slowly leaning over it you read the name Casey and a bucket of candy appears on top of the stone. You reach in to take a piece and something snactches your hand. Jumping and falling backwards, you lose 5 pieces of candy to the laughing boy. Move to the nearest blank space.", //location 5
    "Gravestone 6: The triplets Mason, Tyler, and Anthony all passed away in a train crash dating back to 1923. They’re smiling as if they never experienced death or pain. Anthony walks up to you and the person on your right and hands you both 3 pieces of candy. Move to the nearest blank space with no symbol on it.", //location 6

    "Gravestone 7: Two graves besides each other, one a husband another a wife. They’re crying for one another, but they don’t seem to see each other. You give them each 2 pieces of candy and move on. Move to the nearest blank space with no symbol on it.", //location 7
    "Gravestone 8: This grave has no name or date inscribed. It just has different hats laying in front of it and the ghostly figures that appear seem to be of you and your party’s age. Looking harder, you notice they are you if everyone cannot escape before the sunrise. It appears this grave is what has yet to occur. Everyone gains 2 pieces of candy. Move to the nearest blank space with no symbol on it.", //location 8

];

everyone = [
    "Click the ghost coming out of the bottle for everyone's surprise!",
    "You lose 5 pieces of candy!",
    "You lose 5 pieces of candy!",
    "You  received 10 pieces of candy!", 
    "You  received 10 pieces of candy!",
    "You  received 1 piece of candy!",
    "Click the ghost coming out of the bottle for everyone's surprise!",

    "You lose 5 pieces of candy!",
    "You lose 10 pieces of candy!",
    "You lose 10 pieces of candy!",
    "You  received 1 piece of candy!",
    "You  received 1 piece of candy!",
    "Click the ghost coming out of the bottle for everyone's surprise!",

    "You  received 15 pieces of candy!",
    "You  received 15 pieces of candy!",
    "You  received 3 pieces of candy!",
    "You  received 3 pieces of candy!",
    "You  received 2 pieces of candy!",
    "Click the ghost coming out of the bottle for everyone's surprise!",

    "You lose 10 pieces of candy!",
    "You lose 1 piece of candy!",
    "You lose 4 pieces of candy!",
    "You recieve 1 piece of candy!",
    "You recieve 6 pieces of candy!",

    "Click the ghost coming out of the bottle for everyone's surprise!",

];

function gainClicked() {
    console.log("gain has been clicked");
    let gainsAnswer = gains[Math.floor(Math.random() * gains.length)];
    console.log(gainsAnswer);
    document.querySelector("#answer").innerHTML = gainsAnswer;
}

function lossClicked() {
    console.log("loss has been clicked");
    let lossAnswer = losses[Math.floor(Math.random() * losses.length)];
    console.log(lossAnswer);
    document.querySelector("#answer").innerHTML = lossAnswer;
}

function locClicked() {
    console.log("location unlocked!");
    let locAnswer = newLoc[Math.floor(Math.random() * newLoc.length)];
    console.log(locAnswer);
    document.querySelector("#answer").innerHTML = locAnswer;
}

function surpriseClicked() {
    console.log("surprise!");
    let surpAnswer = surprise[Math.floor(Math.random() * surprise.length)];
    console.log(surpAnswer);
    document.querySelector("#answer").innerHTML = surpAnswer;
}

function allClicked() {
    console.log("everyone gets it!");
    let allAns = everyone[Math.floor(Math.random() * everyone.length)];
    console.log(allAns);
    document.querySelector("#answer").innerHTML = allAns;
}