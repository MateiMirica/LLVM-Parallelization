void func() {
  int a[1000000];
  for (int i1=0; i1<40;++i1)
    for (int i2=0; i2<17;++i2)
        for (int i3=0; i3<22;++i3)
            for (int i4=0; i4<45;++i4)
                for (int i5=0; i5<37;++i5)
                    a[43+33*i1+41*i2+42*i3+48*i4]=a[18+16*i2+43*i3+6*i4];
}