void func() {
  int a[1000000];
  for (int i1=0; i1<46;++i1)
    for (int i2=0; i2<6;++i2)
        for (int i3=0; i3<12;++i3)
            for (int i4=0; i4<50;++i4)
                for (int i5=0; i5<23;++i5)
                    a[29+10*i1+28*i2+27*i3+32*i4]=a[40+40*i1+35*i2+30*i3+46*i4+4*i5];
}