void func() {
  int a[1000000];
  for (int i1=0; i1<13;++i1)
    for (int i2=0; i2<13;++i2)
        for (int i3=0; i3<23;++i3)
            for (int i4=0; i4<48;++i4)
                for (int i5=0; i5<9;++i5)
                    a[28+46*i1+7*i2+20*i4]=a[29+42*i1+25*i2+12*i3+20*i4+14*i5];
}