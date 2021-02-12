/*#include<unordered_map>
#include<unordered_set>
#include<string>
#include<stack>
#include<vector>
#include<iostream>

using namespace std;

void dfs1(unordered_map<string, pair<int, vector<string>>>& speak_to_understand, unordered_set<string>& vis, stack<string>& r, const string& speak) {
    if (vis.count(speak) > 0) {
        return;
    }
    vis.insert(speak);

    for (const auto &understand : speak_to_understand[speak].second) {
        dfs1(speak_to_understand, vis, r, understand);
    }

    r.push(speak);
}

void dfs2(unordered_map<string, pair<int, vector<string>>>& understand_to_speak, unordered_set<string>& vis, vector<string>& comp, const string& understand) {
    if (vis.count(understand) > 0) {
        return;
    }
    vis.insert(understand);
    comp.push_back(understand);

    for (const auto &speak : understand_to_speak[understand].second) {
        dfs2(understand_to_speak, vis, comp, speak);
    }
}

int main() {
    int n;
    cin >> n;

    unordered_map<string, pair<int, vector<string>>> speak_to_understand;
    unordered_map<string, pair<int, vector<string>>> understand_to_speak;
    unordered_set<string> speak_langs;

    for (int i = 0; i < n; i++) {
        string name, speak_lang, understand_lang;
        cin >> name >> speak_lang;

        speak_langs.insert(speak_lang);

        speak_to_understand[speak_lang].first++;
        understand_to_speak[speak_lang].first++;

        while (cin.peek() != '\n') {
            cin >> understand_lang;
            speak_to_understand[speak_lang].second.push_back(understand_lang);
            understand_to_speak[understand_lang].second.push_back(speak_lang);
        }
    }

    stack<string> r;
    unordered_set<string> visited;
    for (auto &i : speak_langs) {
        if (visited.count(i) > 0) {
            continue;
        }

        dfs1(speak_to_understand, visited, r, i);
    }

    visited.clear();
    int best = 0;
    while (!r.empty()) {
        string curr = r.top();r.pop();

        if (visited.count(curr) > 0) {
            continue;
        }

        vector<string> comp;
        dfs2(understand_to_speak, visited, comp, curr);

        int here = 0;
        for (auto i : comp) {
            here += speak_to_understand[i].first;
        }

        best = max(here, best);
    }

    cout << n - best << endl;
}*/