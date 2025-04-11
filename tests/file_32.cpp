void func() {
  int a[1000000];
  for (int i1=0; i1<41;++i1)
    for (int i2=0; i2<25;++i2)
        for (int i3=0; i3<33;++i3)
            for (int i4=0; i4<39;++i4)
                for (int i5=0; i5<14;++i5)
                    a[21+4*i2+1*i3+36*i5]=a[7+16*i2+34*i3+42*i4+30*i5];
}