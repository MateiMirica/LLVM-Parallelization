void func() {
  int a[1000000];
  for (int i1=0; i1<48;++i1)
    for (int i2=0; i2<22;++i2)
        for (int i3=0; i3<42;++i3)
            for (int i4=0; i4<12;++i4)
                for (int i5=0; i5<7;++i5)
                    a[26+5*i2+46*i4]=a[47+45*i2+26*i3+50*i4+14*i5];
}