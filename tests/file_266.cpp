void func() {
  int a[1000000];
  for (int i1=0; i1<36;++i1)
    for (int i2=0; i2<34;++i2)
        for (int i3=0; i3<48;++i3)
            for (int i4=0; i4<18;++i4)
                for (int i5=0; i5<25;++i5)
                    a[21+50*i1+17*i3+48*i4+39*i5]=a[4+8*i1+12*i2+29*i3];
}