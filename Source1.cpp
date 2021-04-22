#include<iostream>

enum city { GUWAHATI = 0, BHUBANESHWAR, PANAJI, AGRA, VADODARA, LUDHIANA, PATNA, BHOPAL, INDORE, NAGPUR, KOCHI, LUCKNOW, CHANDIGARH, JAIPUR, PUNE, HYDERABAD, AHMEDABAD, KOLKATA, CHENNAI, BANGALORE, DELHI, MUMBAI };

enum players { PLAYER1 = 0, PLAYER2, PLAYER3, PLAYER4 };
int players_numb[4]{ 1, 2, 3, 4 };

int main() {
	int a = 0;
	float xcoods[40];
	float ycoods[40];
	xcoods[0] = 1185.f;
	ycoods[0] = 865.f;
	while (a < 40) {
		std::cout << a;
		//if (xcoods[j] >= 339 && xcoods[j] <= 1185 && ycoods[j] == 865) {
		if (xcoods[a] == 1185) {
			a++;
			xcoods[a] = xcoods[a - 1] - 110;
			ycoods[a] = 865.f;
			continue;
		}
		if (xcoods[a] == 339) {
			a++;
			xcoods[a] = xcoods[a - 1] - 110;
			ycoods[a] = 865.f;
		}
		else {
			a++;
			xcoods[a] = xcoods[a - 1] - 92;
			ycoods[a] = 865.f;
		}
	}
	//	if (xcoods[j] == 229 && ycoods[j] <= 865 && ycoods[j] >= 149) {
	a = 10;
	while (a < 20) {
		if (ycoods[a] == 865) {
			a++;
			ycoods[a] = ycoods[a - 1] - 100;
			xcoods[a] = 229.f;
			continue;
		}
		if (ycoods[a] == 149) {
			a++;
			ycoods[a] = ycoods[a - 1] - 100;
			xcoods[a] = 229.f;
		}
		else {
			a++;
			ycoods[a] = ycoods[a - 1] - 77;
			xcoods[a] = 229.f;
		}
	}
	a = 20;
	// 	if (xcoods[j] >= 229 && xcoods[j] <= 1075 && ycoods[j] == 49) {
	while (a < 30) {
		if (xcoods[a] == 229) {
			a++;
			xcoods[a] = xcoods[a - 1] + 110;
			ycoods[a] = 49.f;
			continue;
		}
		if (xcoods[a] == 1075) {
			a++;
			xcoods[a] = xcoods[a - 1] + 110;
			ycoods[a] = 49.f;
		}
		else {
			a++;
			xcoods[a] = xcoods[a - 1] + 92;
			ycoods[a] = 49.f;
		}
	}
	a = 30;
	// 	if (xcoods[j] == 1185 && ycoods[j] <= 768 && ycoods[j] >= 49) {
	while (a < 40) {
		if (ycoods[a] == 49) {
			a++;
			ycoods[a] = ycoods[a - 1] + 100;
			xcoods[a] = 1185.f;
			continue;
		}
		if (ycoods[a] == 765) {
			a++;
			ycoods[a] = ycoods[a - 1] + 100;
			xcoods[a] = 1185.f;
		}
		else {
			a++;
			ycoods[a] = ycoods[a - 1] + 77;
			xcoods[a] = 1185.f;
		}
	}

	float plx[4], ply[4];
	int owners[40] = { 0 };//{0, 1, 0, 0, 0, ...0}<--40 elem, 

	bool pl1buy = false, pl2buy = false, pl3buy = false, pl4buy = false;
	//intitialisation
	for (int q = 0; q < 4; q++) {
		plx[q] = xcoods[0];
		ply[q] = ycoods[0];
	}
	int rent_0[40] = { 0, 8, 0, 8, 0, 20/*temporary*/, 10, 10, 0, 10, 0, 14, 0, 14, 16, 20/*temporary*/,15, 0, 16, 20, 0, 22, 0, 22, 24, 20/*temporary*/, 22, 0, 32, 28, 0, 32, 32, 0, 33, 20/*temporary*/,0, 32, 0, 35 };
	int rent_1[40] = { 0, 20, 0, 20, 0, 20/*temporary*/, 30, 30, 0, 30, 0, 50, 0, 50, 60, 20/*temporary*/,70, 0, 70, 80/*didnt updte*/, 0, 90, 0, 90, 100, 20/*temporary*/, 110, 125/*didntupdate*/, 110/*didnt update*/, 28/*didnt update*/, 0, 32/*didnt update*/, 32/*didnt update*/, 0, 33/*didnt update*/, 20/*temporary*/,0, 32/*didnt update*/, 0, 35/*didnt update*/ };
	int rent_2[40] = { 0, 40, 0, 60, 0, 20/*temporary*/, 90, 90, 0, 90, 0, 150, 0, 150, 250/*discuss*/, 20/*temporary*/,200, 0, 200, 240/*didnt updte*/, 0, 250, 0, 250, 300, 20/*temporary*/, 330, 125/*didntupdate*/, 110/*didnt update*/, 28/*didnt update*/, 0, 32/*didnt update*/, 32/*didnt update*/, 0, 33/*didnt update*/, 20/*temporary*/,0, 32/*didnt update*/, 0, 35/*didnt update*/ };
	int rent_3[40] = { 0, 90, 0, 120/*discuss*/, 0, 20/*temporary*/, 270, 270, 0, 270, 0, 450, 0, 450, 500, 20/*temporary*/,550, 0, 550, 600/*didnt updte*/, 0, 700, 0, 700, 750, 20/*temporary*/, 800, 125/*didntupdate*/, 110/*didnt update*/, 28/*didnt update*/, 0, 32/*didnt update*/, 32/*didnt update*/, 0, 33/*didnt update*/, 20/*temporary*/,0, 32/*didnt update*/, 0, 35/*didnt update*/ };
	int rent_4[40] = { 0, 160, 0, 220/*discuss*/, 0, 20/*temporary*/, 400, 400, 0, 400, 0, 625, 0, 625, 700, 20/*temporary*/,750, 0, 750, 825/*didnt updte*/, 0, 875, 0, 875, 925, 20/*temporary*/, 975, 125/*didntupdate*/, 110/*didnt update*/, 28/*didnt update*/, 0, 32/*didnt update*/, 32/*didnt update*/, 0, 33/*didnt update*/, 20/*temporary*/,0, 32/*didnt update*/, 0, 35/*didnt update*/ };
	int rent_5[40] = { 0, 250, 0, 325/*discuss*/, 0, 20/*temporary*/, 550, 550, 0, 550, 0, 800/*discuss*/, 0, 800/*discuss*/, 900, 20/*temporary*/,950, 0, 950, 1000/*didnt updte*/, 0, 1050/*discuss*/, 0, 1050/*discuss*/,1100, 20/*temporary*/, 1150, 125/*didntupdate*/, 110/*didnt update*/, 28/*didnt update*/, 0, 32/*didnt update*/, 32/*didnt update*/, 0, 33/*didnt update*/, 20/*temporary*/,0, 32/*didnt update*/, 0, 35/*didnt update*/ };
	int houses[40] = { 0 };

	int numrot[4] = { 0 };
	// for(int e=0; e<4; e++){
	//   numrot[e]=0;
	// }
	int money[4] = { 2000 };
	// for(int t=0; t<4; t++){
	//   money[t]=2000;
	// }
	//for loop for number of dice throws.
	int oldblock1 = 0, oldblock2 = 0, oldblock3 = 0, oldblock4 = 0;//create array for oldblock
	int dicecall = 0;
	int flag[4] = { 0 };
	players chance = PLAYER1;
	switch (chance)
	{
	case PLAYER1:
		if (oldblock1 + dicecall >= 40) { int residue1 = (oldblock1)-40; oldblock1 = residue1; numrot[0]++; flag[0] = 1; }
		plx[0] = xcoods[oldblock1 + dicecall];
		ply[0] = ycoods[oldblock1 + dicecall];
		oldblock1 += dicecall;
		// if(plx[0]==xcoods[0] && ply[0]==ycoods[0]){
		//   if(numrot[0]>=1){
		//     money[0]+=200;
		//   }
		//   numrot[0]++;
		// }
		if (flag[0] == 1) { money[0] += 200; flag[0] = 0; }
		for (int iter = 0; iter < 40; iter++) {
			if (xcoods[iter] == plx[0] && ycoods[iter] == ply[0]) {
				if (owners[iter] == 0) {
					if (iter == 0 || iter == 2 || iter == 4 || iter == 8 || iter == 10 || iter == 12 || iter == 17 || iter == 20 || iter == 22 || iter == 27 || iter == 30 || iter == 33 || iter == 36 || iter == 38) { pl1buy = false; }
					//option to buy...code
					//if buys pl1buy=true
					if (pl1buy == true) {
						owners[iter] = 1;
						//draw as this person's property
					}
					// if(pl1buy==false){
					//   owners[iter]=0;
					// }
				}
				if (owners[iter] >= 1) {
					if (owners[iter] != 1) {
						if (houses[iter] == 0) {
							money[owners[iter] - 1] += rent_0[iter];
							money[0] -= rent_0[iter];
						}
						if (houses[iter] == 1) {
							money[owners[iter] - 1] += rent_1[iter];
							money[0] -= rent_1[iter];
						}
						if (houses[iter] == 2) {
							money[owners[iter] - 1] += rent_2[iter];
							money[0] -= rent_2[iter];
						}
						if (houses[iter] == 3) {
							money[owners[iter] - 1] += rent_3[iter];
							money[0] -= rent_3[iter];
						}
						if (houses[iter] == 4) {
							money[owners[iter] - 1] += rent_4[iter];
							money[0] -= rent_4[iter];
						}
						if (houses[iter] == 5) {
							money[owners[iter] - 1] += rent_5[iter];
							money[0] -= rent_5[iter];
						}
					}
				}
				if (owners[iter] == 0) {
					if (iter == 2 || iter == 17 || iter == 33) {//community chest cards random choose
					}
					if (iter == 4) { money[0] += 150; }
					if (iter == 8 || iter == 22 || iter == 36) {
						//chance cards random
					}
					if (iter == 30) { plx[0] = xcoods[10]; ply[0] = ycoods[10]; }
					if (iter == 12 || iter == 27 || iter == 38) {
						if (iter == 12 || iter == 27) {
							money[0] -= 150;
						}
						if (iter == 38) {
							money[0] -= 75;
						}
					}
				}
			}
		}
		chance = PLAYER2;
		break;
	case PLAYER2:
		if (oldblock2 + dicecall >= 40) { int residue2 = oldblock2 - 40; oldblock2 = residue2; }
		//redefine dicecall
		plx[1] = xcoods[oldblock2 + dicecall];
		ply[1] = ycoods[oldblock2 + dicecall];
		oldblock2 += dicecall;
		//code declaration for checking all the algorithms.
		if (plx[1] == xcoods[0] && ply[1] == ycoods[0]) {
			numrot[1]++;
			if (numrot[1] >= 1) {
				money[1] += 200;
			}
		}
		for (int iter = 0; iter < 40; iter++) {
			if (xcoods[iter] == plx[1] && ycoods[iter] == ply[1]) {
				if (owners[iter] == 0) {
					//option to buy...code
					//if buys pl1buy=true
					if (iter == 0 || iter == 2 || iter == 4 || iter == 8 || iter == 10 || iter == 12 || iter == 17 || iter == 20 || iter == 22 || iter == 27 || iter == 30 || iter == 33 || iter == 36 || iter == 38) { pl2buy = false; }
					if (pl2buy == true) {
						owners[iter] = 2;
					}
					if (pl2buy == false) {
						owners[iter] = 0;
					}
				}
				if (owners[iter] == 2) {
				}
				for (int miniiter = 1; miniiter < 5; miniiter++) {
					if (owners[iter] == miniiter) {
						if (miniiter == 2) { continue; }
						else {
							if (houses[iter] == 0) {
								money[miniiter - 1] += rent_0[iter];
								money[1] -= rent_0[iter];
							}
							if (houses[iter] == 1) {
								money[miniiter - 1] += rent_1[iter];
								money[1] -= rent_1[iter];
							}
							if (houses[iter] == 2) {
								money[miniiter - 1] += rent_2[iter];
								money[1] -= rent_2[iter];
							}
							if (houses[iter] == 3) {
								money[miniiter - 1] += rent_3[iter];
								money[1] -= rent_3[iter];
							}
							if (houses[iter] == 4) {
								money[miniiter - 1] += rent_4[iter];
								money[1] -= rent_4[iter];
							}
							if (houses[iter] == 5) {
								money[miniiter - 1] += rent_5[iter];
								money[1] -= rent_5[iter];
							}
						}
					}
				}
				if (iter == 2 || iter == 17 || iter == 33) {//community chest cards random choose
				}
				if (iter == 4) { money[1] += 150; }
				if (iter == 8 || iter == 22 || iter == 36) {
					//chance cards random
				}
				if (iter == 30) { plx[1] = xcoods[10]; ply[1] = ycoods[10]; }

				if (iter == 12 || iter == 27 || iter == 38) {
					if (iter == 12 || iter == 27) {
						money[1] -= 150;
					}
					if (iter == 38) {
						money[1] -= 75;
					}
				}
			}
		}
		chance = PLAYER3;
		break;
	case PLAYER3:
		if (oldblock3 + dicecall >= 40) { int residue3 = oldblock3 - 40; oldblock3 = residue3; }
		//redefine dicecall
		plx[2] = xcoods[oldblock3 + dicecall];
		ply[2] = ycoods[oldblock3 + dicecall];
		oldblock3 += dicecall;
		if (plx[2] == xcoods[0] && ply[2] == ycoods[0]) {
			numrot[2]++;
			if (numrot[2] >= 1) {
				money[2] += 200;
			}
		}
		for (int iter = 0; iter < 40; iter++) {
			if (xcoods[iter] == plx[2] && ycoods[iter] == ply[2]) {
				if (owners[iter] == 0) {
					//option to buy...code
					//if buys pl1buy=true
					if (iter == 0 || iter == 2 || iter == 4 || iter == 8 || iter == 10 || iter == 12 || iter == 17 || iter == 20 || iter == 22 || iter == 27 || iter == 30 || iter == 33 || iter == 36 || iter == 38) { pl3buy = false; }
					if (pl3buy == true) {
						owners[iter] = 3;
					}
					if (pl1buy == false) {
						owners[iter] = 0;
					}
				}
				if (owners[iter] == 3) {
					//ask to build if code
					//houses[iter]++
					//else, nothing to be done
				}
				for (int miniiter = 1; miniiter < 5; miniiter++) {
					if (owners[iter] == miniiter) {
						if (miniiter == 3) { continue; }
						else {
							if (houses[iter] == 0) {
								money[miniiter - 1] += rent_0[iter];
								money[2] -= rent_0[iter];
							}
							if (houses[iter] == 1) {
								money[miniiter - 1] += rent_1[iter];
								money[2] -= rent_1[iter];
							}
							if (houses[iter] == 2) {
								money[miniiter - 1] += rent_2[iter];
								money[2] -= rent_2[iter];
							}
							if (houses[iter] == 3) {
								money[miniiter - 1] += rent_3[iter];
								money[2] -= rent_3[iter];
							}
							if (houses[iter] == 4) {
								money[miniiter - 1] += rent_4[iter];
								money[2] -= rent_4[iter];
							}
							if (houses[iter] == 5) {
								money[miniiter - 1] += rent_5[iter];
								money[2] -= rent_5[iter];
							}
						}
					}
					if (iter == 2 || iter == 17 || iter == 33) {//community chest cards random choose
					}
					if (iter == 4) { money[2] += 150; }
					if (iter == 8 || iter == 22 || iter == 36) {
						//chance cards random
					}
					if (iter == 30) { plx[2] = xcoods[10]; ply[2] = ycoods[10]; }

					if (iter == 12 || iter == 27 || iter == 38) {
						if (iter == 12 || iter == 27) {
							money[2] -= 150;
						}
						if (iter == 38) {
							money[2] -= 75;
						}
					}

				}
			}
		}
		chance = PLAYER4;
		break;
	case PLAYER4:
		if (oldblock1 + dicecall >= 40) { int residue4 = oldblock4 - 40; oldblock4 = residue4; }
		//redefine dicecall
		plx[3] = xcoods[oldblock4 + dicecall];
		ply[3] = ycoods[oldblock4 + dicecall];
		oldblock4 += dicecall;
		if (plx[3] == xcoods[0] && ply[3] == ycoods[0]) {
			numrot[3]++;
			if (numrot[3] >= 1) {
				money[3] += 200;
			}
		}
		for (int iter = 0; iter < 40; iter++) {
			if (xcoods[iter] == plx[3] && ycoods[iter] == ply[3]) {
				if (owners[iter] == 0) {
					//option to buy...code
					//if buys pl1buy=true
					if (iter == 0 || iter == 2 || iter == 4 || iter == 8 || iter == 10 || iter == 12 || iter == 17 || iter == 20 || iter == 22 || iter == 27 || iter == 30 || iter == 33 || iter == 36 || iter == 38) { pl4buy = false; }
					if (pl4buy == true) {
						owners[iter] = 4;
					}
					if (pl4buy == false) {
						owners[iter] = 0;
					}
				}
				if (owners[iter] == 4) {
					//ask to build if code
					//houses[iter]++
					//else, nothing to be done
				}
				if (owners[iter] >= 1) {
					if (owners[iter] != 4) {
						if (houses[iter] == 0) {
							money[owners[iter] - 1] += rent_0[iter];
							money[3] -= rent_0[iter];
						}
						if (houses[iter] == 1) {
							money[owners[iter] - 1] += rent_1[iter];
							money[3] -= rent_1[iter];
						}
						if (houses[iter] == 2) {
							money[owners[iter] - 1] += rent_2[iter];
							money[3] -= rent_2[iter];
						}
						if (houses[iter] == 3) {
							money[owners[iter] - 1] += rent_3[iter];
							money[3] -= rent_3[iter];
						}
						if (houses[iter] == 4) {
							money[owners[iter] - 1] += rent_4[iter];
							money[3] -= rent_4[iter];
						}
						if (houses[iter] == 5) {
							money[owners[iter] - 1] += rent_5[iter];
							money[3] -= rent_5[iter];
						}
					}
				}
				if (owners[iter] == 0) {
					if (iter == 2 || iter == 17 || iter == 33) {//community chest cards random choose
					}
					if (iter == 4) { money[3] += 150; }
					if (iter == 8 || iter == 22 || iter == 36) {
						//chance cards random
					}
					if (iter == 30) { plx[3] = xcoods[10]; ply[3] = ycoods[10]; }
					if (iter == 12 || iter == 27 || iter == 38) {
						if (iter == 12 || iter == 27) {
							money[3] -= 150;
						}
						if (iter == 38) {
							money[3] -= 75;
						}
					}
				}
			}
		}
		chance = PLAYER1;
		break;

	default:
		std::cout << "ERROR" << std::endl;
		break;
	}

	return 0;
}
//Update every array size as [size] so that u can use #define and alter size for the no. of players
//Just keep the player 1 case and update it when u figure out the condition for the while loop