void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<48;++i2)
        for (int i3=0; i3<10;++i3)
            for (int i4=0; i4<16;++i4)
                for (int i5=0; i5<5;++i5)
                    a[43+25*i1+14*i2+2*i3+2*i4+29*i5]=a[32+25*i1+43*i2+28*i3+43*i4];
}