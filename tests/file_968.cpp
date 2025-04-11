void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<41;++i3)
            for (int i4=0; i4<13;++i4)
                for (int i5=0; i5<38;++i5)
                    a[1+46*i1+48*i3+10*i4+34*i5]=a[36+25*i1+38*i3];
}