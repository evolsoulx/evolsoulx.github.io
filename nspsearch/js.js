//
var RSS_URL = 'https://nosleep.supercast.com/feeds/rne91aoPhrNb7kr7i8k3m6GJ';

function processRSS()
{
    let seasonNumber = document.getElementById('seasonSelect').value; // This will be S01, S02, ..., S20
    // Fetch the RSS feed and parse it
    fetch(RSS_URL)
        .then(response => response.text())
        .then(str => new window.DOMParser().parseFromString(str, "text/xml"))
        .then(data =>
        {
            const parser = new DOMParser();
            const xmlDoc = parser.parseFromString(data, "text/xml");

            const items = data.querySelectorAll("item");
            let html = ``;
            items.forEach(el =>
            {

                let storyTitle = el.querySelector('title').innerHTML;
                let storyDescription = el.querySelector('description').innerHTML;

                let storyDate = el.querySelector('pubDate').innerHTML;
                // Get all selected options from the multi-select
                let selectedSeasons = Array.from(document.getElementById('seasonSelect').selectedOptions).map(option => option.value);
               // console.log(selectedSeasons)
                let searchTerm = document.getElementById('searchTerm').value;

                // Check if the story title includes any of the selected season numbers
                let isSeasonMatch = selectedSeasons.some(seasonNumber => storyTitle.includes(seasonNumber));
                let addEpisode = false;

                if (selectedSeasons.length > 0 && isSeasonMatch)
                {
                    let modifyit = document.getElementById('editedContent').checked;

                    //code for the shorter version
                    if (modifyit)
                    {
                        //Remove fluff after stories for brevity
                        // Find the index where the specified text begins
                        let targetIndex = storyDescription.indexOf('Click here to ');

                        // Check if the text is found
                        if (targetIndex !== -1)
                        {
                            // Find the index of the opening <div> tag before the target text
                            let divStartIndex = storyDescription.lastIndexOf('<div', targetIndex);

                            // If an opening <div> tag is found
                            if (divStartIndex !== -1)
                            {
                                // Extract everything before this <div> tag
                                storyDescription = storyDescription.substring(0, divStartIndex);
                            }
                        }
                    }
                    //if there's a search term...
                    if (searchTerm)
                    {
                        if (storyDescription.toLowerCase().indexOf(searchTerm.toLowerCase()) != -1)
                        {
                            addEpisode = true;
                        }
                    }
                    else
                    {
                        addEpisode = true;
                    }

                    if (selectedSeasons.length == 0)
                    {
                        addEpisode = true;
                    }

                    if (addEpisode)
                    {
                        html += `
                    <article class='episode'>
    
                    <h2>${storyTitle}</h2>
                    Date: ${storyDate}<br/>
                    ${storyDescription}
                    </article>
                    `
                    }
                }
            })
            document.getElementById('results').innerHTML = html;
            //document.body.insertAdjacentHTML("beforeend", html);

        })
        .catch(error =>
        {
            console.error('Error fetching the RSS feed:', error);
            document.getElementById('results').textContent = 'Error fetching the RSS feed. Please check the console for details.';
        });

}

//load;
processRSS();

document.getElementById('seasonSelect').addEventListener('change', function()
{
    processRSS();
});
document.getElementById('searchTerm').addEventListener('change', function()
{
    processRSS();
});

