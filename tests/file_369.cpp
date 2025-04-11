void func() {
  int a[1000000];
  for (int i1=0; i1<23;++i1)
    for (int i2=0; i2<50;++i2)
        for (int i3=0; i3<18;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<10;++i5)
                    a[37+40*i2]=a[14+18*i1+49*i2+38*i5];
}