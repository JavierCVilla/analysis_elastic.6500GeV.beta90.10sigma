#include "parameters_global.h"

void Init_base()
{
	// load global settings
	Init_global();

	// directory for large-data storage (e.g. distilled ntuples)
	storageDir = "root://eostotem.cern.ch//eos/totem/user/j/jkaspar/analyses/elastic/6500GeV,beta90,10sigma/DS7/";

	// list of subdirectories with distilled ntuples
	distilledNtuples.push_back("block1");
	distilledNtuples.push_back("block2");
	distilledNtuples.push_back("block3");
	distilledNtuples.push_back("block4");
	distilledNtuples.push_back("block5");
	distilledNtuples.push_back("block6");

	// selection of bunches
	keepAllBunches = true;
	//bunchMap[94882].push_back(0);

	// alignment settings
	/*
	AlignmentSource alSrc;
	alSrc.SetAlignmentA(atNone);
	alSrc.SetAlignmentB(atNone);
	alSrc.SetAlignmentC(atNone);

	alSrc.cnst.a_L_F = 0E-3; alSrc.cnst.b_L_F = 0E-3; alSrc.cnst.c_L_F = 0E-3;
	alSrc.cnst.a_L_N = 0E-3; alSrc.cnst.b_L_N = 0E-3; alSrc.cnst.c_L_N = 0E-3;
	alSrc.cnst.a_R_N = 0E-3; alSrc.cnst.b_R_N = 0E-3; alSrc.cnst.c_R_N = 0E-3;
	alSrc.cnst.a_R_F = 0E-3; alSrc.cnst.b_R_F = 0E-3; alSrc.cnst.c_R_F = 0E-3;
	
	alignmentSources.push_back(alSrc);
	*/

#if 0
	anal.use_time_dependent_resolutions = false;

	anal.use_3outof4_efficiency_fits = false;
	anal.use_pileup_efficiency_fits = false;
	anal.inefficiency_3outof4 = 0.;				// diagonal dependent
	anal.inefficiency_shower_near = 0.03;
	anal.inefficiency_pile_up = 0.;				// diagonal dependent
	anal.inefficiency_trigger = 0.;

	anal.bckg_corr = 1.;
	
	anal.L_int_eff = 0.;	// mb^-1, diagonal dependent
	
	anal.eff_th_y_min = 200E-6; // TODO
	
	anal.t_min_fit = 0.027; // TODO
#endif

	anal.alignment_t0 = 0.;			// beginning of the first time-slice
	anal.alignment_ts = 5.*60.;		// time-slice in s
	
	anal.alignmentYRanges["L_2_F"] = Analysis::AlignmentYRange(-22.0, -10.2, 9.0, 22.0);
	anal.alignmentYRanges["L_2_N"] = Analysis::AlignmentYRange(-20.0, - 9.2, 8.4, 20.0);
	anal.alignmentYRanges["L_1_F"] = Analysis::AlignmentYRange(-19.3, - 9.0, 8.0, 19.6);

	anal.alignmentYRanges["R_1_F"] = Analysis::AlignmentYRange(-20.0, - 7.4, 8.0, 20.0);
	anal.alignmentYRanges["R_2_N"] = Analysis::AlignmentYRange(-20.5, - 7.6, 8.4, 20.8);
	anal.alignmentYRanges["R_2_F"] = Analysis::AlignmentYRange(-23.0, - 8.4, 9.2, 24.0);

#if 0
	// TODO
	unsmearing_file = "";	// diagonal dependent
	//unsmearing_object = "cf,<binning>/exp3/corr_final";
	//unsmearing_object = "cf,<binning>/exp3+exp4/corr_final";
	unsmearing_object = "ff";

	// TODO
	luminosity_data_file = "../fill_3549_lumiCalc2.py_V04-02-04_lumibylsXing.csv";
#endif
}

//----------------------------------------------------------------------------------------------------

void Init_45b_56t()
{
	Init_global_45b_56t();

	// analysis settings
	anal.cut1_a = 1.; anal.cut1_c = +0.26E-6; anal.cut1_si = 9.5E-6;
	anal.cut2_a = 1.; anal.cut2_c = +0.03E-6; anal.cut2_si = 2.8E-6;
	
	anal.cut5_a = 0.107200; anal.cut5_c = -0.010; anal.cut5_si = 0.016;
	anal.cut6_a = 0.105559; anal.cut6_c = -0.002; anal.cut6_si = 0.019;

	anal.cut7_a = 168.; anal.cut7_c = 0.; anal.cut7_si = 0.012;

#if 0
	// TODO
	//unsmearing_file = "unfolding_fit_45b_56t_old.root";

	anal.inefficiency_3outof4 = 0.0; // TODO
	anal.inefficiency_pile_up = 0.0; // TODO

	anal.L_int_eff = 79.42E3;	// TODO	
#endif
}

//----------------------------------------------------------------------------------------------------

void Init_45t_56b()
{
	Init_global_45t_56b();

	// analysis settings
	anal.cut1_a = 1.; anal.cut1_c = +0.30E-6; anal.cut1_si = 10.0E-6;
	anal.cut2_a = 1.; anal.cut2_c = +0.20E-6; anal.cut2_si = 2.8E-6;
	
	anal.cut5_a = 0.10671; anal.cut5_c = -0.009; anal.cut5_si = 0.018;
	anal.cut6_a = 0.10564; anal.cut6_c = +0.006; anal.cut6_si = 0.018;

	anal.cut7_a = 169.; anal.cut7_c = 0.; anal.cut7_si = 0.012;

#if 0
	// TODO
	//unsmearing_file = "unfolding_fit_45b_56t_old.root";

	anal.inefficiency_3outof4 = 0.0; // TODO
	anal.inefficiency_pile_up = 0.0; // TODO

	anal.L_int_eff = 79.42E3;	// TODO	
#endif
}
