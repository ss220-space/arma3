// Класс музыки. Пример классов для динамической музыки: - Shield 
//class Track_Name
//{
////name = "Track Name (Best left in Comment mode)";
//sound[] = {"bf_Adapt\music\track_name.ogg",1.0,1.0};
//duration=length of audio in seconds;
//parameters[]    = {"parameter"}; 
//};
//
//here are the list of parameters that can be used to create arrays

//-- for infantry --
//during daylight "daytime"
//during night "nighttime"
//during rain "rain"
//during fog "fog"
//during skydiving "skydive"
//during scuba diving "scubadive"


//-- for vehicles --
//for cars "car"
//for tanks "tank"
//for boats "boat"
//for submarines "submarine"
//for helicopters "helicopter"
//for planes "plane"

//-- for combat -- might do more
//for infantry combat "infantrycombat"
//for fog infantry combat "infantryfogcombat"
//for get away or vehicle combat "vehiclecombat

// Импорт оригинальных композиций A3 и A1/A2/A2OA
import CUP_A1_Arma_Magna from CfgMusic;
import CUP_A1_Arma_Vera from CfgMusic; 
import CUP_A1_Black_Ops from CfgMusic;
import CUP_A1_Field_Track from CfgMusic; 
import CUP_A1_First_Assault from CfgMusic;
import CUP_A1_Flashpoint_Rearmed from CfgMusic;
import CUP_A1_Paradise_On_Earth from CfgMusic;
import CUP_A1_Primo_In_Mortis from CfgMusic;
import CUP_A1_Second_Assault from CfgMusic;
import CUP_A1_Street_Combat from CfgMusic;
import CUP_A1_Team_Bravo from CfgMusic;
import CUP_A1_Team_Alpha from CfgMusic;
import CUP_A2EWEW_ToWar from CfgMusic;
import CUP_A2EWEW_DEFCON from CfgMusic;
import CUP_A2EWEW_Fallout from CfgMusic;
import CUP_A2EWEW_MAD from CfgMusic;
import CUP_A2EWEW_Sky_Net from CfgMusic;
import CUP_A2EWEW_Wasteland from CfgMusic;
import CUP_A2_Cold_Wind from CfgMusic;
import CUP_A2_Vague_Shapes from CfgMusic;
import CUP_A2_Indian_Summer from CfgMusic;
import CUP_A2_Electronic_Warfare from CfgMusic;
import CUP_A2_Cobalt from CfgMusic;
import CUP_A2_Khe_Sanh_Riff from CfgMusic;
import CUP_A2_Manhattan from CfgMusic;
import CUP_A2_Reforger from CfgMusic;
import CUP_A2_Defcon_Three from CfgMusic;
import CUP_A2_Dead_Forest from CfgMusic;
import CUP_A2_Insertion from CfgMusic;
import CUP_A2_First_To_Fight from CfgMusic;
import CUP_A2_Reinforcements from CfgMusic;
import CUP_A2_Warpath from CfgMusic;
import CUP_A2_Abandoned_Battlespace from CfgMusic;
import CUP_A2_Last_Men_Standing from CfgMusic;
import CUP_A2_Harvest_Red from CfgMusic;
import CUP_A2_Movement_To_Contact from CfgMusic;
import CUP_A2_Logistics from CfgMusic;
import CUP_A2_Large_Scale_Assault from CfgMusic;
import CUP_A2_The_Movement from CfgMusic;
import CUP_A2_Sharping_Knives from CfgMusic;
import CUP_A2_Close_Quarter_Combat from CfgMusic;
import CUP_A2_Morning_Sortie from CfgMusic;
import CUP_A2_Valentine from CfgMusic;
import CUP_A2_Marauder_Song from CfgMusic;
import CUP_A2_Ghost_Waltz from CfgMusic;
import CUP_A2_Debriefing from CfgMusic;
import CUP_A2_Badlands from CfgMusic;
import CUP_A2_Rise_Of_The_Fallen from CfgMusic;
import CUP_A1QG_Mission_02 from CfgMusic;
import CUP_A1QG_Mission_02_outro from CfgMusic;
import CUP_A1QG_Mission_03 from CfgMusic;
import CUP_A1QG_Mission_03_outro from CfgMusic;
import CUP_A1QG_Mission_04 from CfgMusic;
import CUP_A1QG_Mission_04_outro from CfgMusic;
import CUP_A1QG_Mission_05 from CfgMusic;
import CUP_A1QG_Mission_05_outro from CfgMusic;
import CUP_A1QG_Mission_06 from CfgMusic;

