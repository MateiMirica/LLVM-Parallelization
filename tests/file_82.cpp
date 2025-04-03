void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<15;++i3)
            for (int i4=0; i4<21;++i4)
                for (int i5=0; i5<6;++i5)
                    a[40+10*i1+46*i2+14*i3+24*i4+3*i5]=a[36+26*i2+22*i4];
}