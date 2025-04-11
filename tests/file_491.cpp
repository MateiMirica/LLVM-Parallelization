void func() {
  int a[1000000];
  for (int i1=0; i1<46;++i1)
    for (int i2=0; i2<13;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<39;++i4)
                for (int i5=0; i5<8;++i5)
                    a[35+27*i1+8*i2+31*i3+39*i4+30*i5]=a[34+21*i1+22*i2+35*i3+27*i4+24*i5];
}