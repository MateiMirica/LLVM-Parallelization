void func() {
  int a[1000000];
  for (int i1=0; i1<12;++i1)
    for (int i2=0; i2<49;++i2)
        for (int i3=0; i3<43;++i3)
            for (int i4=0; i4<25;++i4)
                for (int i5=0; i5<29;++i5)
                    a[45+45*i1+47*i2+25*i3+31*i4+36*i5]=a[23+14*i1+11*i2+16*i3];
}