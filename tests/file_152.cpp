void func() {
  int a[1000000];
  for (int i1=0; i1<14;++i1)
    for (int i2=0; i2<46;++i2)
        for (int i3=0; i3<22;++i3)
            for (int i4=0; i4<42;++i4)
                for (int i5=0; i5<41;++i5)
                    a[19+8*i1+10*i3]=a[39+42*i1+48*i2+41*i3+41*i4+26*i5];
}