void func() {
  int a[1000000];
  for (int i1=0; i1<19;++i1)
    for (int i2=0; i2<14;++i2)
        for (int i3=0; i3<32;++i3)
            for (int i4=0; i4<49;++i4)
                for (int i5=0; i5<29;++i5)
                    a[8+10*i2+19*i3]=a[40+48*i1+50*i2+38*i3+10*i4+12*i5];
}