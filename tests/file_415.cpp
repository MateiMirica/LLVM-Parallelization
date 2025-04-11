void func() {
  int a[1000000];
  for (int i1=0; i1<9;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<46;++i3)
            for (int i4=0; i4<8;++i4)
                for (int i5=0; i5<48;++i5)
                    a[24+9*i1+49*i2+2*i4]=a[47+27*i1+15*i2+12*i4];
}