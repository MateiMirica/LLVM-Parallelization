void func() {
  int a[1000000];
  for (int i1=0; i1<5;++i1)
    for (int i2=0; i2<19;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<38;++i4)
                for (int i5=0; i5<30;++i5)
                    a[3+26*i2+50*i3+12*i5]=a[30+2*i1+8*i3+6*i5];
}