void func() {
  int a[1000000];
  for (int i1=0; i1<36;++i1)
    for (int i2=0; i2<50;++i2)
        for (int i3=0; i3<50;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<24;++i5)
                    a[33+10*i1+15*i2+12*i3+50*i4+20*i5]=a[35+1*i4];
}