void func() {
  int a[1000000];
  for (int i1=0; i1<6;++i1)
    for (int i2=0; i2<30;++i2)
        for (int i3=0; i3<24;++i3)
            for (int i4=0; i4<26;++i4)
                for (int i5=0; i5<23;++i5)
                    a[21+28*i1+21*i2+10*i3+19*i4+36*i5]=a[8+41*i2+8*i3+3*i4+38*i5];
}