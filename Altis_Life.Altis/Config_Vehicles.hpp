class CarShops {
	class atv_shop {
		side = "civ";
		vehicles[] = {
			{ "I_Quadbike_01_F", 5000, "" }
		};
	};

	class camel_tow {
		side = "civ";
		vehicles[] = {
			{ "B_Truck_01_mover_F", 100000, "towing" },
			{ "I_Truck_02_covered_F", 150000, "towing" },
			{ "O_Truck_02_transport_F", 125000, "towing" },
			{ "B_G_Offroad_01_repair_F", 15000, "towing" }
		};
	};

	class camel_tow_air {
		side = "civ";
		vehicles[] = {
			{ "B_Heli_Transport_03_unarmed_green_F", 350000, "towing" }
		};
	};

	class civ_air {
		side = "civ";
		vehicles[] = {
			{ "C_Heli_Light_01_civil_F", 350000, "pilot" },
			{ "O_Heli_Transport_04_F", 1500000, "pilot" },
			{ "O_Heli_Transport_04_box_F", 4250000, "pilot" },
			{ "O_Heli_Transport_04_covered_F", 4750000, "pilot" },
			{ "O_Heli_Transport_04_fuel_F", 750000, "pilot" },
			{ "B_Heli_Transport_03_unarmed_F", 2000000, "pilot" },
			{ "I_Heli_Transport_02_F", 7000000, "pilot" },
			{ "O_Heli_Light_02_unarmed_F", 1750000, "pilot" }
		};
	};

	class civ_car {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 2500, "" },
			{ "C_Hatchback_01_F", 12500, "driver" },
			{ "C_Hatchback_01_sport_F", 55000, "driver" },
			{ "C_Offroad_01_F", 14500, "driver" },
			{ "C_SUV_01_F", 435000, "driver" }
		};
	};

	class civ_ship {
		side = "civ";
		vehicles[] = {
			{ "C_Rubberboat", 5000, "boat" },
			{ "C_Boat_Civil_01_F", 22000, "boat" }
		};
	};

	class civ_truck {
		side = "civ";
		vehicles[] = {
			{ "C_Van_01_transport_F", 40000 , "trucking" },
			{ "C_Van_01_box_F", 160000, "trucking" },
			{ "C_Van_01_Fuel_F", 125000, "trucking" },
			{ "B_Truck_01_box_F", 275000, "trucking" },
			{ "B_Truck_01_covered_F", 225000, "trucking" },
			{ "B_Truck_01_fuel_F", 150000, "trucking" },
			{ "B_Truck_01_transport_F", 250000, "trucking" }
		};
	};

	class cop_air {
		side = "cop";
		vehicles[] = {
			{ "C_Heli_Light_01_civil_F", 150000, "cAir" },
			{ "B_Heli_Light_01_F", 225000, "cAir", { "life_coplevel", 1 } },
			{ "I_Heli_light_03_unarmed_F", 350000, "cAir", { "life_coplevel", 2 } },
			{ "O_Heli_Transport_04_bench_F", 434500, "cAir", { "life_coplevel", 2 } },
			{ "O_Heli_Transport_04_F", 500000, "cAir", { "life_coplevel", 2 } }
		};
	};

	class cop_car {
		side = "cop";
		vehicles[] = {
			{ "I_G_Offroad_01_F", 7000, ""},
			{ "C_Hatchback_01_F", 12500, "" },
			{ "B_G_Quadbike_01_F", 2500, "", { "life_coplevel", 1 } },
			{ "C_SUV_01_F", 30000, "", { "life_coplevel", 1 } },
			{ "C_Hatchback_01_sport_F", 25500, "", { "life_coplevel", 1 } },
			{ "B_G_Offroad_01_F", 10000, "", { "life_coplevel", 1 } },
			{ "C_Offroad_01_F", 15000, "", { "life_coplevel", 1 } },
			{ "O_Truck_02_transport_F", 6250, "", { "life_coplevel", 1 } },
			{ "O_Truck_02_covered_F", 6250, "", { "life_coplevel", 1 } },
			{ "O_MRAP_02_F", 250000, "", { "life_coplevel", 2 } }
		};
	};

	class cop_ship {
		side = "cop";
		vehicles[] = {
			{ "B_Boat_Transport_01_F", 3000, "cg" },
			{ "C_Boat_Civil_01_police_F", 20000, "cg", { "life_coplevel", 1 } },
			{ "B_SDV_01_F", 100000, "cg", { "life_coplevel", 2 } }
		};
	};

	class kart_shop {
		side = "civ";
		vehicles[] = {
			{ "C_Kart_01_F", 15000, "" },
			{ "C_Kart_01_Blu_F", 15000, "" },
			{ "C_Kart_01_Fuel_F", 15000, "" },
			{ "C_Kart_01_Red_F", 15000, "" },
			{ "C_Kart_01_Red_F", 15000, "" }
		};
	};

	class med_air {
		side = "med";
		vehicles[] = {
			{ "C_Heli_Light_01_civil_F", 25000, "" },
			{ "O_Heli_Light_02_unarmed_F", 50000, "" },
			{ "I_Heli_light_03_unarmed_F", 75000, "" },
			{ "O_Heli_Transport_04_medevac_F", 100000, "" }//,
			//{ "I_Heli_Transport_02_F", 150000, "" } // Mohawk
		};
	};

	class med_shop {
		side = "med";
		vehicles[] = {
			{ "B_G_Quadbike_01_F", 2500, "" },
			{ "C_Hatchback_01_sport_F", 10000, "" },
			{ "C_SUV_01_F", 12500, "" },
			{ "C_Offroad_01_F", 15000, "" },
			//{ "C_Van_01_box_F", 17500, "" }, // Ambulance
			//{ "O_MRAP_02_F", 25000, "" }, // Ifrit
			{ "I_MRAP_03_F", 25000, "" },
			{ "B_Truck_01_mover_F", 50000, "" }
		};
	};

	class med_ship {
		side = "med";
		vehicles[] = {
			{ "B_Lifeboat", 2500, "" },
			{ "C_Boat_Civil_01_rescue_F", 15000, "" }
		};
	};

	class reb_car {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 2500, "" },
			{ "B_G_Offroad_01_F", 135000, "" },
			{ "B_Heli_Light_01_F", 1250000, "" },
			{ "I_Truck_02_fuel_F", 100000, "rebel" },
			{ "I_Truck_02_transport_F", 125000, "rebel" },
			{ "O_Truck_02_covered_F", 150000, "rebel" },
			{ "O_Truck_03_transport_F", 400000, "rebel" },
			{ "O_Truck_03_covered_F", 450000, "rebel" },
			{ "O_Truck_03_fuel_F", 475000, "rebel" },
			{ "O_Heli_Transport_04_fuel_F", 750000, "rebel" },
			{ "B_G_Offroad_01_armed_F", 750000, "rebel" }, // RENTAL ONLY
			{ "O_MRAP_02_F", 1000000, "rebel" },
			{ "O_Heli_Transport_04_F", 1500000, "rebel" },
			{ "O_Heli_Transport_04_bench_F", 3450000, "rebel" },
			{ "O_Truck_03_device_F", 5000000, "rebel" }
		};
	};

	class reb_ship {
		side = "civ";
		vehicles[] = {
			{ "I_Boat_Transport_01_F", 5000, "rebel" },
			{ "I_SDV_01_F", 125000, "rebel" }
		};
	};

	class veh_donator_athira {
		side = "civ";
		vehicles[] = {
			{ "C_Hatchback_01_sport_F", 12500, "driver", { "life_donatorlvl", 1 } }
		};
	};

	class veh_donator_therisa {
		side = "civ";
		vehicles[] = {
			{ "C_Hatchback_01_sport_F", 12500, "driver", { "life_donatorlvl", 2 } },
			{ "B_Truck_01_box_F", 250000, "driver", { "life_donatorlvl", 2 } },
			{ "B_Heli_Light_01_F", 500000, "pilot", { "life_donatorlvl", 2 } }
		};
	};

	class veh_donator_kalochori {
		side = "civ";
		vehicles[] = {
			{ "C_Hatchback_01_sport_F", 12500, "driver", { "life_donatorlvl", 3 } },
			{ "B_Truck_01_box_F", 250000, "driver", { "life_donatorlvl", 3 } },
			{ "B_Heli_Light_01_F", 500000, "pilot", { "life_donatorlvl", 3 } },
			{ "C_Van_01_Fuel_F", 25000, "pilot", { "life_donatorlvl", 3 } }
		};
	};

	class veh_donator_selakano {
		side = "civ";
		vehicles[] = {
			{ "C_Hatchback_01_sport_F", 12500, "driver", { "life_donatorlvl", 4 } },
			{ "B_Truck_01_box_F", 250000, "driver", { "life_donatorlvl", 4 } },
			{ "B_Heli_Light_01_F", 500000, "pilot", { "life_donatorlvl", 4 } },
			{ "C_Van_01_Fuel_F", 25000, "pilot", { "life_donatorlvl", 4 } },
			{ "I_Heli_Transport_02_F", 1500000, "pilot", { "life_donatorlvl", 4 } }
		};
	};

	class veh_donator_kavala {
		side = "civ";
		vehicles[] = {
			{ "C_Hatchback_01_sport_F", 12500, "driver", { "life_donatorlvl", 5 } },
			{ "B_Truck_01_box_F", 250000, "driver", { "life_donatorlvl", 5 } },
			{ "B_Heli_Light_01_F", 500000, "pilot", { "life_donatorlvl", 5 } },
			{ "C_Van_01_Fuel_F", 25000, "pilot", { "life_donatorlvl", 5 } },
			{ "I_Heli_Transport_02_F", 1500000, "pilot", { "life_donatorlvl", 5 } },
			{ "O_Truck_03_device_F", 3000000, "pilot", { "life_donatorlvl", 5 } }
		};
	};

	class recruiter_cars {
		class newsReporter {
			{ "C_Offroad_01_repair_F", 15000, "driver" }
		};

		class towTruckDriver {
			//{ "C_Offroad_01_repair_F", 15000, "driver" }
		};

		class houseSalesman {
			//{ "C_SUV_01_F", 22500, "driver" }
		};

		class carSalesMan {
			//{ "C_Hatchback_01_sport_F", 30000, "driver" }
		};

		/*class uberTaxi {
			{ "C_Hatchback_01_sport_F", 30000, "driver" }
		};*/
	};

	class recruiter_air {
		class newsReporter {
			{ "I_Heli_light_03_unarmed_F", 200000, "pilot" }
		};

		class towTruckDriver {
			//{ "O_Heli_Light_02_unarmed_F", 250000, "pilot" }
		};

		class houseSalesman {
			//{ "C_Heli_Light_01_civil_F", 200000, "pilot" }
		};

		class carSalesMan {
			//{ "O_Heli_Light_02_unarmed_F", 250000, "pilot" }
		};

		/*class uberTaxi {
			{ "C_Heli_Light_01_civil_F", 150000, "pilot" }
		};*/
	};
};

