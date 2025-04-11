void func() {
  int a[1000000];
  for (int i1=0; i1<20;++i1)
    for (int i2=0; i2<48;++i2)
        for (int i3=0; i3<16;++i3)
            for (int i4=0; i4<6;++i4)
                for (int i5=0; i5<35;++i5)
                    a[35+25*i1+30*i2+24*i3+22*i5]=a[24+23*i3];
}