void func() {
  int a[1000000];
  for (int i1=0; i1<8;++i1)
    for (int i2=0; i2<28;++i2)
        for (int i3=0; i3<33;++i3)
            for (int i4=0; i4<29;++i4)
                for (int i5=0; i5<45;++i5)
                    a[6+8*i2]=a[35+18*i1+25*i2+13*i3+6*i4+46*i5];
}