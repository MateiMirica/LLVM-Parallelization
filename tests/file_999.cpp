void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<20;++i3)
            for (int i4=0; i4<6;++i4)
                for (int i5=0; i5<23;++i5)
                    a[16+3*i1+17*i2+43*i3+11*i4+39*i5]=a[26+32*i2+22*i3+2*i4];
}