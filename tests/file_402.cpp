void func() {
  int a[1000000];
  for (int i1=0; i1<50;++i1)
    for (int i2=0; i2<9;++i2)
        for (int i3=0; i3<17;++i3)
            for (int i4=0; i4<47;++i4)
                for (int i5=0; i5<50;++i5)
                    a[40+36*i1+12*i5]=a[31+16*i1+40*i2+30*i4+16*i5];
}