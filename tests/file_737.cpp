void func() {
  int a[1000000];
  for (int i1=0; i1<19;++i1)
    for (int i2=0; i2<42;++i2)
        for (int i3=0; i3<11;++i3)
            for (int i4=0; i4<33;++i4)
                for (int i5=0; i5<41;++i5)
                    a[30+25*i1+21*i2+1*i3+31*i4]=a[43+42*i1+37*i2+31*i3+41*i4+22*i5];
}