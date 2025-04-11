void func() {
  int a[1000000];
  for (int i1=0; i1<41;++i1)
    for (int i2=0; i2<18;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<35;++i4)
                for (int i5=0; i5<39;++i5)
                    a[1+45*i1+38*i2+33*i3+46*i4+19*i5]=a[36+21*i3+15*i4];
}