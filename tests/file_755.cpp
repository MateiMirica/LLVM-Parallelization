void func() {
  int a[1000000];
  for (int i1=0; i1<14;++i1)
    for (int i2=0; i2<7;++i2)
        for (int i3=0; i3<6;++i3)
            for (int i4=0; i4<29;++i4)
                for (int i5=0; i5<14;++i5)
                    a[28+30*i4]=a[41+44*i1+26*i2+44*i5];
}