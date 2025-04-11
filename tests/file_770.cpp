void func() {
  int a[1000000];
  for (int i1=0; i1<35;++i1)
    for (int i2=0; i2<46;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<45;++i5)
                    a[44+17*i1+29*i2+14*i4]=a[24+16*i2+14*i4];
}