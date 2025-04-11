void func() {
  int a[1000000];
  for (int i1=0; i1<21;++i1)
    for (int i2=0; i2<20;++i2)
        for (int i3=0; i3<26;++i3)
            for (int i4=0; i4<23;++i4)
                for (int i5=0; i5<37;++i5)
                    a[26+15*i1+7*i2+15*i4+36*i5]=a[40+49*i2+42*i3+48*i4];
}