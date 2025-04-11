void func() {
  int a[1000000];
  for (int i1=0; i1<37;++i1)
    for (int i2=0; i2<5;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<21;++i4)
                for (int i5=0; i5<10;++i5)
                    a[18+7*i1+10*i2+3*i3+9*i5]=a[37+28*i1+31*i2+42*i3+46*i4+34*i5];
}