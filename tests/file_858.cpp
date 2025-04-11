void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<23;++i3)
            for (int i4=0; i4<5;++i4)
                for (int i5=0; i5<20;++i5)
                    a[40+19*i1+46*i2+34*i3+8*i4+7*i5]=a[26+14*i4];
}