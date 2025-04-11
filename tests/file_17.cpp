void func() {
  int a[1000000];
  for (int i1=0; i1<33;++i1)
    for (int i2=0; i2<50;++i2)
        for (int i3=0; i3<26;++i3)
            for (int i4=0; i4<11;++i4)
                for (int i5=0; i5<45;++i5)
                    a[34+28*i1+14*i2+4*i3]=a[48+29*i1+22*i2+26*i3+1*i5];
}