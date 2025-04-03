void func() {
  int a[1000000];
  for (int i1=0; i1<48;++i1)
    for (int i2=0; i2<11;++i2)
        for (int i3=0; i3<32;++i3)
            for (int i4=0; i4<37;++i4)
                for (int i5=0; i5<7;++i5)
                    a[46+42*i1+45*i2+26*i3+5*i4]=a[50+30*i1+40*i2];
}