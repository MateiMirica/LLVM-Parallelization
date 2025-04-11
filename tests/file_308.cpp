void func() {
  int a[1000000];
  for (int i1=0; i1<31;++i1)
    for (int i2=0; i2<35;++i2)
        for (int i3=0; i3<32;++i3)
            for (int i4=0; i4<36;++i4)
                for (int i5=0; i5<9;++i5)
                    a[6+13*i2+6*i3+2*i5]=a[45+1*i1+47*i2+41*i3+45*i4+25*i5];
}