void func() {
  int a[1000000];
  for (int i1=0; i1<25;++i1)
    for (int i2=0; i2<22;++i2)
        for (int i3=0; i3<26;++i3)
            for (int i4=0; i4<19;++i4)
                for (int i5=0; i5<49;++i5)
                    a[34+10*i1+46*i2+41*i3+45*i4+17*i5]=a[3+6*i2+35*i3];
}