void func() {
  int a[1000000];
  for (int i1=0; i1<13;++i1)
    for (int i2=0; i2<48;++i2)
        for (int i3=0; i3<37;++i3)
            for (int i4=0; i4<18;++i4)
                for (int i5=0; i5<5;++i5)
                    a[45+41*i1+28*i2+49*i3+50*i4+47*i5]=a[34+41*i1+7*i2+13*i3+23*i5];
}