void func() {
  int a[1000000];
  for (int i1=0; i1<39;++i1)
    for (int i2=0; i2<10;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<34;++i4)
                for (int i5=0; i5<44;++i5)
                    a[28+4*i1+45*i2+16*i3+28*i4+26*i5]=a[49+34*i1+19*i2+38*i3+16*i4+38*i5];
}