void func() {
  int a[1000000];
  for (int i1=0; i1<30;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<18;++i3)
            for (int i4=0; i4<22;++i4)
                for (int i5=0; i5<29;++i5)
                    a[3+11*i2+21*i3]=a[38+10*i1+39*i2+39*i3+40*i4+8*i5];
}