void func() {
  int a[1000000];
  for (int i1=0; i1<9;++i1)
    for (int i2=0; i2<5;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<38;++i4)
                for (int i5=0; i5<39;++i5)
                    a[13+10*i1+23*i2+22*i3+34*i4+34*i5]=a[50+24*i1+43*i2+48*i3];
}