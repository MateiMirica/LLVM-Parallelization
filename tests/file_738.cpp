void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<47;++i2)
        for (int i3=0; i3<50;++i3)
            for (int i4=0; i4<10;++i4)
                for (int i5=0; i5<21;++i5)
                    a[46+7*i2+50*i3+29*i4]=a[29+21*i2+6*i3+47*i4+28*i5];
}