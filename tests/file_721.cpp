void func() {
  int a[1000000];
  for (int i1=0; i1<35;++i1)
    for (int i2=0; i2<14;++i2)
        for (int i3=0; i3<14;++i3)
            for (int i4=0; i4<39;++i4)
                for (int i5=0; i5<35;++i5)
                    a[45+5*i2+38*i3+34*i5]=a[24+50*i1+13*i2+36*i3+4*i4];
}