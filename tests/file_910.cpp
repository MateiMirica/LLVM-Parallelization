void func() {
  int a[1000000];
  for (int i1=0; i1<30;++i1)
    for (int i2=0; i2<25;++i2)
        for (int i3=0; i3<32;++i3)
            for (int i4=0; i4<29;++i4)
                for (int i5=0; i5<41;++i5)
                    a[11+45*i3+42*i4]=a[14+25*i3+38*i4+16*i5];
}