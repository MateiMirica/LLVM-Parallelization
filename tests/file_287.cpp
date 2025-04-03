void func() {
  int a[1000000];
  for (int i1=0; i1<37;++i1)
    for (int i2=0; i2<41;++i2)
        for (int i3=0; i3<39;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<19;++i5)
                    a[24+11*i1+3*i3+46*i4]=a[45+28*i1+38*i2+4*i3+49*i4+17*i5];
}