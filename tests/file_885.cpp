void func() {
  int a[1000000];
  for (int i1=0; i1<42;++i1)
    for (int i2=0; i2<18;++i2)
        for (int i3=0; i3<44;++i3)
            for (int i4=0; i4<36;++i4)
                for (int i5=0; i5<27;++i5)
                    a[33+38*i2+48*i3+34*i4+32*i5]=a[22+34*i1+36*i2+30*i3+26*i4];
}