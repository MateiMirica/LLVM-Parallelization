void func() {
  int a[1000000];
  for (int i1=0; i1<31;++i1)
    for (int i2=0; i2<11;++i2)
        for (int i3=0; i3<16;++i3)
            for (int i4=0; i4<16;++i4)
                for (int i5=0; i5<5;++i5)
                    a[8+22*i1+36*i2+29*i3+24*i4+31*i5]=a[27+36*i2+8*i3];
}