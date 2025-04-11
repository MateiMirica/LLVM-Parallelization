void func() {
  int a[1000000];
  for (int i1=0; i1<13;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<42;++i3)
            for (int i4=0; i4<48;++i4)
                for (int i5=0; i5<40;++i5)
                    a[6+50*i1+20*i2+6*i3+11*i4]=a[10+44*i1+26*i2+20*i4+39*i5];
}