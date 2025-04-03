void func() {
  int a[1000000];
  for (int i1=0; i1<8;++i1)
    for (int i2=0; i2<42;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<10;++i4)
                for (int i5=0; i5<21;++i5)
                    a[7+40*i3+27*i4+1*i5]=a[3+10*i3+12*i4];
}