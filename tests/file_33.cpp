void func() {
  int a[1000000];
  for (int i1=0; i1<24;++i1)
    for (int i2=0; i2<40;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<32;++i4)
                for (int i5=0; i5<40;++i5)
                    a[12+34*i1+44*i2+24*i3+7*i4+12*i5]=a[39+24*i2+10*i3+19*i4+48*i5];
}