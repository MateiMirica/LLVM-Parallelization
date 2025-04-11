void func() {
  int a[1000000];
  for (int i1=0; i1<23;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<42;++i3)
            for (int i4=0; i4<26;++i4)
                for (int i5=0; i5<49;++i5)
                    a[30+27*i1+6*i2+2*i3+28*i4]=a[29+47*i1+45*i2+29*i3+45*i4];
}