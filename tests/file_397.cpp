void func() {
  int a[1000000];
  for (int i1=0; i1<41;++i1)
    for (int i2=0; i2<41;++i2)
        for (int i3=0; i3<28;++i3)
            for (int i4=0; i4<50;++i4)
                for (int i5=0; i5<34;++i5)
                    a[2+8*i1+48*i2+4*i3+24*i4+42*i5]=a[7+11*i2];
}