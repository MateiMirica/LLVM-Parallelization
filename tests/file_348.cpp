void func() {
  int a[1000000];
  for (int i1=0; i1<27;++i1)
    for (int i2=0; i2<45;++i2)
        for (int i3=0; i3<21;++i3)
            for (int i4=0; i4<40;++i4)
                for (int i5=0; i5<30;++i5)
                    a[18+4*i2+22*i5]=a[45+48*i1+32*i2+6*i3+4*i5];
}