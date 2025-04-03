void func() {
  int a[1000000];
  for (int i1=0; i1<26;++i1)
    for (int i2=0; i2<40;++i2)
        for (int i3=0; i3<21;++i3)
            for (int i4=0; i4<22;++i4)
                for (int i5=0; i5<27;++i5)
                    a[49+3*i1+5*i2+1*i3+20*i4]=a[14+31*i1+1*i2+5*i3];
}