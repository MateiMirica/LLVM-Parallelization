void func() {
  int a[1000000];
  for (int i1=0; i1<6;++i1)
    for (int i2=0; i2<39;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<11;++i4)
                for (int i5=0; i5<30;++i5)
                    a[7+40*i1+17*i2+14*i4]=a[46+34*i1+49*i2+32*i3+37*i4+11*i5];
}