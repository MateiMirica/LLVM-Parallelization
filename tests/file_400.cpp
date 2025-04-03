void func() {
  int a[1000000];
  for (int i1=0; i1<48;++i1)
    for (int i2=0; i2<23;++i2)
        for (int i3=0; i3<46;++i3)
            for (int i4=0; i4<24;++i4)
                for (int i5=0; i5<42;++i5)
                    a[30+28*i1+25*i2+34*i3+26*i5]=a[5+31*i2+18*i3+32*i4+18*i5];
}