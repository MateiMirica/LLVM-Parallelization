void func() {
  int a[1000000];
  for (int i1=0; i1<29;++i1)
    for (int i2=0; i2<7;++i2)
        for (int i3=0; i3<31;++i3)
            for (int i4=0; i4<48;++i4)
                for (int i5=0; i5<32;++i5)
                    a[11+39*i1+36*i3+36*i4+9*i5]=a[33+33*i1+33*i2+18*i3+18*i4];
}