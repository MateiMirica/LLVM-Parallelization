void func() {
  int a[1000000];
  for (int i1=0; i1<5;++i1)
    for (int i2=0; i2<39;++i2)
        for (int i3=0; i3<47;++i3)
            for (int i4=0; i4<25;++i4)
                for (int i5=0; i5<9;++i5)
                    a[43+8*i1+13*i2+48*i3+25*i4+32*i5]=a[24+14*i1+35*i2+40*i3+37*i4+26*i5];
}