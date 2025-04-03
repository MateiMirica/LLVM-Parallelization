void func() {
  int a[1000000];
  for (int i1=0; i1<37;++i1)
    for (int i2=0; i2<33;++i2)
        for (int i3=0; i3<34;++i3)
            for (int i4=0; i4<43;++i4)
                for (int i5=0; i5<26;++i5)
                    a[5+11*i1+6*i3+34*i4+8*i5]=a[4+33*i1+46*i3+42*i5];
}