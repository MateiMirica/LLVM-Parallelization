void func() {
  int a[1000000];
  for (int i1=0; i1<5;++i1)
    for (int i2=0; i2<44;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<28;++i4)
                for (int i5=0; i5<20;++i5)
                    a[25+33*i1+30*i4+14*i5]=a[8+49*i1+30*i2+40*i4];
}