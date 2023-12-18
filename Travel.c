#include<stdio.h>
int main()
{
    int zone,userchoice,act;
   for(int i=1;i<=1;i++)
   {
       top:
       printf("HELLO!\n");
       printf("WELCOME TO YOUR HOLIDAY PLANNING SECTION!\n");
       printf("\nList Of Zones Of India\n");
       printf(" <1>North Zone\n <2>South Zone\n <3>West Zone\n <4>East Zone\n <5>Central Zone\n <6>North-East Zone\n ");
       printf("Choose the place you want to travel:");
       scanf("%d",&zone);
       if(zone==1){
        n:
        printf("Best Places To Travel:\n");
        printf(" <1>Sringar\n <2>Leh-Ladakh\n <3>Ranikhet\n <4>Amritsar\n <5>Mathura\n <6>Delhi\n <7>Karnal\nCHOOSE YOUR DESIRED PLACE:");
        scanf("%d",&userchoice);
          if(userchoice==1) printf("Visit:\n<1>Shankaracharya Hill <2>Dal Lake <3>Sonamarg <4>Sinathan Top \nFood to Try:\n<1>Dum Aloo <2>Nadru Monje <3>Chaman <4>Modur Pulav");
          else if(userchoice==2) printf("Visit:\n<1>Pangong Tso <2>Thiksey Monastery <3>Shanti Stupa <4>Sand Dunes Leisure Park \nFood to Try:\n<1>Thukpa <2>Skyu <3>Tigmo <4>Phirni");
          else if(userchoice==3) printf("Visit:\n<1>Naukuchia Taal <2>Apple Garden <3>Jhula Devi Mandir <4Sunset Point> \nFood to Try:\n<1>Kafuli <2>Chainsoo <3>Kumaoni Dal Vada <4>Jhangore ki Kheer");
          else if(userchoice==4) printf("Visit:\n<1>Golden Temple <2>Atari Border <3>Jallianwala Bagh <4>The Partition Museum \nFood to Try:\n<1>Kulcha <2>Guru Ka Langar & Kada Prasad <3>Dal Makhani <4>Lassi ");
          else if(userchoice==5) printf("Visit:\n<1>Dwarkadhish Temple <2>ISKCON Temple <3> Kans Qila <4>Nandgaon and Barsana \nFood to Try:\n<1>Bedai with Aloo Sabzi <2>Mathura ke Pede <3>Kachori <4>Rabri");
          else if(userchoice==6) printf("Visit:\n<1>Red Fort <2>Akshardham Temple <3>Humayun's Tomb <4>Akshardham Temple \nFood to Try:\n<1>Paranthas <2>Dilli Ki Nihari <3>Rajma Chawal <4>Daulat Ki Chaat");
          else if(userchoice==7) printf("Visit:\n<1>Karnal Fort <2>Cantonment Church Tower <3>Pukka Pul <4>Pindari Palace \nFood to Try:\n<1>Matar Kulcha <2>Kachori with Aloo Sabzi <3>Pinni <4>Karnal-style Paneer");
          else printf("invalid input");
          printf("\nGo back/Next(1/0):"); 
          scanf("%d",&act);
          if(act) goto n;
       }
       else if(zone==2){
        s:
        printf("Best Places To Travel:\n");
        printf(" <1>Lakshwdeep\n <2>Puducherry\n <3>Coorg\n <4>Ooty\n <5>Andaman&Nicobar Islands\n <6>Alappuzha\n <7>Vishakapatnam\nCHOOSE YOUR DESIRED PLACE:");
         scanf("%d",&userchoice); 
          if(userchoice==1) printf("Visit:\n<1>Agatti Island <2> Bangaram Island <3> Kavaratti Island <4> Minicoy Island \nFood to Try:\n<1>Unnakai <2>Pathiri <3>Cassava Chips <4>Sambharam");
          else if(userchoice==2) printf("Visit:\n<1>Promenade Beach <2>Auroville <3> Paradise Beach <4>Chunnambar Boathouse \nFood to Try:\n<1>Pondicherry Macarons <2>Sambhar <3>Creole and French Cuisine <4>Bouillabaisse");
          else if(userchoice==3) printf("Visit:\n<1>Abbey Falls <2>Dubare Elephant <3>Camp Coffee Plantation Tours <4>Bylakuppe \nFood to Try:\n<1>Kadambuttu <2>Bamboo Shoot Curry <3>Thambuttu <4>Coorgi Biryani");
          else if(userchoice==4) printf("Visit:\n<1>Pykara Falls and Pykara Lake <2>Doddabetta Peak <3>Tea Museum <4>St. Stephen's Church \nFood to Try:\n<1>Ooty Varqui Parotta <2>Ooty Tea <3>Dosa and Filter Coffee <4>Ooty Biryani ");
          else if(userchoice==5) printf("Visit:\n<1>Chidiya Tapu <2>Port Blair <3>Cellular Jail <4>Jolly Buoy Island and Red Skin Island \nFood to Try:\n<1> Grilled Lobster <2>Squid Curry <3>Andaman Chilli Chicken <4>Bamboo Chicken");
          else if(userchoice==6) printf("Visit:\n<1>Kuttanad <2>Alappuzha Backwaters <3>Punnamada Lake <4>Marari Beach \nFood to Try:\n<1>Puttu and Kadala Curry <2>Kerala Sadya <3>Kallummakkaya Ularthiyathu <4>Unnakaya");
          else if(userchoice==7) printf("Visit:\n<1>INS Kursura Submarine Museum <2>Borra Caves <3>Submarine Museum <4>Submarine Museum \nFood to Try:\n<1>Pesarattu <2>Pesarattu <3>Aratikaya Bajji <4>Royyala Iguru");
          else printf("invalid input");
          printf("\nGo back/Next(1/0):"); 
          scanf("%d",&act);
          if(act) goto s;
           
       }
       else if(zone==3){
        w:
        printf("Best Places To Travel:\n");
        printf(" <1>Udaipur\n <2>Jaipur\n <3>Mumbai\n <4>Aurangabad\n <5>Ahmedabad\n <6>Goa\nCHOOSE YOUR DESIRED PLACE:");
        scanf("%d",&userchoice);
        if(userchoice==1) printf("Visit:\n<1>City Palace <2>Lake Pichola <3>Saheliyon Ki Bari <4>Vintage Car Museum \nFood to Try:\n<1>Makhaniya Lassi <2>Mawa Kachori <3>Dal Baati Churma <4>Gatte ki Sabzi");
          else if(userchoice==2) printf("Visit:<1>Jaigarh Fort <2>Birla Mandir <3>Jantar Mantar <4>Hawa Mahal \n \nFood to Try:\n<1>Rajasthani Thali <2>Mirchi Bada <3>Ghewar <4>Pyaaz Kachori");
          else if(userchoice==3) printf("Visit:\n<1>Gateway of India <2>Marine Drive <3>Juhu Beach <4>Siddhivinayak Temple \nFood to Try:\n<1>Vada Pav <2>Pav Bhaji <3>Misal Pav <4>Dhansak");
          else if(userchoice==4) printf("Visit:\n<1>Ajanta Caves <2>Aurangabad Caves <3>Soneri Mahal <4>Ellora Caves \nFood to Try:\n<1>Puran Poli <2>Aurangabadi Biryani <3>Sheermal <4>Pithla Bhakri ");
          else if(userchoice==5) printf("Visit:\n<1>Calico Museum of Textiles <2>Sabarmati Ashram <3>Kankaria Lake <4>Vastrapur Lake \nFood to Try:\n<1>Dabeli <2>Fafda-Jalebi <3>Khaman-Dhokla <4>Kathiawadi Thali");
          else if(userchoice==6) printf("Visit:\n<1>Basilica of Bom Jesus <2>Se Cathedral <3>Cruise on Mandovi River <4>Dona Paula \nFood to Try:\n<1>Bebinca <2>Choriz Pão <3>Vindaloo <4>Sannas");
          else printf("invalid input");
          printf("\nGo back/Next(1/0):"); 
          scanf("%d",&act);
          if(act) goto w;
       }
       else if(zone==4){
          e:
        printf("Best Places To Travel:\n");
        printf(" <1>Darjeeling\n <2>Kolkata\n <3>Puri\n <4>Bodh Gaya\n <5>Bhubuneshwar\nCHOOSE YOUR DESIRED PLACE:");
        scanf("%d",&userchoice);
        if(userchoice==1) printf("Visit:\n<1>Tiger Hill <2>Peace Pagoda <3>Padmaja Naidu Himalayan Zoological Park <4>Tea Gardens and the Happy Valley Tea Estate \nFood to Try:\n<1>Momos <2>Churpee <3>Darjeeling Tea <4>Tingmo with Shapta");
          else if(userchoice==2) printf("Visit:\n<1>Victoria Memorial <2>Howrah Bridge and the Hooghly River <3>Indian Museum <4>Dakshineswar Kali Temple and Belur Math \nFood to Try:\n<1>Kathi Rolls <2>Phuchka <3>Rosogolla <4>Telebhaja");
          else if(userchoice==3) printf("Visit:\n<1>Jagannath Temple <2>Raghurajpur Artist Village <3>Chilika Lake <4>Pipili Village \nFood to Try:\n<1>Khaja <2>Mahaprasad at Jagannath Temple <3> Puri Sabji <4>Dalma");
          else if(userchoice==4) printf("Visit:\n<1>Mahabodhi Temple <2>Bodhi Tree <3>Vietnamese Temple <4>Dungeshwari Cave Temples \nFood to Try:\n<1>Litti Chokha <2>Sattu Paratha <3>Tilkut <4>Thekua ");
          else if(userchoice==5) printf("Visit:\n<1>Lingaraj Temple <2>Udayagiri and Khandagiri Caves <3>Odisha State Museum <4>Ekamra Kanan Botanical Gardens \nFood to Try:\n<1>Dahibara Aloodum <2>Chhena Poda <3>Pakhala Bhata <4>Chhena Gaja");
          else printf("invalid input");
          printf("\nGo back/Next(1/0):"); 
          scanf("%d",&act);
          if(act) goto e;
       }
       else if(zone==5){
          c:
        printf("Best Places To Travel:\n");
        printf(" <1>Kanha National Park\n <2>Gwalior\n <3>Sanchi\n <4>Chitrakote Falls\n <5>Barnawapara Wildlife sanctuary\nCHOOSE YOUR DESIRED PLACE:");
        scanf("%d",&userchoice);
        if(userchoice==1) printf("Visit:\n<1>Kanha Meadows <2>Shravan Tal <3>Kanha Museum <4>Bamni Dadar \nFood to Try:\n<1>Chakki ki Shak <2>Barahmasa <3>Bhutte Ka Kees <4>Kebabs");
          else if(userchoice==2) printf("Visit:\n<1>Gwalior Fort <2>Jai Vilas Palace and Scindia Museum <3>Tomb of Tansen <4>Sun Temple \nFood to Try:\n<1>Bedai <2>Kachori <3>Gajak <4>Poha and Jalebi");
          else if(userchoice==3) printf("Visit:\n<1>Sanchi Stupa <2>Ashoka Pillar <3>Sanchi Museum <4>Toranas (Gateway)  \nFood to Try:\n<1> Bhopali Gosht Korma <2>Poha Jalebi <3>Bhutte Ka Kees <4>Dal Bafla");
          else if(userchoice==4) printf("Visit:\n<1>Chitrakote Waterfall <2>Chitrakoot Dham <3>Tirathgarh Falls <4>Kanger Valley National Park \nFood to Try:\n<1>Chousela <2>Aamat Bore <3>Baasi <4>Chila ");
          else if(userchoice==5) printf("Visit:\n<1>Sitanadi River <2>Kabirdhara Waterfalls <3>Nature Trails and Treks <4>Wildlife Sightings \nFood to Try:\n<1>Chila<2> Farra <3>Sabudana Khichdi <4>Kusli ");
          else printf("invalid input");
          printf("\nGo back/Next(1/0):"); 
          scanf("%d",&act);
          if(act) goto c ;
       }
       else if(zone==6){
          ne:
        printf("Best Places To Travel:\n");
        printf(" <1>Shillong\n <2>Gangtok\n <3>Cherrapunji\n <4>Kaziranga National Park\n <5>Loktak Lake\n <6>Roing\nCHOOSE YOUR DESIRED PLACE:");
        scanf("%d",&userchoice);
        if(userchoice==1) printf("Visit:\n<1>Elephant Falls  <2>Don Bosco Museum <3>Elephant Falls <4>Umiam Lake (Barapani) \nFood to Try:\n<1>Jadoh <2>Dohneiiong <3>Cherrapunji");
          else if(userchoice==2) printf("Visit:\n<1>Nathula Pass <2>Rumtek Monastery <3>MG Marg <4>Tsomgo Lake (Changu Lake) \nFood to Try:\n<1>ChickenMomos <2>Thukpa <3>Phagshapa");
          else if(userchoice==3) printf("Visit:\n<1>Nohkalikai Falls <2>Double Decker Living Root Bridge <3>Mawsmai Cave <4>Seven Sisters Falls \nFood to Try:\n<1>Cherrapunji Chaas <2> Smoked Pork <3>Cherrapunji Berries");
          else if(userchoice==4) printf("Visit:\n<1>Mihimukh <2>Panbari Reserve Forest <3> Bagori Range <4>Agaratoli Range \nFood to Try:\n<1>Assamese Thali <2>Masor Tenga <3>Pitha");
          else if(userchoice==5) printf("Visit:\n<1>Keibul Lamjao National Park <2>Sendra Island <3>Loktak Hydroelectric Project <4>Thanga \nFood to Try:\n<1>Ngari <2>Eromba <3>Chak-hao Kheer");
          else if(userchoice==6) printf("Visit:\n <1>Mehao Lake <2>Mayudia <3>Mehao Wildlife Sanctuary <4>Bhismaknagar Fort \nFood to Try:\n<1>Apong <2>Zan <3>Pika Pila");
          else printf("invalid input");
          printf("\nGo back/Next(1/0):"); 
          scanf("%d",&act);
          if(act) goto ne;
       }
        int a;
        printf("\nExit/Enter your choice again(0/1)");
        scanf("%i",&a);
        if(a) goto top;
        else break;
    }
       return 0; 
}

