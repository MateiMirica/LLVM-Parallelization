void func() {
  int a[1000000];
  for (int i1=0; i1<44;++i1)
    for (int i2=0; i2<17;++i2)
        for (int i3=0; i3<47;++i3)
            for (int i4=0; i4<31;++i4)
                for (int i5=0; i5<10;++i5)
                    a[40+14*i4]=a[39+24*i1+42*i2+27*i3+33*i4+19*i5];
}