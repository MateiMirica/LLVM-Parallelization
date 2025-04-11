void func() {
  int a[1000000];
  for (int i1=0; i1<28;++i1)
    for (int i2=0; i2<10;++i2)
        for (int i3=0; i3<36;++i3)
            for (int i4=0; i4<8;++i4)
                for (int i5=0; i5<21;++i5)
                    a[41+12*i2+29*i4]=a[48+23*i2+45*i4+21*i5];
}