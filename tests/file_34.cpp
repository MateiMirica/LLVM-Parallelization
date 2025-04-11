void func() {
  int a[1000000];
  for (int i1=0; i1<26;++i1)
    for (int i2=0; i2<47;++i2)
        for (int i3=0; i3<7;++i3)
            for (int i4=0; i4<32;++i4)
                for (int i5=0; i5<7;++i5)
                    a[37+26*i1+48*i3+36*i4+31*i5]=a[36+43*i3+31*i4];
}