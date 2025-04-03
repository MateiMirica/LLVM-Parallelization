void func() {
  int a[1000000];
  for (int i1=0; i1<21;++i1)
    for (int i2=0; i2<23;++i2)
        for (int i3=0; i3<29;++i3)
            for (int i4=0; i4<27;++i4)
                for (int i5=0; i5<5;++i5)
                    a[14+12*i2+14*i3+18*i5]=a[33+10*i1+43*i2+22*i3+48*i4+47*i5];
}