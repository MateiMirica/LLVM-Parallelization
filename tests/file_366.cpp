void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<27;++i2)
        for (int i3=0; i3<42;++i3)
            for (int i4=0; i4<29;++i4)
                for (int i5=0; i5<42;++i5)
                    a[40+12*i2+19*i3+2*i4]=a[11+45*i2+37*i3+14*i4+19*i5];
}