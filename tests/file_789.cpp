void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<46;++i2)
        for (int i3=0; i3<18;++i3)
            for (int i4=0; i4<44;++i4)
                for (int i5=0; i5<13;++i5)
                    a[45+25*i1+23*i3+46*i4+26*i5]=a[46+15*i1+4*i2+29*i3+18*i4+14*i5];
}