void func() {
  int a[1000000];
  for (int i1=0; i1<8;++i1)
    for (int i2=0; i2<6;++i2)
        for (int i3=0; i3<16;++i3)
            for (int i4=0; i4<24;++i4)
                for (int i5=0; i5<46;++i5)
                    a[12+2*i1+35*i2+47*i3]=a[9+25*i2+49*i3+34*i4+26*i5];
}