void func() {
  int a[1000000];
  for (int i1=0; i1<24;++i1)
    for (int i2=0; i2<50;++i2)
        for (int i3=0; i3<29;++i3)
            for (int i4=0; i4<33;++i4)
                for (int i5=0; i5<18;++i5)
                    a[9+31*i1+38*i2+12*i4+6*i5]=a[35+7*i1+2*i2+6*i4+21*i5];
}