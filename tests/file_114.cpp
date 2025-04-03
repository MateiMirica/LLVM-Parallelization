void func() {
  int a[1000000];
  for (int i1=0; i1<10;++i1)
    for (int i2=0; i2<15;++i2)
        for (int i3=0; i3<14;++i3)
            for (int i4=0; i4<43;++i4)
                for (int i5=0; i5<34;++i5)
                    a[45+47*i4]=a[19+50*i3+32*i4+30*i5];
}