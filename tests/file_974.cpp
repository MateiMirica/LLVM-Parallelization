void func() {
  int a[1000000];
  for (int i1=0; i1<12;++i1)
    for (int i2=0; i2<35;++i2)
        for (int i3=0; i3<13;++i3)
            for (int i4=0; i4<43;++i4)
                for (int i5=0; i5<29;++i5)
                    a[44+24*i2+32*i3+34*i5]=a[7+36*i1+38*i3+2*i4+44*i5];
}