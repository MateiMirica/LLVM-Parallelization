void func() {
  int a[1000000];
  for (int i1=0; i1<43;++i1)
    for (int i2=0; i2<36;++i2)
        for (int i3=0; i3<22;++i3)
            for (int i4=0; i4<15;++i4)
                for (int i5=0; i5<24;++i5)
                    a[35+50*i1+15*i2+50*i4+50*i5]=a[28+9*i2+24*i4+2*i5];
}