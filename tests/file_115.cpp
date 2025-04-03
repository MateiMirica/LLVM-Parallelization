void func() {
  int a[1000000];
  for (int i1=0; i1<20;++i1)
    for (int i2=0; i2<6;++i2)
        for (int i3=0; i3<5;++i3)
            for (int i4=0; i4<48;++i4)
                for (int i5=0; i5<49;++i5)
                    a[36+1*i1+20*i2+23*i3+16*i4]=a[22+23*i3];
}