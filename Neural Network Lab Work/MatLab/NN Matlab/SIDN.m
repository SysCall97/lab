P = {1 2 3 4};
T = {10, 3, 7};
net = newlin(P,T,[0 1]);
net.biasConnect = 0;
net.IW{1,1} = [1 2];
A = sim(net,P)