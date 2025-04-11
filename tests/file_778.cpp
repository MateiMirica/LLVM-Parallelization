void func() {
  int a[1000000];
  for (int i1=0; i1<47;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<5;++i3)
            for (int i4=0; i4<23;++i4)
                for (int i5=0; i5<10;++i5)
                    a[3+19*i3]=a[19+37*i2+42*i3+11*i5];
}