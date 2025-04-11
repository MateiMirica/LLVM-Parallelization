void func() {
  int a[1000000];
  for (int i1=0; i1<21;++i1)
    for (int i2=0; i2<8;++i2)
        for (int i3=0; i3<34;++i3)
            for (int i4=0; i4<41;++i4)
                for (int i5=0; i5<24;++i5)
                    a[45+26*i2+34*i3+1*i4+20*i5]=a[50+28*i1+16*i2+26*i3+11*i4+32*i5];
}