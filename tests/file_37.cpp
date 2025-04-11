void func() {
  int a[1000000];
  for (int i1=0; i1<21;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<39;++i3)
            for (int i4=0; i4<24;++i4)
                for (int i5=0; i5<38;++i5)
                    a[38+9*i1+6*i2+42*i4+38*i5]=a[15+9*i1+26*i2+32*i3+20*i5];
}