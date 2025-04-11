void func() {
  int a[1000000];
  for (int i1=0; i1<43;++i1)
    for (int i2=0; i2<19;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<29;++i4)
                for (int i5=0; i5<46;++i5)
                    a[28+12*i1+20*i2+27*i3+46*i4+46*i5]=a[49+10*i1+30*i2+19*i3+12*i4+16*i5];
}