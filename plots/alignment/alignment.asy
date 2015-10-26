import root;
import pad_layout;
include "../run_info.asy";

string topDir = "../../";

string datasets[] = { "DS4" };

string units[] = { "L_2_F", "L_2_N", "L_1_F", "R_1_F", "R_2_N", "R_2_F" };
string unit_labels[] = { "left, 220, far", "left, 220, near", "left, 210, far", "right, 210, far", "right, 220, near", "right, 220, far" };

//string units[] = { "L_F", "L_N" };
//string unit_labels[] = { "Left Far", "Left Near" };

xSizeDef = 10cm;
xTicksDef = LeftTicks(Step=0.5, step=0.25);
drawGridDef = true;


TGraph_errorBar = None;

real time_min = 23.0;
real time_max = 25.2;

//----------------------------------------------------------------------------------------------------
NewRow();

for (int ui : units.keys)
{
	NewPad("time $\ung{h}$", "tilt $\ung{mrad}$", axesAbove=false);
	currentpad.yTicks = RightTicks(0.2, 0.1);
	DrawRunBands(-1, +1);

	for (int di : datasets.keys)
	{
		draw(swToHours, rGetObj(topDir+datasets[di]+"/alignment.root", "global/"+units[ui]+"/a_p"), "p,l,eb", cyan, mCi+1pt+cyan);
		draw(swToHours, rGetObj(topDir+datasets[di]+"/alignment.root", "global/"+units[ui]+"/a_g"), "p,l,eb", green, mCi+1pt+green);
		
		draw(swToHours, rGetObj(topDir+datasets[di]+"/alignment.root", "global/"+units[ui]+"/a"), "p,l,eb", blue, mCi+1pt+blue);
	}
	
	//draw(swToHours, rGetObj("../overall_alignment/alignment_fit.root", ""+units[ui]+"/a_fit"), "l", red+1.5pt);

	limits((time_min, -1), (time_max, +1), Crop);
	AttachLegend(unit_labels[ui], SE, SE);
}

//----------------------------------------------------------------------------------------------------
NewRow();

for (int ui : units.keys)
{
	NewPad("time $\ung{h}$", "horizontal position $\ung{\mu m}$", axesAbove=false);
	currentpad.yTicks = RightTicks(20., 10.);
	DrawRunBands(-80, +80);

	/*
	TGraph_reducePoints = 30;
	draw(unixToHours * shift(0, sh_x[ui]), rGetObj("bpm.root", "LHC.BOFSU:POSITIONS_H::"+bpms[ui]), black);
	TGraph_reducePoints = 1; 
	*/

	for (int di : datasets.keys)
	{
		draw(swToHours, rGetObj(topDir+datasets[di]+"/alignment.root", "global/"+units[ui]+"/b_p"), "p,l,eb", cyan, mCi+1pt+cyan);
		draw(swToHours, rGetObj(topDir+datasets[di]+"/alignment.root", "global/"+units[ui]+"/b_g"), "p,l,eb", green, mCi+1pt+green);

		draw(swToHours, rGetObj(topDir+datasets[di]+"/alignment.root", "global/"+units[ui]+"/b"), "p,l,eb", blue+1pt, mCi+1pt+blue);
	}
	
	//draw(shift(0, +50)*swToHours, rGetObj("../overall_alignment/alignment_fit.root", ""+units[ui]+"/b_fit"), "l", red+dashed);
	//draw(shift(0,   0)*swToHours, rGetObj("../overall_alignment/alignment_fit.root", ""+units[ui]+"/b_fit"), "l", red+1.5pt);
	//draw(shift(0, -50)*swToHours, rGetObj("../overall_alignment/alignment_fit.root", ""+units[ui]+"/b_fit"), "l", red+dashed);

	limits((time_min, -80), (time_max, +80), Crop);
	AttachLegend(unit_labels[ui], SE, SE);
}

//----------------------------------------------------------------------------------------------------
NewRow();

for (int ui : units.keys)
{
	NewPad("time $\ung{h}$", "vertical position $\ung{\mu m}$", axesAbove=false);
	currentpad.yTicks = RightTicks(50., 10.);
	DrawRunBands(-150, +150);

	/*
	TGraph_reducePoints = 30;
	draw(unixToHours*shift(0, sh_y[ui]), rGetObj("bpm.root", "LHC.BOFSU:POSITIONS_V::"+bpms[ui]), black);
	TGraph_reducePoints = 1;
	*/

	for (int di : datasets.keys)
	{
		pen p = StdPen(di+1);
		draw(swToHours, rGetObj(topDir+datasets[di]+"/alignment.root", "global/"+units[ui]+"/c_min_diff"), "p,l,eb", cyan, mCi+1pt+cyan);
		//draw(swToHours, rGetObj(topDir+datasets[di]+"/alignment.root", "global/"+units[ui]+"/c_prob"), "p,l,eb", green, mCi+1pt+green);
		draw(swToHours, rGetObj(topDir+datasets[di]+"/alignment.root", "global/"+units[ui]+"/c_mean_diff_sq"), "p,l,eb", magenta, mCi+1pt+magenta);
		draw(swToHours, rGetObj(topDir+datasets[di]+"/alignment.root", "global/"+units[ui]+"/c_hist_chi_sq"), "p,l,eb", green, mCi+1pt+green);
		
		draw(swToHours, rGetObj(topDir+datasets[di]+"/alignment.root", "global/"+units[ui]+"/c"), "p,l,eb", blue+1pt, mCi+1pt+blue);
	}
	
	/*
	draw(swToHours*shift(0, +100), rGetObj("../overall_alignment/alignment_fit.root", ""+units[ui]+"/c_fit"), "l", red+dashed);
	draw(swToHours*shift(0,    0), rGetObj("../overall_alignment/alignment_fit.root", ""+units[ui]+"/c_fit"), "l", red+1.5pt);
	draw(swToHours*shift(0, -100), rGetObj("../overall_alignment/alignment_fit.root", ""+units[ui]+"/c_fit"), "l", red+dashed);
	*/

	limits((time_min, -150), (time_max, +150), Crop);
	AttachLegend(unit_labels[ui], SE, SE);
}

//----------------------------------------------------------------------------------------------------

GShipout();
