void func() {
  int a[1000000];
  for (int i1=0; i1<29;++i1)
    for (int i2=0; i2<9;++i2)
        for (int i3=0; i3<6;++i3)
            for (int i4=0; i4<36;++i4)
                for (int i5=0; i5<30;++i5)
                    a[42+34*i1+41*i2+27*i3+36*i4+27*i5]=a[11+18*i2+13*i3+31*i4+1*i5];
}