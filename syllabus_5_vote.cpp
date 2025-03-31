/*An election is contested by 5 candidates. The candidates are numbered 1 to 5 and the voting is done by marking the candidate 
number on the ballot paper. Write a C++ program to read the ballots and count the votes cast for each candidate using an array. In 
case, a number read is outside the range 1 to 5, the ballot should be considered as a ‘spoilt ballot’ and the program should also count 
the number of spoilt ballots. */
#include <iostream>
using namespace std;

int main() {
    int votes[5] = {0};  // Array to store votes for 5 candidates
    int spoiledBallots = 0;  // Counter for spoiled ballots
    int vote, totalVotes;

    // Ask for the number of votes
    cout << "Enter the total number of votes: ";
    cin >> totalVotes;

    // Read each vote
    for (int i = 0; i < totalVotes; i++) {
        cout << "Enter vote " << i + 1 << " (1-5 for candidates): ";
        cin >> vote;

        if (vote >= 1 && vote <= 5) {
            votes[vote - 1]++;  // Count the vote for the correct candidate
        } else {
            spoiledBallots++;  // Count as spoiled if outside the range 1-5
        }
    }

    // Display the results
    cout << "\nVotes for each candidate:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Candidate " << i + 1 << ": " << votes[i] << " votes" << endl;
    }
    cout << "Spoiled ballots: " << spoiledBallots << endl;

    return 0;
}
