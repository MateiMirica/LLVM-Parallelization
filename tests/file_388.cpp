void func() {
  int a[1000000];
  for (int i1=0; i1<21;++i1)
    for (int i2=0; i2<22;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<50;++i4)
                for (int i5=0; i5<19;++i5)
                    a[48+31*i1+24*i2+42*i3+38*i4+13*i5]=a[20+1*i1+8*i2+12*i3+4*i4];
}