void func() {
  int a[1000000];
  for (int i1=0; i1<26;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<36;++i3)
            for (int i4=0; i4<21;++i4)
                for (int i5=0; i5<25;++i5)
                    a[3+25*i1+14*i3+30*i4]=a[4+15*i1+40*i2+12*i3+28*i5];
}