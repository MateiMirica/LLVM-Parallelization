void func() {
  int a[1000000];
  for (int i1=0; i1<49;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<35;++i3)
            for (int i4=0; i4<49;++i4)
                for (int i5=0; i5<50;++i5)
                    a[25+29*i3+36*i4]=a[33+9*i2+36*i3+39*i4+32*i5];
}