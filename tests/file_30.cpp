void func() {
  int a[1000000];
  for (int i1=0; i1<45;++i1)
    for (int i2=0; i2<13;++i2)
        for (int i3=0; i3<39;++i3)
            for (int i4=0; i4<43;++i4)
                for (int i5=0; i5<13;++i5)
                    a[21+23*i2+4*i3+26*i5]=a[24+25*i2+20*i3+20*i4];
}