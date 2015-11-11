import root;
import pad_layout;
include "../run_info.asy";

string topDir = "../../";

string datasets[];
real times_min[], times_max[];

/*
datasets.push("DS1"); times_min.push(23.0); times_max.push(25.2);
datasets.push("DS2"); times_min.push(0); times_max.push(2);
datasets.push("DS3"); times_min.push(0); times_max.push(2);
datasets.push("DS4"); times_min.push(23.0); times_max.push(25);
datasets.push("DS5"); times_min.push(33.4); times_max.push(34.9);
*/
datasets.push("DS6"); times_min.push(46.0); times_max.push(48);
//datasets.push("DS7"); times_min.push(56.1); times_max.push(58);

string units[] = { "L_2_F", "L_2_N", "L_1_F", "R_1_F", "R_2_N", "R_2_F" };
string unit_labels[] = { "left, 220, far", "left, 220, near", "left, 210, far", "right, 210, far", "right, 220, near", "right, 220, far" };

string units[] = { "R_1_F", "R_2_N", "R_2_F" };
string unit_labels[] = { "right, 210, far", "right, 220, near", "right, 220, far" };

//string units[] = { "L_F", "L_N" };
//string unit_labels[] = { "Left Far", "Left Near" };

xSizeDef = 10cm;
xTicksDef = LeftTicks(Step=0.5, step=0.25);
drawGridDef = true;

TGraph_errorBar = None;

//----------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------

for (int dsi : datasets.keys)
{
	string dataset = datasets[dsi];
	real time_min = times_min[dsi];
	real time_max = times_max[dsi];

	write(dataset);

	for (int ui : units.keys)
	{
		NewPad("time $\ung{h}$", "tilt $\ung{mrad}$", axesAbove=false);
		currentpad.yTicks = RightTicks(0.2, 0.1);
		DrawRunBands(dataset, -1, +1);
	
		draw(swToHours, rGetObj(topDir+dataset+"/alignment.root", "global/"+units[ui]+"/a_p"), "p,eb", cyan, mCi+1pt+cyan);
		draw(swToHours, rGetObj(topDir+dataset+"/alignment.root", "global/"+units[ui]+"/a_g"), "p,eb", green, mCi+1pt+green);
		
		draw(swToHours, rGetObj(topDir+dataset+"/alignment.root", "global/"+units[ui]+"/a"), "p,eb", blue, mCi+1pt+blue);
		
		draw(shift(0, +0.2)*swToHours, rGetObj(topDir+dataset+"/alignment_fit.root", ""+units[ui]+"/a_fit"), "l", red+dashed);
		draw(shift(0,    0)*swToHours, rGetObj(topDir+dataset+"/alignment_fit.root", ""+units[ui]+"/a_fit"), "l", red+1.5pt);
		draw(shift(0, -0.2)*swToHours, rGetObj(topDir+dataset+"/alignment_fit.root", ""+units[ui]+"/a_fit"), "l", red+dashed);
	
		//limits((time_min, -1), (time_max, +1), Crop);
		ylimits(-1, +1, Crop);
		AttachLegend(unit_labels[ui], SE, SE);
	}
	
	//----------------------------------------------------------------------------------------------------
	NewRow();
	
	for (int ui : units.keys)
	{
		NewPad("time $\ung{h}$", "horizontal position $\ung{\mu m}$", axesAbove=false);
		currentpad.yTicks = RightTicks(20., 10.);
		DrawRunBands(dataset, -80, +80);
	
		/*
		TGraph_reducePoints = 30;
		draw(unixToHours * shift(0, sh_x[ui]), rGetObj("bpm.root", "LHC.BOFSU:POSITIONS_H::"+bpms[ui]), black);
		TGraph_reducePoints = 1; 
		*/
	
		draw(swToHours, rGetObj(topDir+dataset+"/alignment.root", "global/"+units[ui]+"/b_p"), "p,eb", cyan, mCi+1pt+cyan);
		draw(swToHours, rGetObj(topDir+dataset+"/alignment.root", "global/"+units[ui]+"/b_g"), "p,eb", green, mCi+1pt+green);
	
		draw(swToHours, rGetObj(topDir+dataset+"/alignment.root", "global/"+units[ui]+"/b"), "p,eb", blue+1pt, mCi+1pt+blue);
		
		draw(shift(0, +10)*swToHours, rGetObj(topDir+dataset+"/alignment_fit.root", ""+units[ui]+"/b_fit"), "l", red+dashed);
		draw(shift(0,   0)*swToHours, rGetObj(topDir+dataset+"/alignment_fit.root", ""+units[ui]+"/b_fit"), "l", red+1.5pt);
		draw(shift(0, -10)*swToHours, rGetObj(topDir+dataset+"/alignment_fit.root", ""+units[ui]+"/b_fit"), "l", red+dashed);
	
		//limits((time_min, -80), (time_max, +80), Crop);
		ylimits(-50, +50, Crop);
		AttachLegend(unit_labels[ui], SE, SE);
	}
	
	//----------------------------------------------------------------------------------------------------
	NewRow();
	
	for (int ui : units.keys)
	{
		NewPad("time $\ung{h}$", "vertical position $\ung{\mu m}$", axesAbove=false);
		currentpad.yTicks = RightTicks(50., 10.);
		DrawRunBands(dataset, -150, +150);
	
		/*
		TGraph_reducePoints = 30;
		draw(unixToHours*shift(0, sh_y[ui]), rGetObj("bpm.root", "LHC.BOFSU:POSITIONS_V::"+bpms[ui]), black);
		TGraph_reducePoints = 1;
		*/
	
		draw(swToHours, rGetObj(topDir+dataset+"/alignment.root", "global/"+units[ui]+"/c_min_diff"), "p,eb", cyan, mCi+1pt+cyan);
		draw(swToHours, rGetObj(topDir+dataset+"/alignment.root", "global/"+units[ui]+"/c_prob"), "p,eb", green, mCi+1pt+green);
		draw(swToHours, rGetObj(topDir+dataset+"/alignment.root", "global/"+units[ui]+"/c_mean_diff_sq"), "p,eb", magenta, mCi+1pt+magenta);
		//draw(swToHours, rGetObj(topDir+dataset+"/alignment.root", "global/"+units[ui]+"/c_hist_chi_sq"), "p,eb", green, mCi+1pt+green);
		
		draw(swToHours, rGetObj(topDir+dataset+"/alignment.root", "global/"+units[ui]+"/c"), "p,eb", blue+1pt, mCi+1pt+blue);
		
		draw(shift(0, +50)*swToHours, rGetObj(topDir+dataset+"/alignment_fit.root", ""+units[ui]+"/c_fit"), "l", red+dashed);
		draw(shift(0,   0)*swToHours, rGetObj(topDir+dataset+"/alignment_fit.root", ""+units[ui]+"/c_fit"), "l", red+1.5pt);
		draw(shift(0, -50)*swToHours, rGetObj(topDir+dataset+"/alignment_fit.root", ""+units[ui]+"/c_fit"), "l", red+dashed);
	
		//limits((time_min, -150), (time_max, +150), Crop);
		ylimits(-150, +150, Crop);
		AttachLegend(unit_labels[ui], SE, SE);
	}
	
	//----------------------------------------------------------------------------------------------------
	
	GShipout("alignment_" + dataset);
}
