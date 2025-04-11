void func() {
  int a[1000000];
  for (int i1=0; i1<31;++i1)
    for (int i2=0; i2<49;++i2)
        for (int i3=0; i3<15;++i3)
            for (int i4=0; i4<46;++i4)
                for (int i5=0; i5<49;++i5)
                    a[25+13*i1+4*i3]=a[33+27*i1+15*i2+31*i3+29*i4+6*i5];
}