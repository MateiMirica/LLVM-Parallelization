void func() {
  int a[1000000];
  for (int i1=0; i1<49;++i1)
    for (int i2=0; i2<38;++i2)
        for (int i3=0; i3<28;++i3)
            for (int i4=0; i4<18;++i4)
                for (int i5=0; i5<31;++i5)
                    a[32+37*i1+11*i2+31*i3+44*i4+15*i5]=a[23+24*i3+29*i4];
}