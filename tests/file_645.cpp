void func() {
  int a[1000000];
  for (int i1=0; i1<32;++i1)
    for (int i2=0; i2<45;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<5;++i5)
                    a[32+49*i1+36*i2+29*i4+45*i5]=a[13+32*i1+4*i2+13*i5];
}