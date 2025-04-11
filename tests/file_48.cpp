void func() {
  int a[1000000];
  for (int i1=0; i1<50;++i1)
    for (int i2=0; i2<50;++i2)
        for (int i3=0; i3<43;++i3)
            for (int i4=0; i4<33;++i4)
                for (int i5=0; i5<25;++i5)
                    a[26+22*i1+4*i2+4*i3+10*i4+28*i5]=a[49+46*i2+44*i3+40*i5];
}