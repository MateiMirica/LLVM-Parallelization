void func() {
  int a[1000000];
  for (int i1=0; i1<17;++i1)
    for (int i2=0; i2<33;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<20;++i4)
                for (int i5=0; i5<36;++i5)
                    a[12+6*i1+44*i3+16*i4+9*i5]=a[4+36*i1+5*i3+40*i4+33*i5];
}