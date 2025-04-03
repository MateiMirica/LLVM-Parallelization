void func() {
  int a[1000000];
  for (int i1=0; i1<27;++i1)
    for (int i2=0; i2<30;++i2)
        for (int i3=0; i3<6;++i3)
            for (int i4=0; i4<45;++i4)
                for (int i5=0; i5<46;++i5)
                    a[35+27*i1+8*i3+3*i4+26*i5]=a[50+3*i1+9*i4+20*i5];
}