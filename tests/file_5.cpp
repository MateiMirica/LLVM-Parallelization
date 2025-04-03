void func() {
  int a[1000000];
  for (int i1=0; i1<25;++i1)
    for (int i2=0; i2<22;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<27;++i4)
                for (int i5=0; i5<25;++i5)
                    a[46+50*i1+29*i2+34*i3+9*i4+20*i5]=a[36+3*i2+13*i3];
}