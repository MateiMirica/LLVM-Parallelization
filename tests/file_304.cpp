void func() {
  int a[1000000];
  for (int i1=0; i1<30;++i1)
    for (int i2=0; i2<50;++i2)
        for (int i3=0; i3<17;++i3)
            for (int i4=0; i4<29;++i4)
                for (int i5=0; i5<18;++i5)
                    a[42+17*i5]=a[7+48*i5];
}