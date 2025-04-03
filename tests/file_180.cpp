void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<30;++i2)
        for (int i3=0; i3<23;++i3)
            for (int i4=0; i4<39;++i4)
                for (int i5=0; i5<12;++i5)
                    a[4+25*i2+16*i3+31*i4+2*i5]=a[48+49*i2+26*i3+40*i4+2*i5];
}