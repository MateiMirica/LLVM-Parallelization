void func() {
  int a[1000000];
  for (int i1=0; i1<40;++i1)
    for (int i2=0; i2<48;++i2)
        for (int i3=0; i3<21;++i3)
            for (int i4=0; i4<33;++i4)
                for (int i5=0; i5<29;++i5)
                    a[22+30*i4]=a[29+40*i1+48*i2+28*i3+50*i4+6*i5];
}