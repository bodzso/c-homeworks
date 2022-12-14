#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

const char *string[] = {"ablak", "ablakocska", "ablakos", "abonyban", "adasson", "adhatja", "adjon",  "adni", "adok", "adtak", "aggasztotta", "aggodalom", "agyagba", "agyonvert",  "ahmednek", "ahova", "ajkakkal", "akadt", "akaratomat", "akarja", "akarod",  "akarta", "akartok", "akasszon", "akik", "akinek", "akkordjai", "akkorra",  "alacsony", "alakban", "alakra", "alattuk", "ali", "alighogy", "alkalommal",  "alkonyatra", "alkudtam", "alma", "almagyaron", "alszom", "altisztek", "aludna",  "aludtam", "amaz", "amellett", "amelyekben", "amelyen", "amelyiken", "amellyel",  "amennyire", "amije", "amilyenek", "amint", "amulett", "angyal", "anna", "anyai",  "annyi", "annyit", "apjuk", "arabs", "aranyak", "aranygombjait", "aranyos",  "aranyszarv", "araszos", "arccal", "arcomat", "arcra", "arra", "aszongya",  "asszonyi", "asszonyokhoz", "asszonyt", "asztalra", "atyafival", "augusztusi",  "avult", "azazhogy", "azokat", "azoknak", "azonnal", "babadzsizi", "bagolyarcot",  "bajodban", "bajszos", "bajuszom", "bakancs", "bakocsaira", "balaton",  "ballagott", "balta", "bariton", "barom", "batyu", "becsapott", "bedobtak",  "beesett", "befordulok", "befutott", "behajtja", "behatoltak", "behozatta",  "behunyjuk", "bejuthassanak", "bekapcsolja", "belecsapott", "beledobolni",  "beleereszkedtek", "beleharapott", "belekapott", "belemarkolt", "beleolvasta",  "belerikoltott", "beletette", "bemegy", "bement", "bemutatva", "bennetek",  "benyitott", "beosont", "berakva", "besiet", "beszakadnak", "betakarta",  "betegek", "beteheti", "betoppant", "beugrok", "bevezetheted", "bevont",  "biccentett", "bilincsben", "bilincsem", "birka", "birokkal", "birtokait",  "bivaly", "biz", "bizalommal", "bizonyosabb", "biztat", "biztosan", "bodzafa",  "bokor", "bokros", "boldogan", "boldogulunk", "bolondoztak", "boltozata",  "boltozott", "boncsokok", "bontja", "bontsatok", "borlevest", "borospince",  "borulj", "borultan", "bosnya", "bot", "botozta", "budai", "bukdossanak",  "bukjon", "bum", "burrogva", "cecey", "cimbalom", "cipelne", "ciprusok",  "combvasat", "csaholnak", "csaknem", "csalni", "csapata", "csapatokat",  "csapatot", "csapkodja", "csapnak", "csapta", "csata", "csatlakoztok",  "csattant", "csavar", "csavarva", "cselekedd", "cselekedjek", "cselekszek",  "csemcsegetve", "csendet", "cseppekben", "cserepesen", "csiholj", "csillaghoz",  "csillagokon", "csillogtak", "csitt", "csoda", "csontja", "csontot",  "csoportnak", "csoportosuljon", "csorba", "csukjuk", "csupaszon", "csurom",  "dagadt", "dali", "daloljanak", "dalolt", "dalt", "danoljak", "danoltak",  "darabokat", "darabra", "debrecen", "debrecent", "dejszen", "delire",  "derekamon", "dermedt", "derviseket", "dervisre", "diadal", "dicsekedni",  "dinnye", "dob", "dobognak", "dobon", "dobost", "dobva", "dolgodban",  "dolgozhassanak", "dolgozni", "dolgoztatnunk", "dolguk", "dombokat",  "domborodtak", "donga", "dugja", "duhogta", "dunyha", "durrogva", "duzzogva",  "ebben", "ebnek", "edd", "egek", "egerig", "egri", "egybefolyt", "egyebet",  "egyenes", "egyenletesen", "egyetlenegy", "egyikben", "egyiptomiak", "egymagam",  "egyszer", "egyvalamit", "ej", "ejtettek", "eladja", "elakadt", "elbillen",  "elbumbumozta", "elcsillapodjon", "eledel", "elegyedik", "elejti", "elesik",  "elevenen", "elfelej", "elfelejtetted", "elfogadja", "elfogadott", "elfogna",  "elfogyott", "elfulladt", "elfutott", "elgondolkodva", "elhagyni", "elhajtottad",  "elhallgat", "elhanyatlott", "elhervadtak", "elhozni", "eligazodom", "elindult",  "eljutnak", "elkapom", "elkergeti", "elkomolyodott", "ellene", "ellenkezik",  "ellobbant", "elmaradt", "elmehessenek", "elmenetelemet", "elment", "elmondani",  "elmondtad", "elmosolyodtak", "elnyelte", "eloldotta", "elolvastatom",  "elpirosodva", "elpukkannak", "elragadja", "elriasztgatni", "elrogyik",  "elsoroltak", "elszontyolodva", "eltegye", "eltorzul", "elveszed", "elveszte",  "elvette", "elvigyorodik", "elvillant", "elvitted", "elvonulhasson", "embere",  "emberek", "emberemmel", "emberkarnyi", "emberrel", "emeleten", "emelgette",  "emelkedett", "emelni", "emez", "emlegette", "engedelmesek", "engedetlen",  "engedje", "engedtek", "enni", "ennyi", "ered", "eredve", "eresz", "ereszkedjen",  "eresztem", "eresztettek", "eretnek", "esembe", "esni", "estem", "esze",  "eszeltetek", "eszemmel", "eszik", "esztendeje", "ettek", "evezz", "ezekben",  "ezen", "ezernyi", "ezrek", "fa", "fagyosan", "fakadt", "fakasztotta", "falai",  "falakkal", "falatozott", "falba", "falkaraj", "falon", "falubeli", "falujukban",  "falut", "fanyereg", "faragva", "farkasszemet", "fecsegtek", "fedeztem",  "fegyvereddel", "fegyverek", "fegyveres", "fegyverkezve", "fej", "fejeden",  "fejemen", "fejetek", "fejire", "fejsze", "fekszem", "fektette", "felakasztatom",  "felbillentik", "felcsatolta", "feledje", "felejtesz", "felelet", "felelhetett",  "felelne", "felelte", "felfalta", "felfordult", "felfutott", "felhatolt",  "feljebb", "felkapcsolt", "felkel", "fellobbanva", "felnyitja", "felpattant",  "felragasszam", "felrobbantottuk", "feltegyelek", "felugrott", "felzavartak",  "fenevadak", "fent", "ferencet", "festeni", "festik", "fiadat", "fiaim", "fiam",  "fiatalabb", "fiataljainkat", "figyel", "figyelmet", "finom", "fizesd", "fog",  "fogadj", "fogadom", "fogai", "fogatokat", "fogja", "foglalja", "foglalni",  "foglyot", "fogoly", "fogom", "fogtak", "fogva", "fojtott", "fokosok", "foltot",  "folyna", "folytassam", "folytatniuk", "fonott", "fontot", "forduljak",  "fordulni", "fordultak", "forgatja", "forgok", "forintot", "forogsz",  "fosztogatod", "friss", "furakodhattak", "fussatok", "futkos", "futnak",  "futottak", "futva", "gabona", "gasparics", "gazember", "gerenda",  "gergelyedhez", "gergelyt", "gomb", "gombolta", "gondod", "gondolatai",  "gondolatokra", "gondolhatja", "gondolkodj", "gondolkozik", "gondolnak",  "gondolom", "gondoltuk", "gondoskodnia", "gondunk", "gubancos", "gurgula",  "gyakorta", "gyaloghadra", "gyalogosok", "gyaluban", "gyaurnak", "gyepen",  "gyerek", "gyerekeknek", "gyerekkel", "gyermeke", "gyermekeiket", "gyermekeket",  "gyermeket", "gyermekkor", "gyermekruha", "gyilkot", "gyomor", "gyorsabban",  "ha", "habozva", "hadak", "hadba", "hadirendben", "hadnagyok", "hadnagyunkat",  "hadseregbe", "hagyd", "hagyjuk", "hagynotok", "hagytad", "haja", "hajfonat",  "hajlik", "hajnalban", "hajnalra", "hajolt", "hajtja", "halad", "halas",  "halkan", "hallatszottak", "hallgat", "hallgatnak", "hallgatott", "hallgatva",  "hallod", "hallottam", "halmokon", "halom", "halottaikat", "halottaknak",  "halotti", "haltatok", "hamarosan", "hang", "hangokat", "hangosan", "hangzik",  "hanyatlott", "haragjuk", "haragszik", "harangok", "harapj", "harasztban",  "harci", "harcolhatunk", "harcolt", "harcoltunk", "harcot", "harmadikat",  "harmanli", "harminc", "harminchat", "harsogja", "harsogva", "hasba", "haszna",  "hatalmuk", "hatol", "hatvan", "havas", "hazaindultak", "hazaszeretet",  "hazudnak", "hebegi", "hegyeken", "hegyesre", "hegyin", "hegyre", "helyeken",  "helyett", "helyre", "hercegek", "hetedik", "hetetlen", "hetvennyolc", "hevert",  "hiba", "hidegen", "hinni", "hirdetett", "hiszem", "hit", "hitetlenek", "hittem",  "hogyan", "hogysem", "holdatlan", "holnap", "holtak", "holtan", "holtra",  "homlokkal", "homokon", "hoppra", "hordanom", "hordatok", "hordott", "hordozok",  "hordta", "horgozza", "hosszan", "hoz", "hozatott", "hozhattak", "hoznod",  "hozott", "hozz", "hull", "hulljon", "hullt", "hunyadinak", "huppognak",  "huszadik", "icce", "idegen", "ideges", "idei", "iderendelt", "igazabban",  "igazi", "igyekezett", "ihasson", "ijedt", "illant", "illedelmes", "illeti",  "ily", "ilyent", "inakodott", "indulat", "indulnom", "indulunk", "ingatta",  "ingesen", "innen", "inogtak", "intelek", "intsen", "iparosok", "irgalmazzanak",  "is", "ismerek", "ismerik", "ismersz", "isten", "istenemre", "istent", "iszen",  "iszol", "ital", "itatni", "ittak", "izabella", "izente", "izmail", "izomtalan",  "jaja", "jajgatva", "jancsira", "java", "jegesen", "jegyzett", "jelenet",  "jelenni", "jelentem", "jelentettem", "jelentsd", "jeleztek", "jobb", "jogunk",  "juliska", "jutalmad", "jutalomra", "jutni", "jutott", "juttatott", "kacagtak",  "kaktuszok", "kalauzolta", "kancsal", "kanyarodtak", "kaparta", "kapaszkodva",  "kapdosta", "kapjanak", "kapkodjatok", "kapni", "kapott", "kapta", "kapu",  "kapuhoz", "kapukat", "kapura", "kar", "kardja", "kardod", "kardom", "kardot",  "karjai", "karjukon", "karokkal", "karpereceket", "kasokat", "kassaiakat",  "katekizmus", "katonaruha", "kavicsos", "kedve", "kedvesek", "kedvetek",  "kegyelme", "kegyelmet", "kegyes", "kelet", "keletkezett", "keljen", "kellenek",  "kelni", "kemence", "kendnek", "kenyere", "kerekebbre", "kerekek", "keres",  "keresetem", "keresitek", "kereste", "kereszt", "keresztes", "kerget", "kertek",  "kesely", "keskeny", "ketten", "keverek", "kevesebb", "kezdeni", "kezdik",  "kezdve", "kezedet", "kezemet", "ki", "kibontotta", "kicsavarni", "kicsiny",  "kiejti", "kiesett", "kificamodott", "kifutott", "kihagytam", "kihallatszik",  "kihozott", "kiizentek", "kikelten", "kiknek", "kilincs", "kimagaslott",  "kimehetsz", "kiment", "kincsedet", "kincseket", "kinizsivel", "kiolvasta",  "kipirosodott", "kirakta", "kirontott", "kisasszonynak", "kisebbiket",  "kisgyereket", "kisiet", "kismacska", "kiszabadult", "kiszorult", "kitekerte",  "kiterjesztve", "kiugrik", "kiveszik", "kivette", "kivillantja", "kivonva",  "koccintgatott", "kocsi", "kocsijuk", "kocsimat", "kocsisnak", "kocsit",  "koldult", "kolomposok", "komolyan", "komorulnak", "konyha", "kopasz", "koponya",  "kor", "korhol", "kormosan", "korona", "kosarat", "krucifiksz", "kulacs", "kupa",  "kurddal", "kurjantott", "kuruzsolni", "kutyorodott", "lajtba", "lakatolt",  "lakattal", "laknak", "lakodalomba", "laktak", "lantos", "lapos", "lappangtak",  "lassan", "lator", "lebeg", "lebujdosol", "lecsatolja", "ledobta", "leeresztett",  "leette", "lefogta", "legeljenek", "legfeljebb", "leghosszabb",  "legkegyelmesebb", "legmagasztosabb", "legravaszabbul", "legszebbik", "legurult",  "legyetek", "lehajlik", "lehajtva", "lehelte", "lehet", "lehetne",  "leheveredtek", "lehullt", "leiramlott", "lekanyarodnak", "lekapott",  "lekuporodva", "lelkek", "lelkemre", "lelki", "lemegyek", "leng", "lengetett",  "lengyel", "lennie", "leoldottan", "lepillant", "lerontott", "lesnek",  "leszakad", "lesznek", "letartotta", "leteszed", "letrappolt", "leugorva",  "levele", "levelet", "leveleztetek", "leveregette", "leverte", "levest",  "leveti", "levillant", "liheg", "liliomnak", "lobbanik", "lobognak",  "lobogtatta", "locsog", "locsolniuk", "lombokon", "lomok", "lopnak", "losonczy",  "lovag", "lovagolt", "lovaimat", "lovakat", "lovakra", "lovasa", "lovasoknak",  "lovasunk", "lovukat", "luca", "lyukas", "lyukhoz", "macskaszemekben",  "madzagon", "magadfajta", "magamon", "magasan", "magasra", "magatoknak",  "magukat", "maguknak", "magvakra", "magyarnak", "magyaros", "maholnap", "majdan",  "malmot", "malomba", "marad", "maradjak", "maradnia", "maradt", "maradtnak",  "margitnak", "markodba", "markolata", "markomban", "marokkal", "martonfalvait",  "matyival", "mecseteket", "medvehangon", "megadtad", "megbetegedtem",  "megborzongott", "megcsapta", "megdegles", "megegyeztek", "megengedi",  "megeszik", "megfejtsem", "megfelelek", "megfog", "megfogott", "megfojtott",  "megfordult", "meggondoljuk", "meghajolni", "meghajszolta", "meghallgatod",  "meghalmozta", "meghalsz", "meghanyatlott", "meghatja", "meghordta",  "megindultak", "megint", "megismeri", "megissza", "megjegyzett", "megjelentse",  "megkeresnem", "megkezdik", "meglegyintek", "meglepte", "megloptak",  "megmenteni", "megmondhatom", "megmondottad", "megmosdatta", "megmutatom",  "megneszelte", "megnyargalta", "megnyugszik", "megolvasta", "megpihenjen",  "megragad", "megrakodottan", "megreszketett", "megrezzenve", "megritkul",  "megsereglik", "megsokallta", "megszakadt", "megszeppenve", "megtapogatta",  "megtartsa", "megtekinteni", "megtenni", "megtetszik", "megtudd", "megtudod",  "megvakarta", "megvannak", "megveszed", "megvillanik", "megzavarodik",  "megzavarodva", "megyek", "mehetnek", "mekcseyhez", "melegedett", "melegszenek",  "mellemben", "mellest", "mely", "menet", "menetet", "menjen", "menni", "menten",  "mentsenek", "menyecske", "mennyezetek", "mennyivel", "meredeznek", "mereszti",  "merjetek", "merte", "mesebeli", "mesterkedni", "metszened", "meztette", "miben",  "mihelyst", "mikor", "mind", "mindazok", "mindenben", "mindenesnek",  "mindenikkel", "mindenki", "mindenkivel", "mindennapos", "mindezek", "mindnek",  "minket", "mintsem", "miska", "mivel", "mohamed", "mondani", "mondatonkint",  "mondhat", "mondja", "mondod", "mondotta", "mondva", "morajlott", "mormogja",  "mormolt", "morogva", "mosakodnak", "mosdott", "mosolyog", "most",  "mostohaanyja", "mozdulatait", "mozdulatot", "mozduljon", "mozgatja", "mozog",  "mozsarat", "mulatozik", "mulattattunk", "mutasd", "mutatkozik", "mutatok",  "mutattak", "muzsika", "nagyban", "nagykapun", "nagyokat", "nagyurak", "napig",  "naplemente", "napod", "napos", "napra", "negyedik", "negyvenkilenc", "neked",  "nekiesik", "nekik", "nekiugrik", "nemegyszer", "nemesurak", "nemzet", "nemzeti",  "nesztek", "nevedet", "nevelkedett", "nevet", "nevettek", "nevezi", "ni", "no",  "nyakadra", "nyakat", "nyakukon", "nyargal", "nyavalya", "nyelv", "nyer",  "nyerge", "nyerges", "nyihogva", "nyilallik", "nyirok", "nyitni", "nyitva",  "nyolcvan", "nyomakodnak", "nyomorodva", "nyomtak", "nyomunkba", "nyugasztva",  "nyugodott", "nyugtalanabban", "nyulak", "odaadja", "odaadtam", "odacipelte",  "odafordul", "odakap", "odalent", "odaomlott", "odarohan", "odasorakozott",  "odatolongott", "odaveszett", "odavezette", "oka", "okoskodj", "oktatni",  "olajat", "olaszok", "old", "oldalon", "oldallyukon", "oldozd", "oltalmazza",  "olvasatlanul", "olvasom", "olvastam", "olyanforma", "olyat", "omolt",  "orgonabokrokkal", "oromra", "orrodat", "orvosai", "ostorral", "ostrommal",  "ostromra", "oszlopai", "oszlopon", "oszoltan", "osztani", "osztotta", "otromba",  "otthagyod", "pad", "padra", "pajzsok", "pajzsul", "pallost", "panni",  "papirosaidat", "papirosra", "paplan", "papokkal", "paprika", "papunk",  "paradicsombeli", "parancsolja", "parancsolok", "paraszt", "parasztgyereket",  "parasztok", "paraszttal", "partja", "patak", "patakot", "pattintunk",  "pazarolta", "pedig", "pelyhekben", "pengette", "percek", "percnyi", "peregve",  "pergett", "pestet", "petrovich", "piaci", "piasztert", "pihenhettek",  "pihennem", "pikkelyes", "pillanatot", "pillantott", "pince", "pirosan",  "pirosra", "pista", "pitypang", "pofont", "pokolba", "pokolszerrel", "pontokra",  "porba", "porosan", "port", "potrohos", "puhafa", "pulykacomb", "puskaporhoz",  "puskaporral", "pusztultok", "puttonyos", "rabjai", "rablott", "raboknak",  "rabolva", "rabra", "ragadja", "ragaszd", "ragyogott", "rajtad", "rajza",  "rajzolt", "rajzott", "rakatott", "rakjunk", "rakodottan", "rakta", "ravasz",  "rebegte", "recsegve", "reggeli", "rejtekfaluban", "rekedt", "remegett",  "remeteudvaron", "rendelem", "rendelkezett", "rendelkezzen", "rendelve",  "rendezkedni", "rengeteg", "restellte", "reszketteti", "rettenjen", "rezet",  "riadalom", "rikkant", "rikoltnak", "rikoltva", "ritkult", "robognak",  "rogyadozik", "rohannak", "rohanva", "rokonaihoz", "romhalmot", "ronda",  "rongyok", "rongyosabb", "rontanak", "rontotta", "ropognak", "roppant",  "rosszabb", "rotyogott", "rudakat", "rudat", "sajtot", "sakkoztak", "sarka",  "sarkon", "sarokban", "sastollas", "sebek", "sebhely", "sehol", "sejteni",  "selyem", "selyemmel", "semmi", "senki", "sercegett", "serege", "sereggel",  "siessek", "sietnek", "siket", "sikoltozva", "simogatni", "sincsen", "sisak",  "sisakkal", "sisakos", "sistergett", "sodorta", "sokadozik", "sokkal",  "somfagallyal", "sophia", "sora", "sorban", "sorra", "sort", "stambulba",  "sugaraiban", "suhant", "susog", "sustorogva", "szabadban", "szabadultam",  "szabtam", "szaggatta", "szagot", "szakadozni", "szakasztott", "szaladt",  "szalkayt", "szapolyait", "szaporodtak", "szarvas", "szavai", "szavaknak",  "szavamnak", "szebbnek", "szedetett", "szednek", "szedtek", "szegezte",  "szeglettorony", "szekerek", "szekerekre", "szelemenfa", "szeletet", "szem",  "szemed", "szemeket", "szemes", "szendergett", "szentelem", "szepegett", "szerb",  "szerecsent", "szeren", "szeret", "szeretetben", "szeretitek", "szerette",  "szereznek", "szerint", "szerzett", "sziget", "szikra", "szirt", "szokatlan",  "szokta", "szolakok", "szolnokot", "szomjazom", "szopta", "szorul", "szurkot",  "szusszant", "tagokat", "takarodj", "takarta", "talpig", "tanakodtak", "tanult",  "tapasztalt", "tapint", "tapogassa", "tar", "tarisznya", "tart", "tartania",  "tartja", "tartok", "tartottak", "tartozunk", "tartsd", "tavasz", "te",  "tegnapi", "tegyetek", "tehet", "tehetne", "tekercs", "tekintet", "tekintetes",  "tekintettel", "tele", "telepedjek", "telken", "temessenek", "temetnek",  "templomba", "templomodban", "tengerbe", "tengerparton", "tenyere", "tereket",  "teremhez", "teremtette", "terjed", "terjegetve", "termeibe", "termet", "tessen",  "teste", "testesebb", "teszek", "tesztek", "tetszettek", "tettek", "tietek",  "tilalmas", "tiporja", "tiszta", "tiszteknek", "tiszteletes", "tisztes",  "tisztje", "tisztjeire", "tisztogatta", "titka", "titkos", "tizedesnek",  "tizenegyen", "tizennyolcadik", "tolakodott", "toll", "tolong", "tolultak",  "tomporomat", "topcsiknak", "toppantott", "tornyai", "tornyon", "torony",  "toronynak", "trombita", "tudd", "tudjuk", "tudnom", "tudott", "tudtok",  "tulajdonosa", "tutulnak", "udvari", "udvarra", "ugorjatok", "ugratni",  "ugrottam", "ugyanannyi", "ugyanekkor", "ugyanott", "ujjain", "ujjongtak", "ura",  "uraink", "uraknak", "uramnak", "urunkat", "utam", "utat", "utca", "vacogott",  "vadaskertben", "vagyis", "vagytok", "vajon", "vakarintott", "vakolat",  "vakolnak", "vakulva", "valahol", "valakivel", "valamelyiknek", "valamennyinek",  "valamikor", "valamit", "vallunk", "varr", "varrniuk", "varrtak", "vasakarata",  "vasba", "vaskapcsot", "vasport", "vastagon", "vedd", "veje", "veletek",  "verebek", "verekedik", "verekszem", "veresborral", "verette", "vermeket",  "verseny", "vert", "verve", "vesz", "veszedelmeknek", "veszekedjenek",  "vesszenek", "vesztve", "vetettek", "vetkezetten", "vettek", "vezesd",  "vezetett", "vezette", "viadal", "viaszolva", "vidd", "vigye", "vigyorog",  "viharosan", "villant", "villognak", "vinni", "virradatkor", "virrasztaniuk",  "viselje", "viselte", "viszek", "viszketett", "visszaadva", "visszafojtott",  "visszafordultok", "visszahozta", "visszanevet", "visszarohant", "visszatekint",  "visszatorpannak", "visszavezette", "vitetett", "vizes", "volt", "voltunk",  "vonalas", "vonatott", "vonszolva", "vontatnak", "vonulni", "zabozott",  "zavarja", "zavaros", "zene", "zivatarba", "zoltaynak", "zuhannak", "zuhognak",  "zsebekben", "zsibajgott", "zsilip", "zsineg", "zsoldost", ""};

