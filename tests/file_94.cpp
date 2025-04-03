void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<41;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<39;++i4)
                for (int i5=0; i5<6;++i5)
                    a[42+17*i1+9*i5]=a[41+49*i1+34*i2+22*i4+30*i5];
}