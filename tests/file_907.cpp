void func() {
  int a[1000000];
  for (int i1=0; i1<49;++i1)
    for (int i2=0; i2<17;++i2)
        for (int i3=0; i3<44;++i3)
            for (int i4=0; i4<12;++i4)
                for (int i5=0; i5<48;++i5)
                    a[26+47*i1+47*i2+1*i4+28*i5]=a[3+23*i1+37*i2+25*i4+12*i5];
}