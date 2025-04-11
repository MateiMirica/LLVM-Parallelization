void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<41;++i2)
        for (int i3=0; i3<15;++i3)
            for (int i4=0; i4<22;++i4)
                for (int i5=0; i5<15;++i5)
                    a[18+16*i2+26*i3]=a[20+26*i2+50*i3+9*i4+43*i5];
}