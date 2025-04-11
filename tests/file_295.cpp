void func() {
  int a[1000000];
  for (int i1=0; i1<25;++i1)
    for (int i2=0; i2<6;++i2)
        for (int i3=0; i3<48;++i3)
            for (int i4=0; i4<15;++i4)
                for (int i5=0; i5<48;++i5)
                    a[39+42*i1+11*i4]=a[25+12*i1+30*i2+44*i4];
}