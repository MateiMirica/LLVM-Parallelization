void func() {
  int a[1000000];
  for (int i1=0; i1<6;++i1)
    for (int i2=0; i2<43;++i2)
        for (int i3=0; i3<16;++i3)
            for (int i4=0; i4<8;++i4)
                for (int i5=0; i5<43;++i5)
                    a[3+50*i3+6*i4+50*i5]=a[24+32*i1+32*i2+44*i4+16*i5];
}