void func() {
  int a[1000000];
  for (int i1=0; i1<50;++i1)
    for (int i2=0; i2<28;++i2)
        for (int i3=0; i3<21;++i3)
            for (int i4=0; i4<36;++i4)
                for (int i5=0; i5<32;++i5)
                    a[42+48*i1+46*i2+29*i3+50*i4+46*i5]=a[8+31*i1+6*i2];
}