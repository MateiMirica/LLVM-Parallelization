void func() {
  int a[1000000];
  for (int i1=0; i1<42;++i1)
    for (int i2=0; i2<49;++i2)
        for (int i3=0; i3<11;++i3)
            for (int i4=0; i4<17;++i4)
                for (int i5=0; i5<37;++i5)
                    a[42+18*i3+34*i5]=a[39+22*i2+40*i3];
}