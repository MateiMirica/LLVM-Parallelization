void func() {
  int a[1000000];
  for (int i1=0; i1<40;++i1)
    for (int i2=0; i2<7;++i2)
        for (int i3=0; i3<45;++i3)
            for (int i4=0; i4<15;++i4)
                for (int i5=0; i5<45;++i5)
                    a[15+4*i2+20*i4]=a[37+17*i2+11*i3+32*i4+20*i5];
}