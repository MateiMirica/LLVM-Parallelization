void func() {
  int a[1000000];
  for (int i1=0; i1<31;++i1)
    for (int i2=0; i2<18;++i2)
        for (int i3=0; i3<39;++i3)
            for (int i4=0; i4<28;++i4)
                for (int i5=0; i5<5;++i5)
                    a[33+14*i1+9*i2+29*i3+37*i4+15*i5]=a[15+14*i1+7*i2+14*i3+33*i4+2*i5];
}