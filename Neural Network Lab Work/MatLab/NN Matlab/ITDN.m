Pi = {1};
P = {2 3 4};
T = {3 5 7};

net = newlin(P,T,[0 1],0.1);
net.IW{1,1} = [0 0];
net.biasConnect = 0;

[net,a,e,pf] = adapt(net,P,T,Pi);

net.IW{1,1}



