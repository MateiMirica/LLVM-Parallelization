void func() {
  int a[1000000];
  for (int i1=0; i1<15;++i1)
    for (int i2=0; i2<9;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<33;++i4)
                for (int i5=0; i5<10;++i5)
                    a[26+33*i2+28*i3+12*i4]=a[7+8*i1+6*i2+4*i3+12*i4];
}