void func() {
  int a[1000000];
  for (int i1=0; i1<23;++i1)
    for (int i2=0; i2<33;++i2)
        for (int i3=0; i3<37;++i3)
            for (int i4=0; i4<20;++i4)
                for (int i5=0; i5<42;++i5)
                    a[43+36*i1]=a[4+42*i4+14*i5];
}