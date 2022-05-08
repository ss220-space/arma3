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
import CUP_A2OA_Airborne from CfgMusic;
import CUP_A2OA_Airborne_D from CfgMusic;
import CUP_A2OA_Arrival from CfgMusic;
import CUP_A2OA_Arrowhead from CfgMusic;
import CUP_A2OA_Arrowhead_D from CfgMusic;
import CUP_A2OA_Coltan_Blues from CfgMusic;
import CUP_A2OA_Coltan_Blues_D from CfgMusic;
import CUP_A2OA_Concrete_Cell from CfgMusic;
import CUP_A2OA_Crude_Oil from CfgMusic;
import CUP_A2OA_Dancing_Scimitar from CfgMusic;
import CUP_A2OA_Death_From_Above from CfgMusic;
import CUP_A2OA_Good_Morning_TStan from CfgMusic;
import CUP_A2OA_Iron_Mountain from CfgMusic;
import CUP_A2OA_Iron_Mountain_V from CfgMusic;
import CUP_A2OA_Iron_Mountain_D1 from CfgMusic;
import CUP_A2OA_Iron_Mountain_D2 from CfgMusic;
import CUP_A2OA_Night_Visions from CfgMusic;
import CUP_A2OA_Nightlife from CfgMusic;
import CUP_A2OA_Revolver_Jam from CfgMusic;
import CUP_A2OA_Warmongers from CfgMusic;
import CUP_A2OA_Zargabad_Market from CfgMusic;

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
	class Dynamic_CUP_A2OA_Airborne: CUP_A2OA_Airborne
	{
		parameters[] = {"daytime", "car", "tank", "boat", "helicopter", "plane", "skydive"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\oa\Airborne.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2OA_Airborne_D: CUP_A2OA_Airborne_D
	{
		parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\oa\Airborne_D.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2OA_Arrival: CUP_A2OA_Arrival
	{
		parameters[] = {"daytime", "nighttime", "car", "tank", "boat", "helicopter", "plane"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\oa\Arrival.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2OA_Arrowhead: CUP_A2OA_Arrowhead
	{
		parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\oa\Arrowhead.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2OA_Arrowhead_D: CUP_A2OA_Arrowhead_D
	{
		parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\oa\Arrowhead_D.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2OA_Coltan_Blues: CUP_A2OA_Coltan_Blues
	{
		parameters[] = {"daytime", "nighttime", "car", "tank", "boat", "helicopter", "plane"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\oa\Coltan_Blues.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2OA_Coltan_Blues_D: CUP_A2OA_Coltan_Blues_D
	{
		parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\oa\Coltan_Blues_D.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2OA_Concrete_Cell: CUP_A2OA_Concrete_Cell
	{
		parameters[] = {"daytime", "nighttime", "car", "tank", "boat", "helicopter", "plane", "rain", "fog"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\oa\Concrete_Cell.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2OA_Crude_Oil: CUP_A2OA_Crude_Oil
	{
		parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\oa\Crude_Oil.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2OA_Dancing_Scimitar: CUP_A2OA_Dancing_Scimitar
	{
		parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\oa\Dancing_Scimitar.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2OA_Death_From_Above: CUP_A2OA_Death_From_Above
	{
		parameters[] = {"vehiclecombat", "plane", "helicopter"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\oa\Death_From_Above.ogg",
			1,
			1
		};
	};
	class Helikopter
	{
		name = "Helikopter";
		sound[] = {"music\ogg\helikopter.ogg",1.0,1.0};
		duration=98;
		parameters[] = {"helicopter"}; 
	};
	class Dynamic_CUP_A2OA_Good_Morning_TStan: CUP_A2OA_Good_Morning_TStan
	{
		parameters[] = {"daytime", "nighttime", "car", "tank", "boat", "helicopter", "plane", "rain", "fog"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\oa\Good_Morning_TStan.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2OA_Iron_Mountain: CUP_A2OA_Iron_Mountain
	{
		parameters[] = {"daytime", "nighttime", "car", "tank", "boat", "helicopter", "plane", "rain", "fog"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\oa\Iron_Mountain.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2OA_Iron_Mountain_V: CUP_A2OA_Iron_Mountain_V
	{
		parameters[] = {"nighttime", "rain", "fog"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\oa\Iron_Mountain_V.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2OA_Iron_Mountain_D1: CUP_A2OA_Iron_Mountain_D1
	{
		parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\oa\Iron_Mountain_D1.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2OA_Iron_Mountain_D2: CUP_A2OA_Iron_Mountain_D2
	{
		parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\oa\Iron_Mountain_D2.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2OA_Night_Visions: CUP_A2OA_Night_Visions
	{
		parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\oa\Night_Visions.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2OA_Nightlife: CUP_A2OA_Nightlife
	{
		parameters[] = {"daytime", "nighttime", "car", "tank", "boat", "helicopter", "plane", "rain", "fog"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\oa\Nightlife.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2OA_Revolver_Jam: CUP_A2OA_Revolver_Jam
	{
		parameters[] = {"daytime", "nighttime", "car", "tank", "boat", "helicopter", "plane", "rain", "fog"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\oa\Revolver_Jam.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2OA_Warmongers: CUP_A2OA_Warmongers
	{
		parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\oa\Warmongers.ogg",
			1,
			1
		};
	};
	class Dynamic_CUP_A2OA_Zargabad_Market: CUP_A2OA_Zargabad_Market
	{
		parameters[] = {"infantrycombat", "infantryfogcombat", "vehiclecombat"};
		sound[]=
		{
			"@CUP\Terrains\cup_terrains_music\a2\oa\Zargabad_Market.ogg",
			1,
			1
		};
	};
};