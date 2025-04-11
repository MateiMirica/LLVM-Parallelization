void func() {
  int a[1000000];
  for (int i1=0; i1<39;++i1)
    for (int i2=0; i2<35;++i2)
        for (int i3=0; i3<28;++i3)
            for (int i4=0; i4<19;++i4)
                for (int i5=0; i5<21;++i5)
                    a[26+36*i2+44*i3+35*i4+6*i5]=a[7+42*i1+19*i4+24*i5];
}