class CfgMusic
{
	class Empty
	{
		name = "Empty Sound";
		sound[] = {"music\ogg\empty.ogg",1.0,1.0};
		duration=1;
	};
	class Dynamic_CUP_A1_Arma_Magna: CUP_A1_Arma_Magna
	{	
		parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a1\Arma_Magna.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A1_Arma_Vera: CUP_A1_Arma_Vera
	{	
		parameters[] = {"boat", "tank", "helicopter", "plane", "skydive", "car"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a1\Arma_Vera.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A1_Black_Ops: CUP_A1_Black_Ops
	{	
		parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a1\Black_Ops.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A1_Field_Track: CUP_A1_Field_Track
	{	
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a1\Field_Track.ogg",
			1,
			1
		};

	};
	class Dynamic_CUP_A1_First_Assault: CUP_A1_First_Assault
	{
		parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a1\First_Assault.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A1_Flashpoint_Rearmed: CUP_A1_Flashpoint_Rearmed
	{	
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane", "skydive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a1\Flashpoint_Rearmed.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A1_Paradise_On_Earth: CUP_A1_Paradise_On_Earth
	{	
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane", "skydive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a1\Paradise_On_Earth.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A1_Primo_In_Mortis: CUP_A1_Primo_In_Mortis
	{	
		parameters[] = {"daytime", "nighttime", "rain", "fog", "scubadive", "submarine"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a1\Primo_In_Mortis.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A1_Second_Assault: CUP_A1_Second_Assault
	{
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane", "skydive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a1\Second_Assault.ogg",
			1,
			1
		};
		
	};
	class Dynamic_CUP_A1_Street_Combat: CUP_A1_Street_Combat
	{
		parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a1\Street_Combat.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A1_Team_Bravo: CUP_A1_Team_Bravo
	{
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane", "skydive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a1\Team_Bravo.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A1_Team_Alpha: CUP_A1_Team_Alpha
	{
		parameters[] = {"vehiclecombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a1\Team_Alpha.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2EWEW_ToWar: CUP_A2EWEW_ToWar
	{
		parameters[] = {"vehiclecombat", "plane", "helicopter"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\ew\ToWar.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2EWEW_DEFCON: CUP_A2EWEW_DEFCON
	{
		parameters[] = {"nighttime", "submarine", "rain", "fog", "scubadive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\ew\DEFCON.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2EWEW_Fallout: CUP_A2EWEW_Fallout
	{
		parameters[] = {"nighttime", "submarine", "rain", "fog", "scubadive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\ew\Fallout.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2EWEW_MAD: CUP_A2EWEW_MAD
	{
		parameters[] = {"nighttime", "submarine", "rain", "fog", "scubadive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\ew\MAD.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2EWEW_Sky_Net: CUP_A2EWEW_Sky_Net
	{
		parameters[] = {"nighttime", "submarine", "rain", "fog", "scubadive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\ew\Sky_Net.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2EWEW_Wasteland: CUP_A2EWEW_Wasteland
	{
		parameters[] = {"nighttime", "submarine", "rain", "fog", "scubadive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\ew\Wasteland.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_Cold_Wind: CUP_A2_Cold_Wind
	{	
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane", "skydive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\Cold_Wind.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_Vague_Shapes: CUP_A2_Vague_Shapes
	{	
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane", "skydive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\Vague_Shapes.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_Indian_Summer: CUP_A2_Indian_Summer
	{	
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane", "skydive", "vehiclecombat", "infantrycombat", "infantryfogcombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\Indian_Summer.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_Electronic_Warfare: CUP_A2_Electronic_Warfare
	{	
		parameters[] = {"helicopter", "plane", "skydive", "vehiclecombat", "infantrycombat", "infantryfogcombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\Electronic_Warfare.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_Cobalt: CUP_A2_Cobalt
	{
		parameters[] = {"nighttime", "submarine", "rain", "fog", "scubadive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\ew\Cobalt.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_Khe_Sanh_Riff: CUP_A2_Khe_Sanh_Riff
	{
		parameters[] = {"nighttime", "submarine", "rain", "fog", "scubadive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\ew\Khe_Sanh_Riff.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_Manhattan: CUP_A2_Manhattan
	{	
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane", "skydive", "vehiclecombat", "infantrycombat", "infantryfogcombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\Manhattan.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_Reforger: CUP_A2_Reforger
	{	
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\Reforger.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_Defcon_Three: CUP_A2_Defcon_Three
	{	
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\Defcon_Three.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_Dead_Forest: CUP_A2_Dead_Forest
	{
		parameters[] = {"nighttime", "submarine", "rain", "fog", "scubadive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\ew\Dead_Forest.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_Insertion: CUP_A2_Insertion
	{
		parameters[] = {"nighttime", "submarine", "rain", "fog", "scubadive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\ew\Insertion.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_First_To_Fight: CUP_A2_First_To_Fight
	{
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane", "skydive", "vehiclecombat", "infantrycombat", "infantryfogcombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\ew\First_To_Fight.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_Reinforcements: CUP_A2_Reinforcements
	{
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane", "skydive", "vehiclecombat", "infantrycombat", "infantryfogcombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\ew\Reinforcements.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_Warpath: CUP_A2_Warpath
	{
		parameters[] = {"vehiclecombat", "infantrycombat", "infantryfogcombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\ew\Warpath.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_Abandoned_Battlespace: CUP_A2_Abandoned_Battlespace
	{
		parameters[] = {"nighttime", "submarine", "rain", "fog", "scubadive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\ew\Abandoned_Battlespace.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_Last_Men_Standing: CUP_A2_Last_Men_Standing
	{	
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\Last_Men_Standing.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_Harvest_Red: CUP_A2_Harvest_Red
	{
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane", "skydive", "vehiclecombat", "infantrycombat", "infantryfogcombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\ew\Harvest_Red.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_Movement_To_Contact: CUP_A2_Movement_To_Contact
	{
		parameters[] = {"vehiclecombat", "infantrycombat", "infantryfogcombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\ew\Movement_To_Contact.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_Logistics: CUP_A2_Logistics
	{
		parameters[] = {"vehiclecombat", "infantrycombat", "infantryfogcombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\ew\Logistics.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_Large_Scale_Assault: CUP_A2_Large_Scale_Assault
	{
		parameters[] = {"vehiclecombat", "infantrycombat", "infantryfogcombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\ew\Large_Scale_Assault.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_The_Movement: CUP_A2_The_Movement
	{
		parameters[] = {"vehiclecombat", "infantrycombat", "infantryfogcombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\ew\The_Movement.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_Sharping_Knives: CUP_A2_Sharping_Knives
	{	
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane", "skydive", "vehiclecombat", "infantrycombat", "infantryfogcombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\Sharping_Knives.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_Close_Quarter_Combat: CUP_A2_The_Close_Quarter_Combat

	{
		parameters[] = {"vehiclecombat", "infantrycombat", "infantryfogcombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\ew\Close_Quarter_Combat.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_Morning_Sortie: CUP_A2_Morning_Sortie
	{
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane", "skydive", "vehiclecombat", "infantrycombat", "infantryfogcombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\ew\Morning_Sortie.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_Valentine: CUP_A2_Valentine
	{
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\ew\Valentine.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_Marauder_Song: CUP_A2_Marauder_Song
	{
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane", "skydive", "vehiclecombat", "infantrycombat", "infantryfogcombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\ew\Marauder_Song.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_Ghost_Waltz: CUP_A2_Ghost_Waltz
	{
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane", "skydive", "vehiclecombat", "infantrycombat", "infantryfogcombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\ew\Ghost_Waltz.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_Debriefing: CUP_A2_Debriefing
	{
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane", "nighttime", "submarine", "rain", "fog", "scubadive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\ew\Debriefing.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_Badlands: CUP_A2_Badlands
	{
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane", "nighttime", "submarine", "rain", "fog", "scubadive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\ew\Badlands.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2_Rise_Of_The_Fallen: CUP_A2_Rise_Of_The_Fallen
	{
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane", "nighttime", "submarine", "rain", "fog", "scubadive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\ew\Rise_Of_The_Fallen.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A1QG_Mission_02: CUP_A1QG_Mission_02
	{
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane", "nighttime", "submarine", "rain", "fog", "scubadive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a1\qg\Mission_02.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A1QG_Mission_02_outro: CUP_A1QG_Mission_02_outro
	{
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane", "nighttime", "submarine", "rain", "fog", "scubadive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a1\qg\Mission_02_outro.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A1QG_Mission_02: CUP_A1QG_Mission_03
	{
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane", "nighttime", "submarine", "rain", "fog", "scubadive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a1\qg\Mission_03.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A1QG_Mission_02_outro: CUP_A1QG_Mission_03_outro
	{
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane", "nighttime", "submarine", "rain", "fog", "scubadive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a1\qg\Mission_03_outro.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A1QG_Mission_02: CUP_A1QG_Mission_04
	{
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane", "nighttime", "submarine", "rain", "fog", "scubadive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a1\qg\Mission_04.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A1QG_Mission_02_outro: CUP_A1QG_Mission_04_outro
	{
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane", "nighttime", "submarine", "rain", "fog", "scubadive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a1\qg\Mission_04_outro.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A1QG_Mission_02: CUP_A1QG_Mission_05
	{
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane", "nighttime", "submarine", "rain", "fog", "scubadive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a1\qg\Mission_05.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A1QG_Mission_02_outro: CUP_A1QG_Mission_05_outro
	{
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane", "nighttime", "submarine", "rain", "fog", "scubadive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a1\qg\Mission_05_outro.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A1QG_Mission_02: CUP_A1QG_Mission_06
	{
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane", "nighttime", "submarine", "rain", "fog", "scubadive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a1\qg\Mission_06.ogg",
			1,
			1
		};
	};
};