void func() {
  int a[1000000];
  for (int i1=0; i1<17;++i1)
    for (int i2=0; i2<39;++i2)
        for (int i3=0; i3<31;++i3)
            for (int i4=0; i4<40;++i4)
                for (int i5=0; i5<19;++i5)
                    a[3+26*i1+31*i2+28*i3+33*i4+50*i5]=a[36+3*i2+21*i4+44*i5];
}