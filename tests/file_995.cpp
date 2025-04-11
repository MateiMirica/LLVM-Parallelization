void func() {
  int a[1000000];
  for (int i1=0; i1<12;++i1)
    for (int i2=0; i2<39;++i2)
        for (int i3=0; i3<48;++i3)
            for (int i4=0; i4<20;++i4)
                for (int i5=0; i5<20;++i5)
                    a[13+46*i1+2*i2+27*i3+34*i4+48*i5]=a[28+34*i1+2*i2+31*i3+50*i4+18*i5];
}