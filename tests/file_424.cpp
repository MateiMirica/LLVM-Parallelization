void func() {
  int a[1000000];
  for (int i1=0; i1<5;++i1)
    for (int i2=0; i2<50;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<20;++i4)
                for (int i5=0; i5<29;++i5)
                    a[42+43*i3+29*i4+42*i5]=a[29+30*i2+5*i3+17*i4+2*i5];
}