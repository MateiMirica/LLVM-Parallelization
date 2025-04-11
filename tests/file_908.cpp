void func() {
  int a[1000000];
  for (int i1=0; i1<10;++i1)
    for (int i2=0; i2<27;++i2)
        for (int i3=0; i3<26;++i3)
            for (int i4=0; i4<48;++i4)
                for (int i5=0; i5<35;++i5)
                    a[44]=a[30+23*i1+8*i2+33*i4+28*i5];
}