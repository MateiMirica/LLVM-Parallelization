void func() {
  int a[1000000];
  for (int i1=0; i1<10;++i1)
    for (int i2=0; i2<43;++i2)
        for (int i3=0; i3<15;++i3)
            for (int i4=0; i4<16;++i4)
                for (int i5=0; i5<5;++i5)
                    a[39+6*i1+4*i2+13*i3+30*i4]=a[40+38*i1+27*i2+27*i3+47*i4];
}