const bannedWords = ["nights", "us", "around", "the", "campfire", "tales", "about", "sleepless", "written", "by", "-", "Season", "Podcast", "XXXXX", 'xxxxx', "Episode", "Come", "Join", '01', '02', '03', '04', '05', '06', '07', '08', '09', '10', '11', '12', '13', '14', '15', '16', '17', '18', '19', '20', '21', '22', '23', '24', 'We', 'ponder', 'weak', 'and', 'weary', 'score', 'composed', 'here', 'to', 'click', 'learn', 'courtesy', 'of', 'creative', 'reason', 'media', 'inc.', 'all', 'rights', 'reserved', 'no', 'reproduction', 'of', 'or', "the", "be", "to", "of", "and", "a", "in", "that", "have", "I", "it", "for", "not", "on", "with", "he", "as", "you", "do", "at", "the", "of", "to", "and", "a", "in", "is", "it", "you", "that", "he", "was", "for", "on", "are", "with", "as", "I", "his", "they", "be", "at", "one", "have", "this", "from", "or", "had", "by", "not", "word", "but", "what", "some", "we", "can", "out", "other", "were", "all", "there", "when", "up", "use", "your", "how", "said", "an", "each", "she", "which", "do", "their", "time", "if", "will", "way", "about", "many", "then", "them", "write", "would", "like", "so", "these", "her", "long", "make", "thing", "see", "him", "two", "has", "look", "more", "day", "could", "go", "come", "did", "number", "sound", "no", "most", "people", "my", "over", "know", "water", "than", "call", "first", "who", "may", "down", "side", "been", "now", "find", "any", "new", "work", "part", "take", "get", "place", "made", "live", "where", "after", "back", "little", "only", "round", "man", "year", "came", "show", "every", "good", "me", "give", "our", "under", "name", "very", "through", "just", "form", "sentence", "great", "think", "say", "help", "low", "line", "differ", "turn", "cause", "much", "mean", "before", "move", "right", "boy", "old", "too", "same", "tell", "does", "set", "three", "want", "air", "well", "also", "play", "small", "end", "put", "home", "read", "hand", "port", "large", "spell", "add", "even", "land", "here", "must", "big", "high", "such", "follow", "act", "why", "ask", "men", "change", "went", "light", "kind", "off", "need", "house", "picture", "try", "us", "again", "animal", "point", "mother", "world", "near", "build", "self", "earth", "father", "head", "stand", "own", "page", "should", "country", "found", "answer", "school", "grow", "study", "still", "learn", "plant", "cover", "food", "sun", "four", "between", "state", "keep", "eye", "never", "last", "let", "thought", "city", "tree", "cross", "farm", "hard", "start", "might", "story", "saw", "far", "sea", "draw", "left", "late", "run", "don't", "while", "press", "close", "night", "real", "life", "few", "north", "open", "seem", "together", "next", "white", "children", "begin", "got", "walk", "example", "ease", "paper", "group", "always", "music", "those", "both", "mark", "often", "letter", "until", "mile", "river", "car", "feet", "care", "second", "book", "carry", "took", "science", "eat", "room", "friend", "began", "idea", "fish", "mountain", "stop", "once", "base", "hear", "horse", "cut", "sure", "watch", "color", "face", "wood", "main", "enough", "plain", "girl", "usual", "young", "ready", "above", "ever", "red", "list", "though", "feel", "talk", "bird", "soon", "body", "dog", "family", "direct", "pose", "leave", "song", "measure", "door", "product", "black", "short", "numeral", "class", "wind", "question", "happen", "complete", "ship", "area", "half", "rock", "order", "fire", "south", "problem", "piece", "told", "knew", "pass", "since", "top", "whole", "king", "space", "heard", "best", "hour", "better", "true", "during", "hundred", "five", "remember", "step", "early", "hold", "west", "ground", "interest", "reach", "fast", "verb", "sing", "listen", "six", "table", "travel", "less", "morning", "ten", "simple", "several", "vowel", "toward", "war", "lay", "against", "pattern", "slow", "center", "love", "person", "money", "serve", "appear", "road", "map", "rain", "rule", "govern", "pull", "cold", "notice", "voice", "unit", "power", "town", "fine", "certain", "fly", "fall", "lead", "cry", "dark", "machine", "note", "wait", "plan", "figure", "star", "box", "noun", "field", "rest", "correct", "able", "pound", "done", "beauty", "drive", "stood", "contain", "front", "teach", "week", "final", "gave", "green", "oh", "quick", "develop", "ocean", "warm", "free", "minute", "strong", "special", "mind", "behind", "clear", "tail", "produce", "fact", "street", "inch", "multiply", "nothing", "course", "stay", "wheel", "full", "force", "blue", "object", "decide", "surface", "deep", "moon", "island", "foot", "system", "busy", "test", "record", "boat", "common", "gold", "possible", "plane", "stead", "dry", "wonder", "laugh", "thousand", "ago", "ran", "check", "game", "shape", "equate", "hot", "miss", "brought", "heat", "snow", "tire", "bring", "yes", "distant", "fill", "east", "paint", "language", "among", "grand", "ball", "yet", "wave", "drop", "heart", "am", "present", "heavy", "dance", "engine", "position", "arm", "wide", "sail", "material", "size", "vary", "settle", "speak", "weight", "general", "ice", "matter", "circle", "pair", "include", "divide", "syllable", "felt", "perhaps", "pick", "sudden", "count", "square", "reason", "length", "represent", "art", "subject", "region", "energy", "hunt", "probable", "bed", "brother", "egg", "ride", "cell", "believe", "fraction", "forest", "sit", "race", "window", "store", "summer", "train", "sleep", "prove", "lone", "leg", "exercise", "wall", "catch", "mount", "wish", "sky", "board", "joy", "winter", "sat", "written", "wild", "instrument", "kept", "glass", "grass", "cow", "job", "edge", "sign", "visit", "past", "soft", "fun", "bright", "gas", "weather", "month", "million", "bear", "finish", "happy", "hope", "flower", "clothe", "strange", "gone", "jump", "baby", "eight", "village", "meet", "root", "buy", "raise", "solve", "metal", "whether", "push", "seven", "paragraph", "third", "shall", "held", "hair", "describe", "cook", "floor", "either", "result", "burn", "hill", "safe", "cat", "century", "consider", "type", "law", "bit", "coast", "copy", "phrase", "silent", "tall", "sand", "soil", "roll", "temperature", "finger", "industry", "value", "fight", "lie", "beat", "excite", "natural", "view", "sense", "ear", "else", "quite", "broke", "case", "middle", "kill", "son", "lake", "moment", "scale", "loud", "spring", "observe", "child", "straight", "consonant", "nation", "dictionary", "milk", "speed", "method", "organ", "pay", "age", "section", "dress", "cloud", "surprise", "quiet", "stone", "tiny", "climb", "cool", "design", "poor", "lot", "experiment", "bottom", "key", "iron", "single", "stick", "flat", "twenty", "skin", "smile", "crease", "hole", "trade", "melody", "trip", "office", "receive", "row", "mouth", "exact", "symbol", "die", "least", "trouble", "shout", "except", "wrote", "seed", "tone", "join", "suggest", "clean", "break", "lady", "yard", "rise", "bad", "blow", "oil", "blood", "touch", "grew", "cent", "mix", "team", "wire", "cost", "lost", "brown", "wear", "garden", "equal", "sent", "choose", "fell", "fit", "flow", "fair", "bank", "collect", "save", "control", "decimal", "gentle", "woman", "captain", "practice", "separate", "difficult", "doctor", "please", "protect", "noon", "whose", "locate", "ring", "character", "insect", "caught", "period", "indicate", "radio", "spoke", "atom", "human", "history", "effect", "electric", "expect", "crop", "modern", "element", "hit", "student", "corner", "party", "supply", "bone", "rail", "imagine", "provide", "agree", "thus", "capital", "won't", "chair", "danger", "fruit", "rich", "thick", "soldier", "process", "operate", "guess", "necessary", "sharp", "wing", "create", "neighbor", "wash", "bat", "rather", "crowd", "corn", "compare", "poem", "string", "bell", "depend", "meat", "rub", "tube", "famous", "dollar", "stream", "fear", "sight", "thin", "triangle", "planet", "hurry", "chief", "colony", "clock", "mine", "tie", "enter", "major", "fresh", "search", "send", "yellow", "gun", "allow", "print", "dead", "spot", "desert", "suit", "current", "lift", "rose", "continue", "block", "chart", "hat", "sell", "success", "company", "subtract", "event", "particular", "deal", "swim", "term", "opposite", "wife", "shoe", "shoulder", "spread", "arrange", "camp", "invent", "cotton", "born", "determine", "quart", "nine", "truck", "noise", "level", "chance", "gather", "shop", "stretch", "throw", "shine", "property", "column", "molecule", "select", "wrong", "gray", "repeat", "require", "broad", "prepare", "salt", "nose", "plural", "anger", "claim", "continent", "oxygen", "sugar", "death", "pretty", "skill", "women", "season", "solution", "magnet", "silver", "thank", "branch", "match", "suffix", "especially", "fig", "afraid", "huge", "sister", "steel", "discuss", "forward", "similar", "guide", "experience", "score", "apple", "bought", "led", "pitch", "coat", "mass", "card", "band", "rope", "slip", "win", "dream", "evening", "condition", "feed", "tool", "total", "basic", "smell", "valley", "nor", "double", "seat", "arrive", "master", "track", "parent", "shore", "division", "sheet", "substance", "favor", "connect", "post", "spend", "chord", "fat", "glad", "original", "share", "station", "dad", "bread", "charge", "proper", "bar", "offer", "segment", "slave", "duck", "instant", "market", "degree", "populate", "chick", "dear", "enemy", "reply", "drink", "occur", "support", "speech", "nature", "range", "steam", "motion", "path", "liquid", "log", "meant", "quotient", "teeth", "shell", "neck"];

