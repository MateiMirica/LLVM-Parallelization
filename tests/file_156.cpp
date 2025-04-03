void func() {
  int a[1000000];
  for (int i1=0; i1<10;++i1)
    for (int i2=0; i2<16;++i2)
        for (int i3=0; i3<17;++i3)
            for (int i4=0; i4<45;++i4)
                for (int i5=0; i5<33;++i5)
                    a[40+44*i1+24*i2+11*i3+19*i4]=a[21+2*i2+21*i3+9*i4];
}