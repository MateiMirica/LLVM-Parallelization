void func() {
  int a[1000000];
  for (int i1=0; i1<16;++i1)
    for (int i2=0; i2<10;++i2)
        for (int i3=0; i3<41;++i3)
            for (int i4=0; i4<23;++i4)
                for (int i5=0; i5<33;++i5)
                    a[3+15*i1+37*i3+17*i4]=a[22+8*i3];
}