void func() {
  int a[1000000];
  for (int i1=0; i1<20;++i1)
    for (int i2=0; i2<42;++i2)
        for (int i3=0; i3<22;++i3)
            for (int i4=0; i4<25;++i4)
                for (int i5=0; i5<41;++i5)
                    a[1+2*i1+8*i3+48*i4+38*i5]=a[20+44*i1+20*i4+32*i5];
}