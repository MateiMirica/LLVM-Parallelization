void func() {
  int a[1000000];
  for (int i1=0; i1<21;++i1)
    for (int i2=0; i2<44;++i2)
        for (int i3=0; i3<35;++i3)
            for (int i4=0; i4<30;++i4)
                for (int i5=0; i5<13;++i5)
                    a[17+4*i1+6*i4]=a[27+35*i1+35*i2+5*i3+14*i4+46*i5];
}