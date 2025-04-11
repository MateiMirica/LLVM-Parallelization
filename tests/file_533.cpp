void func() {
  int a[1000000];
  for (int i1=0; i1<9;++i1)
    for (int i2=0; i2<25;++i2)
        for (int i3=0; i3<45;++i3)
            for (int i4=0; i4<26;++i4)
                for (int i5=0; i5<13;++i5)
                    a[12+31*i1+13*i3]=a[43+36*i1+46*i2+31*i3+4*i4];
}