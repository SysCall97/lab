P = [1 2 2 3; 2 1 3 1];
T = [-100 50 100];
net = newlin(P,T);
net.IW{1,1} = [1 2];
net.b{1} = 0;
A = sim(net,P)