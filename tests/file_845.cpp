void func() {
  int a[1000000];
  for (int i1=0; i1<9;++i1)
    for (int i2=0; i2<17;++i2)
        for (int i3=0; i3<21;++i3)
            for (int i4=0; i4<14;++i4)
                for (int i5=0; i5<17;++i5)
                    a[45+50*i1+12*i2+34*i3+38*i4+9*i5]=a[24+22*i1+8*i2];
}