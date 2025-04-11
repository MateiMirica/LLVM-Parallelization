void func() {
  int a[1000000];
  for (int i1=0; i1<18;++i1)
    for (int i2=0; i2<43;++i2)
        for (int i3=0; i3<48;++i3)
            for (int i4=0; i4<34;++i4)
                for (int i5=0; i5<6;++i5)
                    a[43+42*i1+19*i2+45*i3+15*i4+38*i5]=a[6+15*i1+1*i3+9*i4+1*i5];
}