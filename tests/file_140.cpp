void func() {
  int a[1000000];
  for (int i1=0; i1<9;++i1)
    for (int i2=0; i2<7;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<39;++i4)
                for (int i5=0; i5<29;++i5)
                    a[19+35*i2+4*i3+46*i4+8*i5]=a[10+28*i1+37*i2+46*i3+18*i4+40*i5];
}