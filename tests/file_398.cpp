void func() {
  int a[1000000];
  for (int i1=0; i1<28;++i1)
    for (int i2=0; i2<31;++i2)
        for (int i3=0; i3<15;++i3)
            for (int i4=0; i4<48;++i4)
                for (int i5=0; i5<34;++i5)
                    a[7+5*i1+29*i3]=a[2+32*i1+14*i2+50*i3+8*i4+32*i5];
}