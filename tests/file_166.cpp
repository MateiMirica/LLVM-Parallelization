void func() {
  int a[1000000];
  for (int i1=0; i1<24;++i1)
    for (int i2=0; i2<10;++i2)
        for (int i3=0; i3<11;++i3)
            for (int i4=0; i4<41;++i4)
                for (int i5=0; i5<35;++i5)
                    a[31+42*i1+36*i2+37*i3+14*i4+43*i5]=a[37+9*i1+22*i2+15*i3];
}