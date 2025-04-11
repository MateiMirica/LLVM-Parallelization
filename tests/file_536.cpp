void func() {
  int a[1000000];
  for (int i1=0; i1<18;++i1)
    for (int i2=0; i2<41;++i2)
        for (int i3=0; i3<45;++i3)
            for (int i4=0; i4<48;++i4)
                for (int i5=0; i5<47;++i5)
                    a[32+36*i1+20*i3+23*i4+15*i5]=a[17+21*i1];
}