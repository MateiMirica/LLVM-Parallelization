void func() {
  int a[1000000];
  for (int i1=0; i1<19;++i1)
    for (int i2=0; i2<38;++i2)
        for (int i3=0; i3<6;++i3)
            for (int i4=0; i4<25;++i4)
                for (int i5=0; i5<12;++i5)
                    a[22+27*i1+33*i2+30*i3+30*i4+25*i5]=a[8+30*i2+23*i4];
}