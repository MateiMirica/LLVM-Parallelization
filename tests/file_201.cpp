void func() {
  int a[1000000];
  for (int i1=0; i1<29;++i1)
    for (int i2=0; i2<49;++i2)
        for (int i3=0; i3<46;++i3)
            for (int i4=0; i4<30;++i4)
                for (int i5=0; i5<19;++i5)
                    a[46+40*i1+6*i2+6*i3+33*i4+14*i5]=a[23+20*i1+22*i2+12*i3+11*i4+22*i5];
}