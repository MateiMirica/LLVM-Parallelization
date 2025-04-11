void func() {
  int a[1000000];
  for (int i1=0; i1<40;++i1)
    for (int i2=0; i2<24;++i2)
        for (int i3=0; i3<48;++i3)
            for (int i4=0; i4<14;++i4)
                for (int i5=0; i5<5;++i5)
                    a[6+6*i1+22*i2+20*i3+8*i5]=a[16+50*i1+22*i2+36*i3+35*i4+33*i5];
}