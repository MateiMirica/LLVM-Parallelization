void func() {
  int a[1000000];
  for (int i1=0; i1<47;++i1)
    for (int i2=0; i2<6;++i2)
        for (int i3=0; i3<20;++i3)
            for (int i4=0; i4<12;++i4)
                for (int i5=0; i5<35;++i5)
                    a[25+33*i2+9*i3+14*i4+42*i5]=a[36+7*i1+26*i2+9*i3+28*i4+21*i5];
}