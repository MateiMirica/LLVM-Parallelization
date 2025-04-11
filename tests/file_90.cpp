void func() {
  int a[1000000];
  for (int i1=0; i1<14;++i1)
    for (int i2=0; i2<13;++i2)
        for (int i3=0; i3<32;++i3)
            for (int i4=0; i4<33;++i4)
                for (int i5=0; i5<21;++i5)
                    a[6+31*i1+29*i2+40*i4+42*i5]=a[49+43*i1+13*i2+6*i3];
}