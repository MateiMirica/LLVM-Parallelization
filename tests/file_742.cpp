void func() {
  int a[1000000];
  for (int i1=0; i1<25;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<44;++i4)
                for (int i5=0; i5<19;++i5)
                    a[33+20*i4+10*i5]=a[36+50*i1+6*i2+18*i3+4*i5];
}