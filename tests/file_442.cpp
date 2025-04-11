void func() {
  int a[1000000];
  for (int i1=0; i1<35;++i1)
    for (int i2=0; i2<12;++i2)
        for (int i3=0; i3<7;++i3)
            for (int i4=0; i4<36;++i4)
                for (int i5=0; i5<18;++i5)
                    a[38+36*i1+11*i3+40*i4+22*i5]=a[49+26*i1+8*i2+43*i3];
}