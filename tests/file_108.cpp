void func() {
  int a[1000000];
  for (int i1=0; i1<37;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<44;++i3)
            for (int i4=0; i4<34;++i4)
                for (int i5=0; i5<42;++i5)
                    a[32+5*i3+14*i4]=a[1+40*i1+11*i3+26*i5];
}