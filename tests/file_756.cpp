void func() {
  int a[1000000];
  for (int i1=0; i1<35;++i1)
    for (int i2=0; i2<11;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<22;++i4)
                for (int i5=0; i5<42;++i5)
                    a[35+6*i3]=a[34+50*i1+42*i2+14*i3+24*i4+35*i5];
}