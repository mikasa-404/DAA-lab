#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Task {
    char id;
    int deadline;
    int penalty;

    Task(char i, int d, int p) : id(i), deadline(d), penalty(p) {}
};

bool compareTasks(const Task& a, const Task& b) {
    return a.penalty > b.penalty;
}

// Function to schedule tasks and minimize penalties
void scheduleTasks(vector<Task>& tasks) {
    sort(tasks.begin(), tasks.end(), compareTasks);

    int maxDeadline = 0;
    for (const Task& task : tasks) {
        maxDeadline = max(maxDeadline, task.deadline);
    }

    vector<char> schedule(maxDeadline, '.'); // Initialize the schedule with empty slots

    int totalPenalty = 0;
    for (const Task& task : tasks) {

        for (int i = task.deadline - 1; i >= 0; i--) {
            if (schedule[i] == '.') {
                schedule[i] = task.id;
                totalPenalty += task.penalty;
                break;
            }
        }
    }

    cout << "Optimal Schedule: ";
    for (char task : schedule) {
        cout << task << " ";
    }
    cout << endl;

    cout << "Total Penalty: " << totalPenalty << endl;
}

int main() {
    vector<Task> tasks;
    tasks.push_back(Task('A', 2, 50));
    tasks.push_back(Task('B', 1, 30));
    tasks.push_back(Task('C', 2, 40));
    tasks.push_back(Task('D', 1, 35));
    tasks.push_back(Task('E', 3, 10));

    scheduleTasks(tasks);

    return 0;
}