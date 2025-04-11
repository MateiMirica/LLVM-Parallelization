void func() {
  int a[1000000];
  for (int i1=0; i1<17;++i1)
    for (int i2=0; i2<10;++i2)
        for (int i3=0; i3<9;++i3)
            for (int i4=0; i4<30;++i4)
                for (int i5=0; i5<13;++i5)
                    a[23+12*i1+46*i2+34*i3+1*i4+10*i5]=a[22+46*i2+17*i3];
}