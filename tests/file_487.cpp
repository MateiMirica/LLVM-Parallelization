void func() {
  int a[1000000];
  for (int i1=0; i1<26;++i1)
    for (int i2=0; i2<30;++i2)
        for (int i3=0; i3<18;++i3)
            for (int i4=0; i4<11;++i4)
                for (int i5=0; i5<41;++i5)
                    a[4+2*i1+33*i2+10*i3]=a[25+8*i1+37*i2+17*i3+47*i4+7*i5];
}