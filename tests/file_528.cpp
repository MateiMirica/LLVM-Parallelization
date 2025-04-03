void func() {
  int a[1000000];
  for (int i1=0; i1<42;++i1)
    for (int i2=0; i2<23;++i2)
        for (int i3=0; i3<12;++i3)
            for (int i4=0; i4<12;++i4)
                for (int i5=0; i5<38;++i5)
                    a[47+50*i1+4*i2+15*i3+35*i4+15*i5]=a[36+17*i1+13*i2+20*i4+30*i5];
}