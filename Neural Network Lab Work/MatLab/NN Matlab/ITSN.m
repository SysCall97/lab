P = {[1;2] [2;1] [2;3] [3;1]};
T = {4 5 7 7};

net = newlin(P,T,0,0);
net.IW{1,1} = [0 0];
net.b{1} = 0;

[net,a,e,pf] = adapt(net,P,T);

net.IW{1,1}

net.inputWeights{1,1}.learnParam.lr=0.1;
net.biases{1,1}.learnParam.lr=0.1;
[net,a,e,pf] = adapt(net,P,T);