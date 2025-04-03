void func() {
  int a[1000000];
  for (int i1=0; i1<44;++i1)
    for (int i2=0; i2<31;++i2)
        for (int i3=0; i3<21;++i3)
            for (int i4=0; i4<19;++i4)
                for (int i5=0; i5<18;++i5)
                    a[41+5*i1+41*i2+25*i3+25*i4]=a[48+31*i2+25*i5];
}