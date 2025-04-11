void func() {
  int a[1000000];
  for (int i1=0; i1<44;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<24;++i3)
            for (int i4=0; i4<32;++i4)
                for (int i5=0; i5<42;++i5)
                    a[45+36*i1+30*i2+44*i3+36*i4+31*i5]=a[16+31*i1+29*i2+24*i3+9*i4];
}