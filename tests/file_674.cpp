void func() {
  int a[1000000];
  for (int i1=0; i1<42;++i1)
    for (int i2=0; i2<12;++i2)
        for (int i3=0; i3<7;++i3)
            for (int i4=0; i4<36;++i4)
                for (int i5=0; i5<11;++i5)
                    a[48+23*i1+32*i2+43*i3+37*i4]=a[43+18*i1+1*i3];
}