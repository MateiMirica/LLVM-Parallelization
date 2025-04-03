void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<30;++i2)
        for (int i3=0; i3<29;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<24;++i5)
                    a[22+14*i1+33*i2+36*i3+27*i4+37*i5]=a[7+33*i2+32*i3+22*i4];
}