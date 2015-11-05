import root;
import pad_layout;

string topDir = "../../";

//string diagonals[] = { "45b_56t", "45t_56b", "combined" };
//string diagLabels[] = { "45 bot -- 56 top", "45 top -- 56 bot", "combined" };

string diagonals[] = { "combined" };
string diagLabels[] = { "combined" };

drawGridDef = true;

xTicksDef = LeftTicks(0.5, 0.1);



for (int dgni : diagonals.keys)
{
	NewPad("$|t|\ung{GeV^2}$", "$\d\si/\d t\ung{a.~u.}$", 10cm, 8cm);
	scale(Linear, Log);

	pen p = StdPen(dgni + 1);

	draw(rGetObj(topDir+"DS-merged/merged.root", "eb/merged/" + diagonals[dgni] + "/h_dsdt"),
		"d0,eb", p);

	limits((0, 1e1), (3.5, 1e9), Crop);
	AttachLegend(diagLabels[dgni]);
}

