void func() {
  int a[1000000];
  for (int i1=0; i1<5;++i1)
    for (int i2=0; i2<19;++i2)
        for (int i3=0; i3<24;++i3)
            for (int i4=0; i4<31;++i4)
                for (int i5=0; i5<36;++i5)
                    a[43+40*i1+10*i5]=a[41+5*i4];
}