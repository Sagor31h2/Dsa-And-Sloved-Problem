class TrieNode
{
public:
    bool isEnd;
    TrieNode *ch[26];
    TrieNode()
    {
        isEnd = false;
        memset(ch, 0, sizeof(ch));
    }
};
class WordDictionary
{

public:
    TrieNode *root;
    WordDictionary()
    {
        root = new TrieNode();
    }
    void addWord(string word)
    {
        TrieNode *node = root;
        for (char c : word)
        {
            int idx = c - 'a';
            if (node->ch[idx] == NULL)
            {
                node->ch[idx] = new TrieNode();
            }
            node = node->ch[idx];
        }
        node->isEnd = true;
    }

    bool search(string word)
    {
        return searchHelper(word, root);
    }
    bool searchHelper(string w, TrieNode *node)
    {
        for (int i = 0; i < w.length(); i++)
        {
            char ch = w[i];
            if (ch == '.')
            {
                for (auto c : node->ch)
                {

                    if (c && searchHelper(w.substr(i + 1), c))
                        return true;
                }
                return false;
            }
            int idx = ch - 'a';
            if (node->ch[idx] == NULL)
                return false;
            node = node->ch[idx];
        }
        return node->isEnd;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */