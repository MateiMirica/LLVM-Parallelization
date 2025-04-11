void func() {
  int a[1000000];
  for (int i1=0; i1<28;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<12;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<8;++i5)
                    a[5+39*i1+2*i4]=a[19+46*i1+49*i2+34*i3+14*i5];
}