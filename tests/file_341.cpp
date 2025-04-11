void func() {
  int a[1000000];
  for (int i1=0; i1<50;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<20;++i3)
            for (int i4=0; i4<23;++i4)
                for (int i5=0; i5<20;++i5)
                    a[31+27*i1+27*i2+21*i3+43*i4+31*i5]=a[43+21*i3+23*i4];
}