void func() {
  int a[1000000];
  for (int i1=0; i1<17;++i1)
    for (int i2=0; i2<37;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<11;++i4)
                for (int i5=0; i5<49;++i5)
                    a[30+22*i1+38*i4+38*i5]=a[20+7*i1+38*i4];
}