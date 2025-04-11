void func() {
  int a[1000000];
  for (int i1=0; i1<33;++i1)
    for (int i2=0; i2<38;++i2)
        for (int i3=0; i3<33;++i3)
            for (int i4=0; i4<10;++i4)
                for (int i5=0; i5<30;++i5)
                    a[28+40*i1+34*i2+24*i3+18*i4+31*i5]=a[3+19*i1+18*i3+14*i4];
}