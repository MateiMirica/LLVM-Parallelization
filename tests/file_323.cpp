void func() {
  int a[1000000];
  for (int i1=0; i1<50;++i1)
    for (int i2=0; i2<46;++i2)
        for (int i3=0; i3<35;++i3)
            for (int i4=0; i4<15;++i4)
                for (int i5=0; i5<10;++i5)
                    a[19+9*i4+7*i5]=a[25+24*i1+16*i3+23*i4];
}