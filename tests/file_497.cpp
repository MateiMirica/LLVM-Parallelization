void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<10;++i2)
        for (int i3=0; i3<43;++i3)
            for (int i4=0; i4<48;++i4)
                for (int i5=0; i5<44;++i5)
                    a[21+14*i1+38*i4+30*i5]=a[48+6*i1+20*i4+2*i5];
}