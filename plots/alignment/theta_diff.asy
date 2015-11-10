import root;
import pad_layout;

string topDir = "../../";

string dataset = "DS6";

string diagonals[] = { "45b_56t", "45t_56b" };
string diagonal_labels[] = { "45b--56t", "45t--56b" };

xSizeDef = 8cm;
drawGridDef = true;

//----------------------------------------------------------------------------------------------------

NewPad("$\th^{*R}_x - \th_x^{*L}\ung{\mu rad}$");
for (int dgni : diagonals.keys)
{
	draw(scale(1e6, 1), rGetObj(topDir+dataset+"/distributions_"+diagonals[dgni]+".root", "selected - angles/th_x_diffLR"),
		"vl", StdPen(dgni+1), diagonal_labels[dgni]);
	real m = robj.rExec("GetMean");
	AddToLegend(format("<mean = $%.2f\un{\mu rad}$", m*1e6));
}
limits((-100, 0), (+100, 1e11), Crop);
AttachLegend();

//----------------------------------------------------------------------------------------------------

NewPad("$\th^{*R}_y - \th_y^{*L}\ung{\mu rad}$");
for (int dgni : diagonals.keys)
{
	draw(scale(1e6, 1), rGetObj(topDir+dataset+"/distributions_"+diagonals[dgni]+".root", "selected - angles/th_y_diffLR"),
		"vl", StdPen(dgni+1), diagonal_labels[dgni]);
	real m = robj.rExec("GetMean");
	AddToLegend(format("<mean = $%.2f\un{\mu rad}$", m*1e6));
}
limits((-30, 0), (+30, 3e11), Crop);
AttachLegend();
