void func() {
  int a[1000000];
  for (int i1=0; i1<22;++i1)
    for (int i2=0; i2<44;++i2)
        for (int i3=0; i3<21;++i3)
            for (int i4=0; i4<45;++i4)
                for (int i5=0; i5<46;++i5)
                    a[19+38*i1+4*i2+7*i3+42*i4+47*i5]=a[4+14*i1+2*i3+40*i4];
}