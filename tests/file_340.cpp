void func() {
  int a[1000000];
  for (int i1=0; i1<29;++i1)
    for (int i2=0; i2<11;++i2)
        for (int i3=0; i3<37;++i3)
            for (int i4=0; i4<34;++i4)
                for (int i5=0; i5<40;++i5)
                    a[48+27*i2+36*i3+6*i4]=a[31+35*i3];
}