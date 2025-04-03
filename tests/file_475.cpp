void func() {
  int a[1000000];
  for (int i1=0; i1<48;++i1)
    for (int i2=0; i2<13;++i2)
        for (int i3=0; i3<14;++i3)
            for (int i4=0; i4<44;++i4)
                for (int i5=0; i5<45;++i5)
                    a[3+11*i2+19*i4]=a[23+42*i1+17*i2+24*i3+45*i4+39*i5];
}