void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<31;++i2)
        for (int i3=0; i3<31;++i3)
            for (int i4=0; i4<46;++i4)
                for (int i5=0; i5<33;++i5)
                    a[18+41*i1+40*i2+19*i3+14*i4+36*i5]=a[17+43*i1+40*i2+31*i3+48*i4+32*i5];
}