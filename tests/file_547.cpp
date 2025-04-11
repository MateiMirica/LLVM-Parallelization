void func() {
  int a[1000000];
  for (int i1=0; i1<15;++i1)
    for (int i2=0; i2<28;++i2)
        for (int i3=0; i3<28;++i3)
            for (int i4=0; i4<25;++i4)
                for (int i5=0; i5<7;++i5)
                    a[44+49*i1+45*i2+22*i3+47*i4+4*i5]=a[11+18*i2+4*i3];
}