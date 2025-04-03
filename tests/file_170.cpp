void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<10;++i2)
        for (int i3=0; i3<28;++i3)
            for (int i4=0; i4<14;++i4)
                for (int i5=0; i5<22;++i5)
                    a[5+44*i2+10*i3+34*i4+48*i5]=a[36+38*i1+32*i2+26*i3+16*i4+30*i5];
}