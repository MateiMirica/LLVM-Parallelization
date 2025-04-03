void func() {
  int a[1000000];
  for (int i1=0; i1<39;++i1)
    for (int i2=0; i2<38;++i2)
        for (int i3=0; i3<10;++i3)
            for (int i4=0; i4<9;++i4)
                for (int i5=0; i5<13;++i5)
                    a[49+36*i1+14*i2+21*i3+14*i4]=a[48+27*i3+36*i4];
}