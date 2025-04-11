void func() {
  int a[1000000];
  for (int i1=0; i1<40;++i1)
    for (int i2=0; i2<45;++i2)
        for (int i3=0; i3<49;++i3)
            for (int i4=0; i4<5;++i4)
                for (int i5=0; i5<15;++i5)
                    a[12+24*i1+32*i2+34*i3+45*i4]=a[11+32*i1+50*i2+2*i3+9*i4+4*i5];
}