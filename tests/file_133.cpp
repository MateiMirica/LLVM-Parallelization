void func() {
  int a[1000000];
  for (int i1=0; i1<34;++i1)
    for (int i2=0; i2<42;++i2)
        for (int i3=0; i3<9;++i3)
            for (int i4=0; i4<21;++i4)
                for (int i5=0; i5<18;++i5)
                    a[24+21*i1+9*i2+48*i4]=a[25+42*i1+24*i4+39*i5];
}