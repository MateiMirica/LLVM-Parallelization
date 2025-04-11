void func() {
  int a[1000000];
  for (int i1=0; i1<29;++i1)
    for (int i2=0; i2<27;++i2)
        for (int i3=0; i3<23;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<11;++i5)
                    a[37+45*i1+2*i2+16*i4+15*i5]=a[15+2*i2+3*i4];
}