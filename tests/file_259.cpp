void func() {
  int a[1000000];
  for (int i1=0; i1<48;++i1)
    for (int i2=0; i2<48;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<34;++i4)
                for (int i5=0; i5<45;++i5)
                    a[8+3*i1+14*i3+20*i4]=a[24+32*i1+33*i3+30*i4];
}