void func() {
  int a[1000000];
  for (int i1=0; i1<31;++i1)
    for (int i2=0; i2<45;++i2)
        for (int i3=0; i3<36;++i3)
            for (int i4=0; i4<49;++i4)
                for (int i5=0; i5<7;++i5)
                    a[1+13*i1+41*i2+29*i3+36*i5]=a[2+1*i1+9*i5];
}