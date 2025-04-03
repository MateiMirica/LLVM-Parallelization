void func() {
  int a[1000000];
  for (int i1=0; i1<48;++i1)
    for (int i2=0; i2<41;++i2)
        for (int i3=0; i3<41;++i3)
            for (int i4=0; i4<34;++i4)
                for (int i5=0; i5<50;++i5)
                    a[36+26*i1+28*i2+40*i3+8*i4+13*i5]=a[4+20*i2+26*i3];
}