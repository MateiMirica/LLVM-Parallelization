void func() {
  int a[1000000];
  for (int i1=0; i1<42;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<17;++i3)
            for (int i4=0; i4<27;++i4)
                for (int i5=0; i5<44;++i5)
                    a[33+36*i1+14*i2+23*i3+40*i4+14*i5]=a[5+22*i3+24*i4];
}