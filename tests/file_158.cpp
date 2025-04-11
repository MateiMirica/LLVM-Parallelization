void func() {
  int a[1000000];
  for (int i1=0; i1<10;++i1)
    for (int i2=0; i2<35;++i2)
        for (int i3=0; i3<50;++i3)
            for (int i4=0; i4<44;++i4)
                for (int i5=0; i5<5;++i5)
                    a[25+30*i1+3*i2+19*i3+17*i4]=a[12+28*i1+10*i3+6*i4];
}