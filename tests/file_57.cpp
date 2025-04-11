void func() {
  int a[1000000];
  for (int i1=0; i1<44;++i1)
    for (int i2=0; i2<19;++i2)
        for (int i3=0; i3<24;++i3)
            for (int i4=0; i4<29;++i4)
                for (int i5=0; i5<42;++i5)
                    a[10+4*i1+33*i3+17*i4+46*i5]=a[49+42*i1+22*i2+7*i3+15*i4];
}