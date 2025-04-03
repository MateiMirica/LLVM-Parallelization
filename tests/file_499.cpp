void func() {
  int a[1000000];
  for (int i1=0; i1<25;++i1)
    for (int i2=0; i2<43;++i2)
        for (int i3=0; i3<42;++i3)
            for (int i4=0; i4<18;++i4)
                for (int i5=0; i5<48;++i5)
                    a[18+43*i1+6*i2+32*i3+6*i4+20*i5]=a[1+35*i1+50*i2+28*i3+30*i4+42*i5];
}