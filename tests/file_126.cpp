void func() {
  int a[1000000];
  for (int i1=0; i1<35;++i1)
    for (int i2=0; i2<8;++i2)
        for (int i3=0; i3<18;++i3)
            for (int i4=0; i4<49;++i4)
                for (int i5=0; i5<32;++i5)
                    a[27+38*i1+24*i2+19*i3+50*i5]=a[40+15*i2];
}