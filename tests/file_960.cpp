void func() {
  int a[1000000];
  for (int i1=0; i1<43;++i1)
    for (int i2=0; i2<30;++i2)
        for (int i3=0; i3<35;++i3)
            for (int i4=0; i4<49;++i4)
                for (int i5=0; i5<17;++i5)
                    a[35+4*i2+15*i3+8*i4+46*i5]=a[16+16*i1+24*i2+19*i3+44*i5];
}