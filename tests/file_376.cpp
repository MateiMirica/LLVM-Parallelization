void func() {
  int a[1000000];
  for (int i1=0; i1<26;++i1)
    for (int i2=0; i2<35;++i2)
        for (int i3=0; i3<7;++i3)
            for (int i4=0; i4<21;++i4)
                for (int i5=0; i5<23;++i5)
                    a[22+22*i1+1*i2+26*i3+18*i4+26*i5]=a[37+22*i1+27*i2+4*i3+36*i4+42*i5];
}