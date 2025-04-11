void func() {
  int a[1000000];
  for (int i1=0; i1<41;++i1)
    for (int i2=0; i2<9;++i2)
        for (int i3=0; i3<13;++i3)
            for (int i4=0; i4<39;++i4)
                for (int i5=0; i5<6;++i5)
                    a[3+2*i5]=a[12+17*i3+37*i4+4*i5];
}