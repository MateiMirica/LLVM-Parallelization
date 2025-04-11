void func() {
  int a[1000000];
  for (int i1=0; i1<45;++i1)
    for (int i2=0; i2<20;++i2)
        for (int i3=0; i3<26;++i3)
            for (int i4=0; i4<10;++i4)
                for (int i5=0; i5<20;++i5)
                    a[40+40*i1+50*i2+34*i4+50*i5]=a[45+10*i1+2*i3];
}