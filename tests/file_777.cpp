void func() {
  int a[1000000];
  for (int i1=0; i1<6;++i1)
    for (int i2=0; i2<15;++i2)
        for (int i3=0; i3<24;++i3)
            for (int i4=0; i4<29;++i4)
                for (int i5=0; i5<9;++i5)
                    a[2+43*i1+8*i2+6*i3+38*i4+34*i5]=a[5+39*i1+32*i2+44*i3+30*i5];
}