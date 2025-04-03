void func() {
  int a[1000000];
  for (int i1=0; i1<47;++i1)
    for (int i2=0; i2<49;++i2)
        for (int i3=0; i3<21;++i3)
            for (int i4=0; i4<33;++i4)
                for (int i5=0; i5<6;++i5)
                    a[22+6*i2+33*i3+6*i4]=a[24+16*i1+25*i2+47*i3+28*i4+43*i5];
}