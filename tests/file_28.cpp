void func() {
  int a[1000000];
  for (int i1=0; i1<33;++i1)
    for (int i2=0; i2<5;++i2)
        for (int i3=0; i3<35;++i3)
            for (int i4=0; i4<5;++i4)
                for (int i5=0; i5<6;++i5)
                    a[49+5*i4+38*i5]=a[41+45*i1+45*i2+8*i4+41*i5];
}