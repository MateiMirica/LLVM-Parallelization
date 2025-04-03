void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<40;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<49;++i4)
                for (int i5=0; i5<5;++i5)
                    a[5+25*i1+19*i2+23*i4]=a[25+31*i1+29*i2+31*i3+36*i4+39*i5];
}