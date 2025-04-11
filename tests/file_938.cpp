void func() {
  int a[1000000];
  for (int i1=0; i1<35;++i1)
    for (int i2=0; i2<48;++i2)
        for (int i3=0; i3<43;++i3)
            for (int i4=0; i4<32;++i4)
                for (int i5=0; i5<46;++i5)
                    a[38+46*i1+14*i2+19*i3+14*i4+1*i5]=a[8+12*i1+13*i2+9*i4];
}