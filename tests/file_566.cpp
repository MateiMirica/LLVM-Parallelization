void func() {
  int a[1000000];
  for (int i1=0; i1<5;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<46;++i3)
            for (int i4=0; i4<22;++i4)
                for (int i5=0; i5<33;++i5)
                    a[2+41*i1+19*i2+35*i3+46*i4+16*i5]=a[27+49*i1+33*i2+29*i3+16*i4+12*i5];
}