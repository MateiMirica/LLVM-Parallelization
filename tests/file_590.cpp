void func() {
  int a[1000000];
  for (int i1=0; i1<30;++i1)
    for (int i2=0; i2<40;++i2)
        for (int i3=0; i3<33;++i3)
            for (int i4=0; i4<11;++i4)
                for (int i5=0; i5<17;++i5)
                    a[26+46*i2+11*i3+42*i4+26*i5]=a[23+37*i3+20*i4+36*i5];
}