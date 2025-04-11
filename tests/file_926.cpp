void func() {
  int a[1000000];
  for (int i1=0; i1<43;++i1)
    for (int i2=0; i2<45;++i2)
        for (int i3=0; i3<13;++i3)
            for (int i4=0; i4<44;++i4)
                for (int i5=0; i5<13;++i5)
                    a[30+50*i1+34*i5]=a[33+10*i2+6*i3+44*i4];
}