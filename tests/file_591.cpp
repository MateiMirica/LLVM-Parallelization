void func() {
  int a[1000000];
  for (int i1=0; i1<9;++i1)
    for (int i2=0; i2<35;++i2)
        for (int i3=0; i3<26;++i3)
            for (int i4=0; i4<24;++i4)
                for (int i5=0; i5<21;++i5)
                    a[31+4*i1+28*i4+24*i5]=a[22+42*i5];
}