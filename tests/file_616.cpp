void func() {
  int a[1000000];
  for (int i1=0; i1<34;++i1)
    for (int i2=0; i2<22;++i2)
        for (int i3=0; i3<41;++i3)
            for (int i4=0; i4<34;++i4)
                for (int i5=0; i5<42;++i5)
                    a[16+15*i1+31*i2+50*i4+18*i5]=a[21+5*i1+19*i2+14*i3+38*i5];
}