function containsBannedWord(wpair)
{
    let a = wpair.split(' ')[0];
    let b = wpair.split(' ')[1];
    if (a)(a = a.toLowerCase())
    if (b)(b = b.toLowerCase())
    let lowera = "XXXXX";
    let lowerb = "XXXXX";
    let hasBA = false;
    let hasBB = false;
    let hasXX = false;
    if (bannedWords.some(bannedWord => a == bannedWord.toLowerCase()))
    {
        hasBA = true;
    }
    if (bannedWords.some(bannedWord => b == bannedWord.toLowerCase()))
    {
        hasBB = true;
    }
    if (wpair.indexOf('XXXXX') != -1)
    {
        hasXX = true;
    }

    if (hasBA || hasBB || hasXX)
    {
        return true;
    }
    else
    {
        return false;
    }
}



function generateWordPairs(text)
{
    const words = text.split(/\s+/);
    let pairs = [];

    //console.log(words);
    for (let i = 0; i < words.length - 1; i++)
    {

        let wOne = words[i];
        let wTwo = words[i + 1];
        //  if (!containsBannedWord(wOne) && !containsBannedWord(wTwo)) {
        if (wOne != '' && wTwo != '')
        {
            if (wOne != '-' && wTwo != '-')
            {
                let wordPair = wOne + " " + wTwo;
                wordPair = wordPair.replace('<div class="trix-content">', 'XXXXX');
                wordPair = wordPair.replace('<![CDATA[', 'XXXXX');
                wordPair = wordPair.replace('`class="trix-content"> <div>', 'XXXXX');
                wordPair = wordPair.replace('<div', 'XXXXX');
                wordPair = wordPair.replace('class="trix-content">', 'XXXXX');
                wordPair = wordPair.replace('<![CDATA[', 'XXXXX');
                wordPair = wordPair.replace('<p>', 'XXXXX');
                wordPair = wordPair.replace('<p>', 'XXXXX');
                wordPair = wordPair.replace('<p>', 'XXXXX');
                wordPair = wordPair.replace('</p>', 'XXXXX');
                wordPair = wordPair.replace('</p>', 'XXXXX');
                wordPair = wordPair.replace('</p>', 'XXXXX');
                wordPair = wordPair.replace('<br>', 'XXXXX');
                wordPair = wordPair.replace('XXXXX>', 'XXXXX');
                wordPair = wordPair.replace('<strong>', 'XXXXX');
                wordPair = wordPair.replace('</strong>', 'XXXXX');
                wordPair = wordPair.replace(/<[^>](.*?)>/g, 'XXXXX');
                wordPair = wordPair.replace(/href=>/g, 'XXXXX');
                wordPair = wordPair.replace('<a', 'XXXXX');
                wordPair = wordPair.replace('&amp;', 'XXXXX');
                wordPair = wordPair.replace('by:', 'XXXXX');
                wordPair = wordPair.replace('–', 'XXXXX');
                wordPair = wordPair.replace('(Story', 'XXXXX');
                wordPair = wordPair.replace(',', '');
                wordPair = wordPair.replace('XXXXX>', 'XXXXX');
                wordPair = wordPair.replace('XXXXX>', 'XXXXX');
                wordPair = wordPair.replace('XXXXX>', 'XXXXX');
                wordPair = wordPair.replace('XXXXX>', 'XXXXX');
                wordPair = wordPair.replace('XXXXX>', 'XXXXX');
                wordPair = wordPair.replace('XXXXX>', 'XXXXX');


                if (!containsBannedWord(wordPair))
                {
                    pairs.push(wordPair);
                }

            }
        }

        //  }

    }

    return pairs;
}