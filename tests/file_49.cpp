void func() {
  int a[1000000];
  for (int i1=0; i1<17;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<23;++i3)
            for (int i4=0; i4<48;++i4)
                for (int i5=0; i5<30;++i5)
                    a[44+50*i1+17*i2+48*i3+8*i4]=a[45+10*i1+9*i2+2*i3+40*i5];
}