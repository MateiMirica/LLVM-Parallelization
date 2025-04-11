void func() {
  int a[1000000];
  for (int i1=0; i1<28;++i1)
    for (int i2=0; i2<6;++i2)
        for (int i3=0; i3<36;++i3)
            for (int i4=0; i4<14;++i4)
                for (int i5=0; i5<47;++i5)
                    a[35+23*i1+45*i2]=a[25+20*i1+30*i2+48*i3];
}