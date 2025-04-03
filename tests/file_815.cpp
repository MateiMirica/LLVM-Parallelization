void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<40;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<19;++i4)
                for (int i5=0; i5<33;++i5)
                    a[3+46*i1+32*i2+45*i3+3*i4+10*i5]=a[26+18*i2+33*i3+11*i4];
}