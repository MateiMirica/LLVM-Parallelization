void func() {
  int a[1000000];
  for (int i1=0; i1<42;++i1)
    for (int i2=0; i2<27;++i2)
        for (int i3=0; i3<31;++i3)
            for (int i4=0; i4<19;++i4)
                for (int i5=0; i5<31;++i5)
                    a[37+16*i1+36*i2+38*i3+33*i4]=a[14+22*i1+2*i3+15*i4+16*i5];
}