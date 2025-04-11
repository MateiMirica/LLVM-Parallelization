void func() {
  int a[1000000];
  for (int i1=0; i1<20;++i1)
    for (int i2=0; i2<25;++i2)
        for (int i3=0; i3<14;++i3)
            for (int i4=0; i4<37;++i4)
                for (int i5=0; i5<15;++i5)
                    a[5+1*i1+24*i2+44*i3]=a[43+34*i2+45*i3];
}