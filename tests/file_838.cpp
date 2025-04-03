void func() {
  int a[1000000];
  for (int i1=0; i1<23;++i1)
    for (int i2=0; i2<38;++i2)
        for (int i3=0; i3<37;++i3)
            for (int i4=0; i4<44;++i4)
                for (int i5=0; i5<29;++i5)
                    a[13+18*i1+45*i2+41*i3+49*i4+31*i5]=a[23+27*i2+16*i3];
}