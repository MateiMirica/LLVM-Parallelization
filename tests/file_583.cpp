void func() {
  int a[1000000];
  for (int i1=0; i1<19;++i1)
    for (int i2=0; i2<24;++i2)
        for (int i3=0; i3<49;++i3)
            for (int i4=0; i4<48;++i4)
                for (int i5=0; i5<43;++i5)
                    a[48+35*i2+48*i3+44*i4+31*i5]=a[44+43*i4];
}