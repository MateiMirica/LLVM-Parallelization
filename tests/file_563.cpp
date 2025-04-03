void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<37;++i2)
        for (int i3=0; i3<19;++i3)
            for (int i4=0; i4<31;++i4)
                for (int i5=0; i5<48;++i5)
                    a[43+12*i1+10*i3+16*i5]=a[16+40*i2+6*i5];
}