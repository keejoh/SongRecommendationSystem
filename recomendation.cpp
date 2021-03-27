#include <string>
#include <iostream>
#include <vector>

#include "songdb.h"
using namespace std;
int main(){
	/* creates all the data for each genre allowed to be selected by the user and creates an object from SongDB class for each genre*/
string genre1="Rap";
string genre2="Rock";
string genre3="Country";
string genre4="Pop";
int genreSelection;
vector<string> rap;
vector<string> rock;
vector<string> country;
vector<string> pop;
vector<string> rapArtist;
vector<string> rockArtist;
vector<string> countryArtist;
vector<string> popArtist;
vector<string> rapAlbum;
vector<string> rockAlbum;
vector<string> countryAlbum;
vector<string> popAlbum;
rap.push_back("Better Now");
rap.push_back("Gods Plan");
rap.push_back("Stay");
rap.push_back("Self Care");
rapArtist.push_back("Post Malone");
rapArtist.push_back("Drake");
rapArtist.push_back("Mac Miller");
rapArtist.push_back("Mac Miller");
rapAlbum.push_back("Beerbongs & Bentleys");
rapAlbum.push_back("Scorpion");
rapAlbum.push_back("The Divine Feminine");
rapAlbum.push_back("Swimming");
SongDB rapSongs(genre1,rap,rapArtist,rapAlbum);
rock.push_back("Smells Like Teen Spirit");
rock.push_back("I Will Not Bow");
rock.push_back("Crawl");
rock.push_back("Tourniquet");
rockArtist.push_back("Nirvana");
rockArtist.push_back("Breaking Benjamin");
rockArtist.push_back("Linkin Park");
rockArtist.push_back("Breaking Benjamin");
rockAlbum.push_back("Nevermind");
rockAlbum.push_back("Dear Agony");
rockAlbum.push_back("Hybrid Theory");
rockAlbum.push_back("Ember");
SongDB rockSongs(genre2,rock,rockArtist,rockAlbum);
country.push_back("Buy me a Boat");
country.push_back("Good Vibes");
country.push_back("Love Story");
country.push_back("The Gambler");
countryArtist.push_back("Chris Janson");
countryArtist.push_back("Chris Janson");
countryArtist.push_back("Taylor Swift");
countryArtist.push_back("Kenny Rogers");
countryAlbum.push_back("Buy me a Boat");
countryAlbum.push_back("Single");
countryAlbum.push_back("Fearless");
countryAlbum.push_back("The Gambler");
SongDB countrySongs(genre3, country, countryArtist,countryAlbum);
pop.push_back("Delicate");
pop.push_back("Chandelier");
pop.push_back("Havana");
pop.push_back("Sunflower");
popArtist.push_back("Taylor Swift");
popArtist.push_back("Sia");
popArtist.push_back("Camila Cabello");
popArtist.push_back("Swae Lee & Post Malone");
popAlbum.push_back("Reputation");
popAlbum.push_back("1000 Forms of Fear");
popAlbum.push_back("Camila");
popAlbum.push_back("Spider-Man:Into the Spider-Verse");
SongDB popSongs(genre4, pop, popArtist, popAlbum);
/* asks the user to select a number corresponding to a desired genre prints song from genre loops until 0 is entered prints error message if non-matching input is entered*/
do{
cout<<"Please enter the desired genre for recomendation. \n Enter 1 for Rap, 2 for Country, 3 for Pop, 4 for Rock. Enter 0 to close program \n";
cin>>genreSelection;

if (genreSelection==1){
rapSongs.getRecomendation();
}
else if (genreSelection==2){
rockSongs.getRecomendation();
}
else if (genreSelection==3){
countrySongs.getRecomendation();
}
else if (genreSelection==4){
rockSongs.getRecomendation();
}
else if (genreSelection==0){
cout<<"We hope you enjoyed your recommendations";
}
else{
	cout<<"Try again incorrect input \n";

}
}while(genreSelection != 0);

}