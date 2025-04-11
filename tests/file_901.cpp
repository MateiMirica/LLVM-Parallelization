void func() {
  int a[1000000];
  for (int i1=0; i1<33;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<14;++i4)
                for (int i5=0; i5<38;++i5)
                    a[36+23*i2+16*i3]=a[40+39*i2+31*i3+4*i5];
}