void func() {
  int a[1000000];
  for (int i1=0; i1<22;++i1)
    for (int i2=0; i2<30;++i2)
        for (int i3=0; i3<31;++i3)
            for (int i4=0; i4<50;++i4)
                for (int i5=0; i5<29;++i5)
                    a[40+38*i1+45*i2+26*i3+1*i4]=a[21+32*i1+1*i2+20*i3+29*i4+40*i5];
}