/*
	Vehicle Configs (Contains textures and other stuff)

	storageFee (Getting vehicles out of garage) format:
		INDEX 0: Civilian Price
		INDEX 1: Cop Price
		INDEX 2: EMS Price
		INDEX 4: OPFOR Price (Not implemented in vanilla but still leaving support

	Textures config follows { Texture Name, side, {texture(s)path}}
	Texture(s)path follows this format:
		INDEX 0: Texture Layer 0
		INDEX 1: Texture Layer 1
		INDEX 2: Texture Layer 2
		etc etc etc
*/
class CfgVehicles {
	class Default {
		vItemSpace = -1;//CIV, COP, EMS, OPFOR (OPFOR Not used currently)
		storageFee[] = { 1000, 1000, 1000, 1000 };// 33% of Buy Price
		garageSell[] = { 0, 0, 0, 0 };// 66% of Buy Price
		insurance[] = { 5000, 5000, 5000, 5000 };// 10% of Buy Price
		chopShop[] = { 1000, 1000, 1000, 1000 };// 50% of Buy Price
		textures[] = {};
	};

	class Land_CargoBox_V1_F : Default {// Federal Reserve Safe
		vItemSpace = 5000;
	};

	class Box_IND_Grenades_F : Default {// storagesmall
		vItemSpace = 350;
	};

