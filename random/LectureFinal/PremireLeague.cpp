#include <iostream>
using namespace std;

class FootBallTeam
{
private:
    string name;
    int win;
    int tie;
    int loss;

public:
    FootBallTeam(string name) : name(name), win(0), tie(0), loss(0) {}
    FootBallTeam(string name, int win, int tie, int loss) : name(name), win(win), tie(tie), loss(loss) {}

    string getName()
    {
        return name;
    }

    int totalPoints()
    {
        return win * 3 + tie;
    }

    void setWin(int w)
    {
        win = w;
    }

    void setTie(int t)
    {
        tie = t;
    }

    void setLoss(int l)
    {
        loss = l;
    }
};

class PremierLeague
{
private:
    FootBallTeam **teams;

public:
    PremierLeague()
    {
        teams = new FootBallTeam *[21];
    }

    void addTeam(FootBallTeam &team)
    {
        for (int i = 0; i <= 20; i++)
        {
            if (teams[i] == NULL)
            {
                teams[i] = &team;
                break;
            }
        }
    }

    string getWinner()
    {
        int maxScore = 0;
        int maxIdx = 0;
        for (int i = 0; i <= 20; i++)
        {
            if (teams[i] == NULL)
            {
                break;
            }

            if (teams[i]->totalPoints() > maxScore)
            {
                maxScore = teams[i]->totalPoints();
                maxIdx = i;
            }
        }
        return teams[maxIdx]->getName();
    }

    friend ostream &operator<<(ostream &output, PremierLeague league)
    {
        for (int i = 0; i <= 20; i++)
        {
            if (league.teams[i] == NULL)
            {
                break;
            }

            output << "Team : " << league.teams[i]->getName() << " Total Score : " << league.teams[i]->totalPoints() << endl;
        }
        return output;
    }
};

int main()
{
    PremierLeague league;
    FootBallTeam liverpool("Liverpool", 1, 2, 3);
    FootBallTeam chelsea("Chelsea", 2, 4, 1);
    FootBallTeam manu("ManU");
    league.addTeam(liverpool);
    league.addTeam(chelsea);
    league.addTeam(manu);
    cout << league;
    cout << "The Winner is : " << league.getWinner() << endl;
}