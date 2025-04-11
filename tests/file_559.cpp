void func() {
  int a[1000000];
  for (int i1=0; i1<6;++i1)
    for (int i2=0; i2<20;++i2)
        for (int i3=0; i3<35;++i3)
            for (int i4=0; i4<20;++i4)
                for (int i5=0; i5<39;++i5)
                    a[34+27*i1+45*i2+17*i4+18*i5]=a[31+45*i1+21*i2+38*i3+17*i4+44*i5];
}