void func() {
  int a[1000000];
  for (int i1=0; i1<45;++i1)
    for (int i2=0; i2<45;++i2)
        for (int i3=0; i3<9;++i3)
            for (int i4=0; i4<29;++i4)
                for (int i5=0; i5<18;++i5)
                    a[19+1*i1+10*i2+34*i3+10*i4]=a[48+4*i1+47*i2+35*i3+9*i4+23*i5];
}