void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<45;++i2)
        for (int i3=0; i3<16;++i3)
            for (int i4=0; i4<45;++i4)
                for (int i5=0; i5<39;++i5)
                    a[49+9*i1+6*i2+34*i3+18*i5]=a[32+22*i3+12*i4+33*i5];
}