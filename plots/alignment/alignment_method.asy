import root;
import pad_layout;

string topDir = "../../";

string dataset = "DS6";
string period = "276";
int period_idx = 0; // period index in global graph
string unit = "R_2_F";

string f = topDir + dataset + "/alignment.root";
string dir = "period "+period+"/unit "+unit;

// TODO: remove
period="564";

transform xyswitch = (0, 0, 0, 1, 1, 0);

//TGraph_reducePoints = 10;
TGraph_N_limit = 1000;

//----------------------------------------------------------------------------------------------------

real GetYResult()
{
	rObject obj = rGetObj(f, "global/"+unit+"/c");
	real x[] = { 0. };
	real y[] = { 0. };
	obj.vExec("GetPoint", period_idx, x, y);

	write(x[0]);
	write(y[0]);

	return y[0] * 1e-3;
}

//----------------------------------------------------------------------------------------------------

NewPad(false);
label("{\SetFontSizesXX hit distribution}");

NewPad(false);

NewPad(false);
label("{\SetFontSizesXX vertical centre}");

//--------------------
NewRow();

NewPad("$x\ung{mm}$", "$y\ung{mm}$");
//draw(xyswitch, rGetObj(f, dir+"/horizontal/horizontal graph fit/horizontal fit|merged"), "p");
draw(rGetObj(topDir+dataset+"/distributions_45b_56t.root", "alignment/"+period+"/g_y_"+unit+"_vs_x_"+unit+"_sel"), "p");
draw(rGetObj(topDir+dataset+"/distributions_45t_56b.root", "alignment/"+period+"/g_y_"+unit+"_vs_x_"+unit+"_sel"), "p");

limits((-3, -20), (+3, +20), Crop);

NewPad(false, autoSize=false);
draw((0, 0)--(50, 0), EndArrow);


NewPad("number of entries", "$y\ung{mm}$");
draw(xyswitch, rGetObj(f, dir+"/vertical/y_hist|y_hist"), "vl", black);
draw(xyswitch, rGetObj(f, dir+"/vertical/y_hist|y_hist_range"), "vl", heavygreen+1pt);
real y_beam = GetYResult();
limits((0, -20), (8e3, +20), Crop);
xaxis(YEquals(y_beam, false), blue+1pt);

//--------------------
NewRow();

NewPad(false, autoSize=false);
draw((0, 0)--(0, -50), EndArrow);

NewPad(false, autoSize=false);

NewPad(false, autoSize=false);
draw((0, 0)--(0, -50), EndArrow);

//--------------------
NewRow();

NewPad(false);
label("{\SetFontSizesXX elastic peak axis}");

NewPad(false);

NewPad(false);
label("{\SetFontSizesXX intersection: beam position}");

//--------------------
NewRow();

NewPad("$x\ung{mm}$", "$y\ung{mm}$");
//draw(xyswitch, rGetObj(f, dir+"/horizontal/horizontal graph fit/horizontal fit|merged"), "p");
draw(rGetObj(topDir+dataset+"/distributions_45b_56t.root", "alignment/"+period+"/g_y_"+unit+"_vs_x_"+unit+"_sel"), "p");
draw(rGetObj(topDir+dataset+"/distributions_45t_56b.root", "alignment/"+period+"/g_y_"+unit+"_vs_x_"+unit+"_sel"), "p");
//draw(xyswitch, rGetObj(f, dir+"/horizontal/horizontal profile/p"), "d0,eb", red+1pt);
draw(xyswitch, rGetObj(f, dir+"/horizontal/horizontal profile/p|ff"), "l", red+1pt);
limits((-3, -20), (+3, +20), Crop);

NewPad(false, autoSize=false);
draw((0, 0)--(50, 0), EndArrow);

NewPad("$x\ung{mm}$", "$y\ung{mm}$");

draw(xyswitch, rGetObj(f, dir+"/horizontal/horizontal profile/p|ff"), "l", red+1pt);
draw((-10, y_beam)--(+10, y_beam), blue+1pt);
limits((-3, -20), (+3, +20), Crop);

GShipout(hSkip=2mm, vSkip=0mm);
