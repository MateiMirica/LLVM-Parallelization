void func() {
  int a[1000000];
  for (int i1=0; i1<49;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<47;++i3)
            for (int i4=0; i4<23;++i4)
                for (int i5=0; i5<11;++i5)
                    a[19+49*i1+3*i2+14*i3+33*i4]=a[16+37*i1+3*i2+14*i3];
}