#include <iostream>
#include <string>
using namespace std;

class MusicPlaylist
{
private:
    string playlists[20];
    int track;

public:
    MusicPlaylist()
    {
        fill_n(playlists, 20, "");
    }

    void add(string song)
    {
        for (int i = 0; i < 20; i++)
        {
            if (playlists[i] != "")
            {
                continue;
            }
            playlists[i] = song;
            break;
        }
    }

    void setCurrentTrack(int order)
    {
        this->track = order - 1;
    }

    string play()
    {
        return this->playlists[this->track];
    }
};

int main()
{
    cout << "chokun narak";
    MusicPlaylist mp;
    mp.add("Shape of You");
    mp.add("That's What I Like");
    mp.add("Humble");
    mp.setCurrentTrack(1);
    cout << mp.play() << endl; // แสดงเพลงลำดับที่ 1 คือ Shape of You
}