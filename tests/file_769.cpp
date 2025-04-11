void func() {
  int a[1000000];
  for (int i1=0; i1<29;++i1)
    for (int i2=0; i2<17;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<16;++i4)
                for (int i5=0; i5<38;++i5)
                    a[11+49*i1+26*i2+38*i3+33*i4+34*i5]=a[4+28*i1+3*i4];
}