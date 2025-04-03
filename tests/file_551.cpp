void func() {
  int a[1000000];
  for (int i1=0; i1<44;++i1)
    for (int i2=0; i2<30;++i2)
        for (int i3=0; i3<7;++i3)
            for (int i4=0; i4<44;++i4)
                for (int i5=0; i5<27;++i5)
                    a[35+3*i2+6*i3+10*i4]=a[50+24*i1+1*i2+46*i3+14*i4+26*i5];
}