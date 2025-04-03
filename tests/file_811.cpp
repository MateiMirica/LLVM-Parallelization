void func() {
  int a[1000000];
  for (int i1=0; i1<29;++i1)
    for (int i2=0; i2<33;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<32;++i4)
                for (int i5=0; i5<48;++i5)
                    a[46+31*i1+37*i2+49*i4+12*i5]=a[36+10*i1+16*i2+21*i3+19*i4+36*i5];
}