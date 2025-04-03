void func() {
  int a[1000000];
  for (int i1=0; i1<33;++i1)
    for (int i2=0; i2<36;++i2)
        for (int i3=0; i3<31;++i3)
            for (int i4=0; i4<40;++i4)
                for (int i5=0; i5<38;++i5)
                    a[31+17*i1+49*i4+22*i5]=a[34+37*i1+34*i2+42*i3+23*i4+8*i5];
}