void func() {
  int a[1000000];
  for (int i1=0; i1<48;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<10;++i3)
            for (int i4=0; i4<23;++i4)
                for (int i5=0; i5<8;++i5)
                    a[47+32*i1+46*i2+16*i4]=a[26+18*i3+2*i4];
}