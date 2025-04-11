void func() {
  int a[1000000];
  for (int i1=0; i1<10;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<37;++i3)
            for (int i4=0; i4<34;++i4)
                for (int i5=0; i5<38;++i5)
                    a[14+21*i1+2*i2+35*i3+24*i4]=a[34+38*i1+29*i2+46*i3+28*i4+48*i5];
}