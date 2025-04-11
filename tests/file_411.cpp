void func() {
  int a[1000000];
  for (int i1=0; i1<8;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<13;++i3)
            for (int i4=0; i4<29;++i4)
                for (int i5=0; i5<7;++i5)
                    a[24+15*i1+1*i2+42*i3+44*i4+9*i5]=a[1+15*i1+8*i3];
}