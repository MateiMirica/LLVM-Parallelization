void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<16;++i2)
        for (int i3=0; i3<19;++i3)
            for (int i4=0; i4<10;++i4)
                for (int i5=0; i5<19;++i5)
                    a[16+28*i1+27*i2+9*i4]=a[27+18*i1+33*i2+49*i4+4*i5];
}