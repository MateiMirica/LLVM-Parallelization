void func() {
  int a[1000000];
  for (int i1=0; i1<6;++i1)
    for (int i2=0; i2<34;++i2)
        for (int i3=0; i3<5;++i3)
            for (int i4=0; i4<41;++i4)
                for (int i5=0; i5<50;++i5)
                    a[32+43*i1+45*i2+38*i3+21*i5]=a[28+11*i3];
}