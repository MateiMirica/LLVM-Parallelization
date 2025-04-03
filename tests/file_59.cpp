void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<8;++i2)
        for (int i3=0; i3<17;++i3)
            for (int i4=0; i4<46;++i4)
                for (int i5=0; i5<6;++i5)
                    a[21+33*i1+47*i2+32*i3+48*i5]=a[13+2*i3+24*i5];
}