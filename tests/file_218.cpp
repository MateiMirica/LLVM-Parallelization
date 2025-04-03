void func() {
  int a[1000000];
  for (int i1=0; i1<26;++i1)
    for (int i2=0; i2<48;++i2)
        for (int i3=0; i3<20;++i3)
            for (int i4=0; i4<6;++i4)
                for (int i5=0; i5<35;++i5)
                    a[50+16*i1+37*i2+26*i3+9*i4+38*i5]=a[13+28*i1+9*i2+19*i4+36*i5];
}