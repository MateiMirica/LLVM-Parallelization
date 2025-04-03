void func() {
  int a[1000000];
  for (int i1=0; i1<44;++i1)
    for (int i2=0; i2<28;++i2)
        for (int i3=0; i3<44;++i3)
            for (int i4=0; i4<24;++i4)
                for (int i5=0; i5<13;++i5)
                    a[16+40*i2+16*i3+46*i4]=a[37+36*i1+36*i2+10*i5];
}