void func() {
  int a[1000000];
  for (int i1=0; i1<42;++i1)
    for (int i2=0; i2<22;++i2)
        for (int i3=0; i3<10;++i3)
            for (int i4=0; i4<31;++i4)
                for (int i5=0; i5<48;++i5)
                    a[3+15*i1+27*i3+13*i4]=a[7+47*i1+28*i2+34*i3+48*i4+49*i5];
}