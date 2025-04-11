void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<38;++i2)
        for (int i3=0; i3<50;++i3)
            for (int i4=0; i4<6;++i4)
                for (int i5=0; i5<34;++i5)
                    a[34+5*i1+38*i2+5*i3+38*i4+20*i5]=a[47+1*i1+10*i2+47*i3];
}