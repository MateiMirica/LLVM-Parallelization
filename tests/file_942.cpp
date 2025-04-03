void func() {
  int a[1000000];
  for (int i1=0; i1<14;++i1)
    for (int i2=0; i2<26;++i2)
        for (int i3=0; i3<22;++i3)
            for (int i4=0; i4<21;++i4)
                for (int i5=0; i5<31;++i5)
                    a[43+7*i1+41*i2+18*i3+40*i5]=a[26+9*i1+11*i2+14*i3+10*i5];
}