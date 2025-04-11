void func() {
  int a[1000000];
  for (int i1=0; i1<10;++i1)
    for (int i2=0; i2<6;++i2)
        for (int i3=0; i3<22;++i3)
            for (int i4=0; i4<5;++i4)
                for (int i5=0; i5<50;++i5)
                    a[10+7*i1+6*i2+50*i4]=a[15+41*i1+39*i3+44*i4+28*i5];
}