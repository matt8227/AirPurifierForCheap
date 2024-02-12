//CREDITS OF THIS FILE GO TO BIG CLIVE FROM BIGCLIVEDOTCOM 
//link to his channel (https://www.youtube.com/@bigclivedotcom)


//HEPA filter blanking cap
$fn=100;
//You can adjust these four variables
//Mainly the filter hole diameter
filterhole=92;     //diameter of filter hole
rim=10;               //size of rim (10)
insert=10;          //Length of insert (10)
thickness=1.5;  //Thickness of plastic (1.5)
//Do not adjust anything below here
wall=(2*thickness);
cap=thickness+insert;
difference(){
union(){
//seal plate 
cylinder(h=thickness,d=filterhole+(2*rim));
//filter insert 
cylinder(h=cap,d=filterhole);
}
//filter insert core
translate([0,0,thickness])  
cylinder(h=cap+1,d=filterhole-wall);
}