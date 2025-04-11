void func() {
  int a[1000000];
  for (int i1=0; i1<25;++i1)
    for (int i2=0; i2<16;++i2)
        for (int i3=0; i3<45;++i3)
            for (int i4=0; i4<29;++i4)
                for (int i5=0; i5<19;++i5)
                    a[11+6*i1+17*i2+31*i3+24*i5]=a[14+2*i1+23*i2+37*i3];
}