void func() {
  int a[1000000];
  for (int i1=0; i1<19;++i1)
    for (int i2=0; i2<36;++i2)
        for (int i3=0; i3<33;++i3)
            for (int i4=0; i4<26;++i4)
                for (int i5=0; i5<5;++i5)
                    a[37+15*i1+46*i2+37*i3+23*i5]=a[8+5*i1+29*i2+27*i3+6*i5];
}