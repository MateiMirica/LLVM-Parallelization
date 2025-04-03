void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<18;++i2)
        for (int i3=0; i3<7;++i3)
            for (int i4=0; i4<29;++i4)
                for (int i5=0; i5<21;++i5)
                    a[28+35*i1+22*i2+28*i3+40*i4+39*i5]=a[22+25*i1+3*i2+26*i3+10*i4];
}