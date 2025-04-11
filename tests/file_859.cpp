void func() {
  int a[1000000];
  for (int i1=0; i1<26;++i1)
    for (int i2=0; i2<6;++i2)
        for (int i3=0; i3<37;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<47;++i5)
                    a[2+26*i2]=a[8+25*i1+35*i3+15*i4];
}