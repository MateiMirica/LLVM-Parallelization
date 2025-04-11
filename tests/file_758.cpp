void func() {
  int a[1000000];
  for (int i1=0; i1<49;++i1)
    for (int i2=0; i2<11;++i2)
        for (int i3=0; i3<23;++i3)
            for (int i4=0; i4<23;++i4)
                for (int i5=0; i5<27;++i5)
                    a[12+10*i1+18*i2+3*i4]=a[31+12*i1+23*i2+50*i4+34*i5];
}