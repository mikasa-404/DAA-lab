#include <iostream>
#include <vector>

using namespace std;

// Function to perform a round-robin tournament
void roundRobinTournament(vector<string> participants) {
    int numParticipants = participants.size();

    if (numParticipants % 2 != 0) {
        participants.push_back("Bye"); // Add a bye if the number of participants is odd
        numParticipants++;
    }

    for (int round = 0; round < numParticipants - 1; round++) {
        cout << "Round " << round + 1 << ":\n";

        for (int i = 0; i < numParticipants / 2; i++) {
            int player1Index = i;
            int player2Index = numParticipants - 1 - i;

            cout << participants[player1Index] << " vs " << participants[player2Index] << endl;
        }

        // Perform manual rotation of participants
        string temp = participants[numParticipants - 1];
        for (int i = numParticipants - 1; i > 1; i--) {
            participants[i] = participants[i - 1];
        }
        participants[1] = temp;
    }
}

int main() {
    vector<string> participants = {"Player1", "Player2", "Player3", "Player4"};

    roundRobinTournament(participants);

    return 0;
}