#include <string>
#include <iostream>
#include <vector>
using namespace std;
/* class that creates a 'song data base' for each genre that is initiated manually*/
class SongDB{
string genres;
vector<string> songs;
vector<string> artists;
vector<string> albums;
 public: SongDB(string genre, vector<string> song,vector<string> artist,vector<string> album){
    genres=genre;
	songs=song;
	artists=artist;
	albums=album;
	
	}
public: void getRecomendation(){
		int i = rand()% 4 ;
		cout<<genres<<" Song: "<<songs[i]<<" Artist: "<<artists[i]<<" Album: "<<albums[i]<<"\n";
}
	};