void func() {
  int a[1000000];
  for (int i1=0; i1<6;++i1)
    for (int i2=0; i2<49;++i2)
        for (int i3=0; i3<21;++i3)
            for (int i4=0; i4<21;++i4)
                for (int i5=0; i5<17;++i5)
                    a[19+10*i1+1*i3+6*i4]=a[20+16*i2+38*i3+46*i4+34*i5];
}