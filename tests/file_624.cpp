void func() {
  int a[1000000];
  for (int i1=0; i1<22;++i1)
    for (int i2=0; i2<8;++i2)
        for (int i3=0; i3<35;++i3)
            for (int i4=0; i4<14;++i4)
                for (int i5=0; i5<41;++i5)
                    a[7+40*i1+50*i2+4*i4]=a[42+16*i2+6*i3+18*i4+4*i5];
}