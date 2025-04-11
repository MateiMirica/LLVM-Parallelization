void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<7;++i2)
        for (int i3=0; i3<14;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<26;++i5)
                    a[34+28*i1]=a[3+46*i1+17*i2+10*i4+30*i5];
}