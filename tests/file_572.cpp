void func() {
  int a[1000000];
  for (int i1=0; i1<21;++i1)
    for (int i2=0; i2<11;++i2)
        for (int i3=0; i3<17;++i3)
            for (int i4=0; i4<30;++i4)
                for (int i5=0; i5<40;++i5)
                    a[23+50*i1+43*i2+14*i3+47*i4+43*i5]=a[2+18*i1+48*i2+14*i3+27*i4];
}