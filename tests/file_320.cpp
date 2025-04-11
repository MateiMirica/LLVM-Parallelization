void func() {
  int a[1000000];
  for (int i1=0; i1<33;++i1)
    for (int i2=0; i2<8;++i2)
        for (int i3=0; i3<9;++i3)
            for (int i4=0; i4<12;++i4)
                for (int i5=0; i5<18;++i5)
                    a[19+6*i1+43*i2+16*i3+1*i4+8*i5]=a[6+33*i2+9*i4];
}