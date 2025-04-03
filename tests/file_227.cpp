void func() {
  int a[1000000];
  for (int i1=0; i1<23;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<37;++i3)
            for (int i4=0; i4<50;++i4)
                for (int i5=0; i5<34;++i5)
                    a[26+21*i1+15*i4]=a[11+28*i1+35*i2+11*i3+50*i4];
}