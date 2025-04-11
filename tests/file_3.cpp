void func() {
  int a[1000000];
  for (int i1=0; i1<8;++i1)
    for (int i2=0; i2<12;++i2)
        for (int i3=0; i3<31;++i3)
            for (int i4=0; i4<22;++i4)
                for (int i5=0; i5<39;++i5)
                    a[33+50*i1+38*i3+41*i4+30*i5]=a[4+12*i1+50*i2+12*i3+5*i4+44*i5];
}