void func() {
  int a[1000000];
  for (int i1=0; i1<22;++i1)
    for (int i2=0; i2<19;++i2)
        for (int i3=0; i3<22;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<23;++i5)
                    a[4+16*i1]=a[40+33*i1+9*i2+26*i3+41*i4+46*i5];
}