	class B_supplyCrate_F : Default {// storagebig
		vItemSpace = 700;
	};

	class C_Quadbike_01_F {// Civ Quad
		vItemSpace = 50;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "Brown", "civ", { "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa" } },
			{ "Black", "civ", { "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa" } },
			{ "Blue", "civ", { "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa" } },
			{ "Red", "civ", { "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa" } },
			{ "White", "civ", { "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa" } },
			{ "Rebel Camo", "reb", { "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa" } },
			{ "RPD Quadbike", "cop", { "textures\cop_veh_quadbike.paa" } },
			{ "EMS Quadbike", "med", { "textures\ems_veh_quadbike.paa" } }
		};
	};
	// Inherits everything from the above class
	class B_Quadbike_01_F : C_Quadbike_01_F {}; // Rebel Quad
	class B_G_Quadbike_01_F : C_Quadbike_01_F {};// Cops & EMS Quads

	class I_Quadbike_01_F {// Rental Shop Quad (Rental Only)
		vItemSpace = 50;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "Hunter Camo", "civ", { "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa" } }
		};
	};

	class C_Kart_01_F {// Civ Kart
		vItemSpace = 20;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "Black", "civ", { "\A3\Soft_F_Kart\Kart_01\Data\kart_01_base_black_co.paa" } },
			{ "Blue", "civ", { "\A3\Soft_F_Kart\Kart_01\Data\kart_01_base_blue_co.paa" } },
			{ "Green", "civ", { "\A3\Soft_F_Kart\Kart_01\Data\kart_01_base_green_co.paa" } },
			{ "Orange", "civ", { "\A3\Soft_F_Kart\Kart_01\Data\kart_01_base_orange_co.paa" } },
			{ "Red", "civ", { "\A3\Soft_F_Kart\Kart_01\Data\kart_01_base_red_co.paa" } },
			{ "White", "civ", { "\A3\Soft_F_Kart\Kart_01\Data\kart_01_base_white_co.paa" } },
			{ "Yellow", "civ", { "\A3\Soft_F_Kart\Kart_01\Data\kart_01_base_yellow_co.paa" } }
		};
	};

	class C_Kart_01_Blu_F {// Civ Kart Special
		vItemSpace = 20;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {};
	};
	// Inherits everything from the above class
	class C_Kart_01_Fuel_F : C_Kart_01_Blu_F {};
	class C_Kart_01_Red_F : C_Kart_01_Blu_F {};
	class C_Kart_01_Vrana_F : C_Kart_01_Blu_F {};

	class C_Hatchback_01_F {// Hatchback
		vItemSpace = 40;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "Beige", "civ", { "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa" } },
			{ "Green", "civ", { "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa" } },
			{ "Blue", "civ", { "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa" } },
			{ "Dark Blue", "civ", { "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa" } },
			{ "Yellow", "civ", { "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa" } },
			{ "White", "civ", { "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa" } },
			{ "Gray", "civ", { "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa" } },
			{ "Black", "civ", { "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa" } },
			{ "Redgull", "civ", { "textures\civ_veh_hbsport_redgull.paa" } },
			{ "Pub Cop Edition", "civ", { "textures\cop_veh_hb_pub.paa" } }
		};
	};

	class C_Hatchback_01_sport_F {// Hatchback Sport
		vItemSpace = 50;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "Red", "civ", { "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa" } },
			{ "Dark Blue", "civ", { "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa" } },
			{ "Orange", "civ", { "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa" } },
			{ "Black / White", "civ", { "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa" } },
			{ "Beige", "civ", { "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa" } },
			{ "Green", "civ", { "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa" } },
			{ "RPD Edition", "cop", { "textures\cop_veh_hbsport.paa" } },
			{ "Black", "civ", { "#(ai,64,64,1)Fresnel(1.3,7)" } },
			{ "EMS Edition", "med", { "textures\ems_veh_hbsport.paa" } },
			{ "Monster", "civ", { "textures\civ_veh_hbsport_monster.paa" } },
			{ "Redgull", "civ", { "textures\civ_veh_hbsport_redgull.paa" } },
			{ "EMS Supervisor", "med", { "textures\ems_veh_hbsport_super.paa" } },
			{ "Highway Patrol", "cop", { "textures\cop_veh_hbsport_hw.paa" } },
			{ "Kavala Operations", "cop", { "textures\cop_veh_hbsport_kod.paa" } },
			{ "Public Relations", "cop", { "textures\cop_veh_hbsport_pr.paa" } },
			{ "Sheriff SRT", "cop", { "textures\cop_veh_hbsport_srt.paa" } },
			{ "TRF Squad", "cop", { "textures\cop_veh_hbsport_trf.paa" } },
			{ "Chief of Police", "cop", { "textures\cop_veh_hbsport_cop.paa" } },
			{ "General Lee", "civ", { "textures\civ_veh_hb_gen_lee.paa" } },
			{ "Uber Taxi", "civ", { "textures\civ_veh_hb_taxi.paa" } }
		};
	};

	class C_SUV_01_F {// SUV
		vItemSpace = 65;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "Dark Red", "civ", { "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa" } },
			{ "Black", "cop", { "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa" } },
			{ "Silver", "civ", { "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa" } },
			{ "Orange", "civ", { "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa" } },
			{ "Jet Black", "civ", { "#(ai,64,64,1)Fresnel(1.3,7)" } },
			{ "UC Siver", "cop", { "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa" } },
			{ "UC Jet Black", "cop", { "textures\cop_veh_suv_black.paa" } },
			{ "Nyan Cat", "civ", { "textures\civ_veh_suv_nyan.paa" } },
			{ "RPD White", "cop", { "textures\cop_veh_suv_white.paa" } },
			{ "EMS Edition", "med", { "textures\ems_veh_suv.paa" } },
			{ "Black", "civ", { "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa" } },
			{ "Batmobile", "civ", { "textures\civ_veh_suv_batmobile.paa" } }
		};
	};

	class C_Offroad_01_F {// Regular Offroad
		vItemSpace = 85;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "Red", "civ", { "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa" } },
			{ "Yellow", "civ", { "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa" } },
			{ "White", "civ", { "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa" } },
			{ "Blue", "civ", { "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa" } },
			{ "Dark Red", "civ", { "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa" } },
			{ "Blue/White", "civ", { "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa" } },
			{ "Black", "fed", { "#(ai,64,64,1)Fresnel(0.3,3)" } },
			{ "Uber Taxi", "civ", { "textures\civ_veh_offroad_taxi.paa" } },
			{ "EMS Edition", "med", { "textures\ems_veh_offroad.paa", "textures\ems_veh_offroad_body.paa" } },
			{ "RPD Black", "cop", { "textures\cop_veh_offroad_black.paa", "textures\cop_veh_offroad_body.paa" } },
			{ "RPD White", "cop", { "textures\cop_veh_offroad_white.paa", "textures\cop_veh_offroad_body.paa" } },
			{ "RPD Supervisor", "cop", { "textures\cop_veh_offroad_super.paa", "textures\cop_veh_offroad_body.paa" } },
			{ "Chrome", "civ", { "CHROME" } },
			{ "Highway Patrol", "cop", { "textures\cop_veh_offroad_hw.paa", "textures\cop_veh_offroad_body.paa" } },
			{ "Kavala Operations", "cop", { "textures\cop_veh_offroad_kod.paa", "textures\cop_veh_offroad_body.paa" } },
			{ "TRF Squad", "cop", { "textures\cop_veh_offroad_trf.paa", "textures\cop_veh_offroad_body.paa" } },
			{ "Sheriff SRT", "cop", { "textures\cop_veh_offroad_srt.paa", "textures\cop_veh_offroad_body.paa" } },
			{ "EMS Supervisor", "med", { "textures\ems_veh_offroad_super.paa", "textures\ems_veh_offroad_body.paa" } },
			{ "Chief of Police", "cop", { "textures\cop_veh_offroad_cop.paa", "textures\cop_veh_offroad_body.paa" } }
		};
	};

	class I_G_Offroad_01_F {// Pub Cop Offroad
		vItemSpace = 85;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "Pub Cop Offroad", "cop", { "textures\cop_veh_offroad_pub.paa", "textures\cop_veh_offroad_body.paa" } }
		};
	};

	class B_G_Offroad_01_F {// RPD UC & Rebel Offroad
		vItemSpace = 85;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "Light Camo", "reb", { "\A3\soft_F_bootcamp\Offroad_01\Data\offroad_01_ext_ig_11_co.paa" } },
			{ "Dark Camo", "reb", { "\A3\soft_F_bootcamp\Offroad_01\Data\offroad_01_ext_ig_05_co.paa" } },
			{ "RPD UC Chrome", "cop", { "CHROME", "textures\cop_veh_offroad_body.paa" } },
			{ "RPD Under Cover", "cop", { "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa", "textures\cop_veh_offroad_body.paa" } }
		};
	};

	class B_G_Offroad_01_armed_F {// Armed Offroad (Rental Only)
		vItemSpace = 85;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "Light Camo", "reb", { "\A3\soft_F_bootcamp\Offroad_01\Data\offroad_01_ext_ig_11_co.paa" } },
			{ "Dark Camo", "reb", { "\A3\soft_F_bootcamp\Offroad_01\Data\offroad_01_ext_ig_05_co.paa" } }
		};
	};

	class B_G_Offroad_01_repair_F {// ATS Repair Offroad
		vItemSpace = 85;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "ATS Offroad", "civ", { "textures\civ_veh_offroad_ats.paa" } }
		};
	};

	class C_Offroad_01_repair_F {// News 7 Repair Offroad
		vItemSpace = 85;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "News 7 Offroad", "recruiter", { "textures\civ_veh_offroad_news.paa" } }
		};
	};

	class C_Van_01_box_F {// Box Truck & Ambulance
		vItemSpace = 250;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "White", "civ", { "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa" } },
			{ "Red", "civ", { "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa" } },
			{ "Black", "civ", { "\a3\soft_f_gamma\Van_01\Data\van_01_ext_black_co.paa" } }//,
			//{ "EMS Ambulance", "med", { "textures\ems_veh_ambo_1.paa", "textures\ems_veh_ambo_2.paa" } }
		};
	};

	class C_Van_01_transport_F {// Pickup Truck
		vItemSpace = 150;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "White", "civ", { "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa" } },
			{ "Red", "civ", { "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa" } },
			{ "Black", "civ", { "\a3\soft_f_gamma\Van_01\Data\van_01_ext_black_co.paa" } }
		};
	};

	class C_Van_01_Fuel_F {// Fuel Truck
		vItemSpace = 90;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "White", "civ", { "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa" } },
			{ "Red", "civ", { "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa" } },
			{ "Black", "civ", { "\a3\soft_f_gamma\Van_01\Data\van_01_ext_black_co.paa" } }
		};
	};

	class B_Heli_Light_01_F {// MH-9 Hummingbird
		vItemSpace = 90;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "RPD Edition", "cop", { "textures\cop_veh_hbird.paa" } },
			{ "Digi Green", "reb", { "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa" } },
			{ "Rebel Digital", "reb", { "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa" } },
			{ "RPD Black", "cop", { "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa" } },
			{ "Highway Patrol", "cop", { "textures\cop_veh_hbird_hw.paa" } },
			{ "Advanced Surveillance", "cop", { "textures\cop_veh_hbird_asd.paa" } },
			{ "Gray Watcher", "civ", { "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa" } },
			{ "Wasp", "civ", { "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wasp_co.paa" } }
		};
	};

	class C_Heli_Light_01_civil_F {// M-900 Littlebird
		vItemSpace = 90;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "EMS Edition", "cop", { "textures\ems_veh_hbird.paa" } },
			{ "Civilian Blue", "civ", { "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa" } },
			{ "Civilian Red", "civ", { "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa" } },
			{ "Blueline", "civ", { "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa" } },
			{ "Elliptical", "civ", { "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa" } },
			{ "Furious", "civ", { "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa" } },
			{ "Jeans", "civ", { "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa" } },
			{ "Speedy", "civ", { "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa" } },
			{ "Sunset", "civ", { "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa" } },
			{ "Vrana", "civ", { "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa" } },
			{ "Wave", "civ", { "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa" } },
			{ "Wasp", "civ", { "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wasp_co.paa" } },
			{ "Shadow", "civ", { "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa" } },
			{ "Light", "civ", { "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_light_co.paa" } },
			{ "Graywatcher", "civ", { "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa" } },
			{ "Pub Cop M-900", "cop", { "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa" } },
			{ "Military Green", "civ", { "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blufor_co.paa" } },
			{ "Chrome", "civ", { "CHROME" } }
		};
	};

	class I_Heli_Transport_02_F {// CH-49 Mohawk
		vItemSpace = 450;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "Ion", "civ", { "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa", "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa", "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa" } },
			{ "Dahoman", "civ", { "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa", "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa", "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa" } },
			{ "Chrome", "civ", { "CHROME", "CHROME", "CHROME" } },
			{ "Black", "civ", { "#(ai,64,64,1)Fresnel(1.3,7)", "#(ai,64,64,1)Fresnel(1.3,7)", "#(ai,64,64,1)Fresnel(1.3,7)" } }//,
			//{ "EMS Edition", "med", { "textures\ems_veh_mohawk_1.paa", "textures\ems_veh_mohawk_2.paa", "#(ai,64,64,1)Fresnel(1.3,7)" } }		
		};
	};

	class O_Heli_Light_02_unarmed_F {// PO-30 Orca
		vItemSpace = 210;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "RPD Black", "cop", { "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa" } },
			{ "White / Blue", "civ", { "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa" } },
			{ "Digi Green", "reb", { "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa" } },
			{ "Desert Digi", "reb", { "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa" } },
			{ "EMS Edition", "med", { "textures\ems_veh_orca.paa" } }
		};
	};

	class I_Heli_light_03_unarmed_F {// WY-55 Hellcat
		vItemSpace = 200;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "News 7", "recruiter", { "textures\civ_veh_hellcat_reporter.paa" } },
			{ "EMS Edition", "med", { "textures\ems_veh_hellcat.paa" } },
			{ "RPD Edition", "cop", { "textures\cop_veh_hellcat.paa" } },
			{ "Chief of Police", "cop", { "textures\cop_veh_hellcat_cop.paa" } }		
		};
	};

	class B_Heli_Transport_03_unarmed_green_F {// CH-67 Huron
		vItemSpace = 100;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "Black Huron", "civ", { "\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa", "\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa" } },
			{ "ATS Huron", "civ", { "textures\civ_veh_atshuron_0.paa", "textures\civ_veh_atshuron_1.paa" } }
		};
	};

	class O_Heli_Transport_04_box_F {// Mi-290 Taru (Cargo)
		vItemSpace = 325;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "Taru Cargo", "civ", { "\A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa", "\A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa", "CHROME", "CHROME" } }
		};
	};

	class O_Heli_Transport_04_covered_F {// Mi-290 Taru (Transport)
		vItemSpace = 200;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "Taru Transport", "civ", { "\A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa", "\A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa", "CHROME", "CHROME" } }
		};
	};

	class O_Heli_Transport_04_bench_F {// Mi-290 Taru (Bench)
		vItemSpace = 100;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "Rebel Taru Bench", "reb", { "\A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_co.paa", "\A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_co.paa", "\A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_bench_co.paa" } },
			{ "RPD Taru Bench", "cop", { "\A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa", "\A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa", "\A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_bench_black_co.paa" } }
		};
	};

	class O_Heli_Transport_04_medevac_F {// Mi-290 Taru (MedEvac)
		vItemSpace = 250;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "EMS Taru MedEvac", "med", { "textures\ems_veh_taru_ext_01.paa", "textures\ems_veh_taru_ext_02.paa", "textures\ems_veh_taru_pod_01.paa", "textures\ems_veh_taru_pod_02.paa" } }
		};
	};

	/*class B_MRAP_01_F {// Hunter
		vItemSpace = 100;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "RPD Black Hunter", "cop", { "textures\cop_veh_hunter_black.paa", "textures\cop_veh_hunter_back.paa" } },
			{ "RPD White Hunter", "cop", { "textures\cop_veh_hunter_white.paa", "textures\cop_veh_hunter_back.paa" } }
		};
	};*/

	class O_MRAP_02_F {// Ifrit
		vItemSpace = 100;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "Rebel Ifrit", "reb", { "\A3\soft_F\MRAP_02\data\MRAP_02_ext_01_CO.paa", "\A3\soft_F\MRAP_02\data\MRAP_02_ext_02_CO.paa" } },
			{ "RPD Ifrit", "cop", { "textures\cop_veh_ifirt.paa", "textures\cop_veh_ifirt_back.paa" } },
			{ "EMS Ifrit", "med", { "textures\ems_veh_ifirt.paa", "textures\ems_veh_ifirt_back.paa" } },
			{ "RPD Chief Ifrit", "cop", { "textures\cop_veh_ifirt_cop.paa", "textures\cop_veh_ifirt_back_cop.paa" } }
		};
	};

	class I_MRAP_03_F {// Strider
		vItemSpace = 100;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "EMS Strider", "med", { "textures\ems_veh_strider_coastguard.paa" } }
		};
	};

	class C_Boat_Civil_01_police_F {// Police Boat
		vItemSpace = 135;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance[] = { 5000, 5000, 5000, 5000 };
		chopShop[] = { 1000, 1000, 1000, 1000 };
		textures[] = {
			{ "Police Motorboat", "cop", { "textures\cop_veh_boat.paa" } }
		};
	};
};
