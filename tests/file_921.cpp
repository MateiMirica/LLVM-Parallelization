void func() {
  int a[1000000];
  for (int i1=0; i1<23;++i1)
    for (int i2=0; i2<9;++i2)
        for (int i3=0; i3<13;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<14;++i5)
                    a[22+25*i1+1*i3]=a[37+50*i1+26*i2+44*i3+17*i4+40*i5];
}