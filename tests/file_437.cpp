void func() {
  int a[1000000];
  for (int i1=0; i1<39;++i1)
    for (int i2=0; i2<25;++i2)
        for (int i3=0; i3<9;++i3)
            for (int i4=0; i4<38;++i4)
                for (int i5=0; i5<41;++i5)
                    a[48+3*i1+9*i2+11*i3]=a[46+26*i1+49*i2+32*i3+24*i4+45*i5];
}