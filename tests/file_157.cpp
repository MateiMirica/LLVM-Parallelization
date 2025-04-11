void func() {
  int a[1000000];
  for (int i1=0; i1<6;++i1)
    for (int i2=0; i2<6;++i2)
        for (int i3=0; i3<13;++i3)
            for (int i4=0; i4<45;++i4)
                for (int i5=0; i5<21;++i5)
                    a[18+44*i2+8*i3+8*i4]=a[15+5*i1+14*i2+33*i3+3*i4+10*i5];
}