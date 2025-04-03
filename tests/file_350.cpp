void func() {
  int a[1000000];
  for (int i1=0; i1<19;++i1)
    for (int i2=0; i2<41;++i2)
        for (int i3=0; i3<11;++i3)
            for (int i4=0; i4<30;++i4)
                for (int i5=0; i5<25;++i5)
                    a[48+14*i1+49*i2+45*i3+3*i4+30*i5]=a[16+23*i2+1*i3+2*i4];
}