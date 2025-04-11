void func() {
  int a[1000000];
  for (int i1=0; i1<26;++i1)
    for (int i2=0; i2<22;++i2)
        for (int i3=0; i3<10;++i3)
            for (int i4=0; i4<41;++i4)
                for (int i5=0; i5<22;++i5)
                    a[19+26*i1+27*i3+24*i5]=a[7+12*i1];
}