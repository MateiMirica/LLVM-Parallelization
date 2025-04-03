void func() {
  int a[1000000];
  for (int i1=0; i1<15;++i1)
    for (int i2=0; i2<22;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<23;++i5)
                    a[9+8*i3+12*i4]=a[47+19*i1+47*i2+23*i3+25*i4+1*i5];
}