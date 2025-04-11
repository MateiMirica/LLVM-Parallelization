void func() {
  int a[1000000];
  for (int i1=0; i1<49;++i1)
    for (int i2=0; i2<37;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<27;++i4)
                for (int i5=0; i5<41;++i5)
                    a[14+27*i2+3*i3+38*i4+35*i5]=a[27+9*i4];
}