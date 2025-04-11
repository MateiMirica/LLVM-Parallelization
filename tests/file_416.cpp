void func() {
  int a[1000000];
  for (int i1=0; i1<20;++i1)
    for (int i2=0; i2<15;++i2)
        for (int i3=0; i3<21;++i3)
            for (int i4=0; i4<26;++i4)
                for (int i5=0; i5<48;++i5)
                    a[26+17*i2+26*i3+34*i4]=a[38+14*i1+44*i2+31*i3+36*i4+18*i5];
}