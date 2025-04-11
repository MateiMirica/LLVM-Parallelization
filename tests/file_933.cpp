void func() {
  int a[1000000];
  for (int i1=0; i1<43;++i1)
    for (int i2=0; i2<13;++i2)
        for (int i3=0; i3<41;++i3)
            for (int i4=0; i4<21;++i4)
                for (int i5=0; i5<46;++i5)
                    a[31+38*i1+36*i3+16*i4+26*i5]=a[26+6*i1+12*i3+16*i4+16*i5];
}