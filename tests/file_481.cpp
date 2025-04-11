void func() {
  int a[1000000];
  for (int i1=0; i1<43;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<23;++i3)
            for (int i4=0; i4<45;++i4)
                for (int i5=0; i5<34;++i5)
                    a[50+6*i1+46*i2+6*i3+47*i4+2*i5]=a[23+15*i2];
}