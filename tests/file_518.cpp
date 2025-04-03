void func() {
  int a[1000000];
  for (int i1=0; i1<36;++i1)
    for (int i2=0; i2<35;++i2)
        for (int i3=0; i3<36;++i3)
            for (int i4=0; i4<36;++i4)
                for (int i5=0; i5<22;++i5)
                    a[3+8*i2+17*i4]=a[2+40*i2+49*i3+27*i4+44*i5];
}