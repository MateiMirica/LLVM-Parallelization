void func() {
  int a[1000000];
  for (int i1=0; i1<14;++i1)
    for (int i2=0; i2<44;++i2)
        for (int i3=0; i3<33;++i3)
            for (int i4=0; i4<14;++i4)
                for (int i5=0; i5<8;++i5)
                    a[25+12*i1+39*i2+18*i5]=a[32+20*i1+5*i2+6*i3+28*i4];
}