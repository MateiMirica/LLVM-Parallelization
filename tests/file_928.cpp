void func() {
  int a[1000000];
  for (int i1=0; i1<20;++i1)
    for (int i2=0; i2<23;++i2)
        for (int i3=0; i3<9;++i3)
            for (int i4=0; i4<47;++i4)
                for (int i5=0; i5<43;++i5)
                    a[47+7*i1+26*i2+14*i3+20*i4+45*i5]=a[42+3*i2];
}