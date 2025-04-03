void func() {
  int a[1000000];
  for (int i1=0; i1<29;++i1)
    for (int i2=0; i2<14;++i2)
        for (int i3=0; i3<6;++i3)
            for (int i4=0; i4<34;++i4)
                for (int i5=0; i5<19;++i5)
                    a[27+48*i1+8*i2+16*i4+24*i5]=a[46+12*i1+20*i2+4*i3+24*i5];
}