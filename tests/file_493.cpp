void func() {
  int a[1000000];
  for (int i1=0; i1<14;++i1)
    for (int i2=0; i2<27;++i2)
        for (int i3=0; i3<29;++i3)
            for (int i4=0; i4<45;++i4)
                for (int i5=0; i5<21;++i5)
                    a[36+8*i1+41*i2+42*i3+12*i4+18*i5]=a[21+22*i1+21*i2+6*i3+40*i4+6*i5];
}