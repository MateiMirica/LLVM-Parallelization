void func() {
  int a[1000000];
  for (int i1=0; i1<27;++i1)
    for (int i2=0; i2<20;++i2)
        for (int i3=0; i3<28;++i3)
            for (int i4=0; i4<17;++i4)
                for (int i5=0; i5<48;++i5)
                    a[1+38*i1+45*i2+48*i3+22*i4+45*i5]=a[28+8*i1+10*i4];
}