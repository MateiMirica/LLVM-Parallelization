void func() {
  int a[1000000];
  for (int i1=0; i1<26;++i1)
    for (int i2=0; i2<17;++i2)
        for (int i3=0; i3<12;++i3)
            for (int i4=0; i4<11;++i4)
                for (int i5=0; i5<15;++i5)
                    a[13+50*i1+13*i2+38*i3+33*i5]=a[20+9*i1+9*i2+21*i3];
}