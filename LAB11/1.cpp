#include <iostream>
#include <string>
using namespace std;

class MusicPlaylist
{
private:
    string musics[20];
    int current;

public:
    MusicPlaylist()
    {
        fill_n(musics, 20, "");
    }
    void add(string music)
    {
        for (int i = 0; i <= 20; i++)
        {
            if (musics[i] == "")
            {
                musics[i] = music;
                break;
            }
        }
    }

    void setCurrentTrack(int order)
    {
        current = order - 1;
    }

    string play()
    {
        return musics[current];
    }
};

int main()
{
    MusicPlaylist mp;
    mp.add("Shape of You");
    mp.add("That's What I Like");
    mp.add("Humble");
    mp.setCurrentTrack(1);
    cout << mp.play() << endl; // แสดงเพลงลำดับที่ 1 คือ Shape of You
}