const char *test[] = {"lennie", "fakadt", "ablakocska", "ablakos", "abonyban", "adasson", "adhatja", "adjon",  "adni", "enni", ""};

void szo_keres(){
    char buf[15];
    scanf("%s", &buf);
    int i;
    for(i = 0; string[i] != ""; i++){
        if(strstr(string[i], buf))
            printf("%s\n", string[i]);
    }
}

void maganhangzo(){
    char buf[15];
    scanf("%s", &buf);
    int i;
    char elozo = '\0';
    for(i = 0; buf[i] != '\0'; i++){
        if((buf[i] == 'a') || (buf[i] == 'e') || (buf[i] == 'i') || (buf[i] == 'o') || (buf[i] == 'u')){
            if(elozo != '\0' && buf[i] != elozo){
                printf("kulonfele maganhangzokat tartalmaz\n");
                return;
            }
            elozo = buf[i];
        }

    }
    if(elozo == '\0')
        printf("nem tartalmaz maganhangzokat\n");
    else
        printf("csak egyforma maganhangzokat tartalmaz\n");
}


enum hang{magas, mely, vegyes};
enum hang hangrend(char buf[15]){
    enum hang{magas, mely, vegyes} h;
    if((strchr(buf, 'e') || strchr(buf, 'i')) && (strchr(buf, 'a') || strchr(buf, 'o') || strchr(buf, 'u'))){
        return vegyes;
    }
    else if(strchr(buf, 'e') || strchr(buf, 'i')){
        return magas;
    }
    else{
        return mely;
    }
}

