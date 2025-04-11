void func() {
  int a[1000000];
  for (int i1=0; i1<23;++i1)
    for (int i2=0; i2<34;++i2)
        for (int i3=0; i3<10;++i3)
            for (int i4=0; i4<16;++i4)
                for (int i5=0; i5<21;++i5)
                    a[36+30*i2+19*i3]=a[37+15*i1+34*i2+33*i3+47*i4+33*i5];
}