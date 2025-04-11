void func() {
  int a[1000000];
  for (int i1=0; i1<13;++i1)
    for (int i2=0; i2<47;++i2)
        for (int i3=0; i3<20;++i3)
            for (int i4=0; i4<21;++i4)
                for (int i5=0; i5<5;++i5)
                    a[28+41*i3+4*i4+8*i5]=a[25+5*i3+48*i4+6*i5];
}