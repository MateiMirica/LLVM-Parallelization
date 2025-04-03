void func() {
  int a[1000000];
  for (int i1=0; i1<43;++i1)
    for (int i2=0; i2<9;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<13;++i4)
                for (int i5=0; i5<8;++i5)
                    a[43+7*i1+44*i2+42*i3+27*i4+28*i5]=a[9];
}