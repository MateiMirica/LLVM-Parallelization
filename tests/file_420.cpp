void func() {
  int a[1000000];
  for (int i1=0; i1<15;++i1)
    for (int i2=0; i2<11;++i2)
        for (int i3=0; i3<23;++i3)
            for (int i4=0; i4<34;++i4)
                for (int i5=0; i5<5;++i5)
                    a[16+25*i2+21*i3]=a[19+49*i1+46*i2+30*i3+16*i4];
}