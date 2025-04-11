void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<10;++i2)
        for (int i3=0; i3<5;++i3)
            for (int i4=0; i4<34;++i4)
                for (int i5=0; i5<38;++i5)
                    a[50+30*i2]=a[14+11*i2+4*i3+34*i5];
}