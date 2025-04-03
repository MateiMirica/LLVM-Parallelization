void func() {
  int a[1000000];
  for (int i1=0; i1<14;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<43;++i3)
            for (int i4=0; i4<36;++i4)
                for (int i5=0; i5<50;++i5)
                    a[5+19*i1+37*i2+26*i3+26*i4+6*i5]=a[43+43*i1+19*i2+8*i3+32*i4];
}