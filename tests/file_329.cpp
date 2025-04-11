void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<35;++i2)
        for (int i3=0; i3<39;++i3)
            for (int i4=0; i4<31;++i4)
                for (int i5=0; i5<25;++i5)
                    a[27+39*i1+24*i2+22*i5]=a[40+17*i1+50*i3+48*i4+48*i5];
}