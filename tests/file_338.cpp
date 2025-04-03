void func() {
  int a[1000000];
  for (int i1=0; i1<5;++i1)
    for (int i2=0; i2<38;++i2)
        for (int i3=0; i3<16;++i3)
            for (int i4=0; i4<36;++i4)
                for (int i5=0; i5<23;++i5)
                    a[17+23*i2+13*i3]=a[36+34*i1+43*i2+47*i3+29*i5];
}