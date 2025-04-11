void func() {
  int a[1000000];
  for (int i1=0; i1<5;++i1)
    for (int i2=0; i2<46;++i2)
        for (int i3=0; i3<39;++i3)
            for (int i4=0; i4<26;++i4)
                for (int i5=0; i5<16;++i5)
                    a[13+36*i1+44*i3+41*i5]=a[23];
}