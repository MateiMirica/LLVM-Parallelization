void func() {
  int a[1000000];
  for (int i1=0; i1<44;++i1)
    for (int i2=0; i2<15;++i2)
        for (int i3=0; i3<48;++i3)
            for (int i4=0; i4<14;++i4)
                for (int i5=0; i5<38;++i5)
                    a[19+41*i2+31*i3+40*i4]=a[10+4*i2+3*i3];
}