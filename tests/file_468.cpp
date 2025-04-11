void func() {
  int a[1000000];
  for (int i1=0; i1<6;++i1)
    for (int i2=0; i2<44;++i2)
        for (int i3=0; i3<32;++i3)
            for (int i4=0; i4<48;++i4)
                for (int i5=0; i5<29;++i5)
                    a[8+49*i1+10*i4+12*i5]=a[47+33*i1+32*i2+26*i3+28*i4+24*i5];
}