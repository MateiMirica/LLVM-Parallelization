void func() {
  int a[1000000];
  for (int i1=0; i1<6;++i1)
    for (int i2=0; i2<46;++i2)
        for (int i3=0; i3<7;++i3)
            for (int i4=0; i4<12;++i4)
                for (int i5=0; i5<34;++i5)
                    a[37+11*i1+32*i2+13*i3+9*i4]=a[50+22*i1+38*i2+14*i3+18*i4+13*i5];
}