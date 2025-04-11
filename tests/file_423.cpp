void func() {
  int a[1000000];
  for (int i1=0; i1<46;++i1)
    for (int i2=0; i2<19;++i2)
        for (int i3=0; i3<5;++i3)
            for (int i4=0; i4<44;++i4)
                for (int i5=0; i5<37;++i5)
                    a[44+50*i1+14*i2+33*i3+28*i4+9*i5]=a[11+30*i1+12*i3];
}