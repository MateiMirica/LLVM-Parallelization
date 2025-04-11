void func() {
  int a[1000000];
  for (int i1=0; i1<41;++i1)
    for (int i2=0; i2<38;++i2)
        for (int i3=0; i3<18;++i3)
            for (int i4=0; i4<25;++i4)
                for (int i5=0; i5<27;++i5)
                    a[40+27*i5]=a[30+42*i1+12*i3+9*i5];
}