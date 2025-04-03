void func() {
  int a[1000000];
  for (int i1=0; i1<46;++i1)
    for (int i2=0; i2<38;++i2)
        for (int i3=0; i3<19;++i3)
            for (int i4=0; i4<5;++i4)
                for (int i5=0; i5<36;++i5)
                    a[46+38*i1+28*i2+43*i3+14*i5]=a[13+16*i1+6*i2+5*i3+10*i4];
}