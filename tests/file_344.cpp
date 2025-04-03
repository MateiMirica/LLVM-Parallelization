void func() {
  int a[1000000];
  for (int i1=0; i1<18;++i1)
    for (int i2=0; i2<9;++i2)
        for (int i3=0; i3<11;++i3)
            for (int i4=0; i4<9;++i4)
                for (int i5=0; i5<47;++i5)
                    a[13+20*i2+48*i3+16*i4+14*i5]=a[44+18*i1+16*i5];
}