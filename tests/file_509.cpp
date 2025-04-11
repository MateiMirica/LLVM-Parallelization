void func() {
  int a[1000000];
  for (int i1=0; i1<12;++i1)
    for (int i2=0; i2<48;++i2)
        for (int i3=0; i3<5;++i3)
            for (int i4=0; i4<15;++i4)
                for (int i5=0; i5<22;++i5)
                    a[13+19*i1+29*i3+50*i4+10*i5]=a[18+41*i1+30*i2+39*i3+14*i4+46*i5];
}