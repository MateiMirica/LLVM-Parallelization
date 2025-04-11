void func() {
  int a[1000000];
  for (int i1=0; i1<41;++i1)
    for (int i2=0; i2<31;++i2)
        for (int i3=0; i3<37;++i3)
            for (int i4=0; i4<26;++i4)
                for (int i5=0; i5<30;++i5)
                    a[7+13*i1+8*i2+16*i4]=a[19+48*i1+25*i2+27*i3+35*i4+9*i5];
}