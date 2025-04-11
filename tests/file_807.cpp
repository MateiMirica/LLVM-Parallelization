void func() {
  int a[1000000];
  for (int i1=0; i1<17;++i1)
    for (int i2=0; i2<26;++i2)
        for (int i3=0; i3<6;++i3)
            for (int i4=0; i4<16;++i4)
                for (int i5=0; i5<42;++i5)
                    a[33+30*i1+19*i2+7*i3+26*i4+34*i5]=a[20+50*i1+43*i2+45*i3+32*i4];
}