void func() {
  int a[1000000];
  for (int i1=0; i1<19;++i1)
    for (int i2=0; i2<19;++i2)
        for (int i3=0; i3<44;++i3)
            for (int i4=0; i4<31;++i4)
                for (int i5=0; i5<27;++i5)
                    a[22+38*i1+49*i3+22*i4+19*i5]=a[15+3*i1+38*i3];
}