void hangrend_szamol(){
    int i;
    int r[] = {0, 0, 0};
    int tmp;
    for(i = 0; string[i] != ""; i++){
        tmp = hangrend(string[i]);
        switch(tmp){
            case magas:
                r[0]++;
                break;
            case mely:
                r[1]++;
                break;
            case vegyes:
                r[2]++;
                break;
        }
    }
    double a = (double)r[0]/i*100;
    double b = (double)r[1]/i*100;
    double c = (double)r[2]/i*100;
    printf("Magas: %d/%0.0f%%\nMely: %d/%0.0f%%\nVegyes: %d/%0.0f%%\n", r[0], a, r[1], b, r[2], c);
}

bool abc(char buf[15]){
    int i;
    for(i = 0; buf[i] != '\0'; i++){
        if(buf[i+1] != '\0'){
            if(buf[i] > buf[i+1]){
                return false;
            }
        }
    }
    return true;
}

void abc_keres(){
    int i;
    for(i = 0; string[i] != '\0'; i++){
        if(abc(string[i])){
            printf("%s\n", string[i]);
        }
    }
}

void ertelmes(){
    int i, x;
    char tmp[15];
    for(i = 0; string[i] != ""; i++){
        snprintf(tmp, strlen(string[i])-1, &string[i][1]);
        for(x = 0; string[x] != ""; x++){
            if(strcmp(string[x], tmp) == 0){
                printf("%s: %s\n", string[i], tmp);
            }
        }
    }
}


int main()
{
    printf("1.\n");
    szo_keres();
    printf("\n2.\n");
    maganhangzo();
    printf("\n3.\n");
    hangrend_szamol();
    printf("\n4.\n");
    abc_keres();
    printf("5.\n");
    ertelmes();
    return 0;
}
