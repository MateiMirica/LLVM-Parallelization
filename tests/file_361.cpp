void func() {
  int a[1000000];
  for (int i1=0; i1<40;++i1)
    for (int i2=0; i2<6;++i2)
        for (int i3=0; i3<44;++i3)
            for (int i4=0; i4<12;++i4)
                for (int i5=0; i5<41;++i5)
                    a[31+24*i1+37*i2+39*i3+14*i5]=a[36+8*i1+37*i2+17*i3];
}