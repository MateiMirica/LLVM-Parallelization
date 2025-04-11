void func() {
  int a[1000000];
  for (int i1=0; i1<6;++i1)
    for (int i2=0; i2<22;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<22;++i4)
                for (int i5=0; i5<45;++i5)
                    a[17+45*i2+1*i4+34*i5]=a[14+50*i1+27*i2+30*i3+9*i4+6*i5];
}