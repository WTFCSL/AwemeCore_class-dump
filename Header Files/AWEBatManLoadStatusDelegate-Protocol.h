//
//     Generated by private class-dump
//

@protocol AWEBatManLoadStatusDelegate <NSObject>

- (void)batManCenterStatusDidChanged:(unsigned long long)arg0;
- (void)batManCenterUserDidClosedBatMan;

@optional

- (int)batManCenterOrientation;
- (void)batMan:(id)arg0 playTimeCountDown:(unsigned long long)arg1;
- (void)batManCenterErrorDidChanged:(id)arg0 withInfo:(id)arg1;
- (void)firstPlayBatMan;
- (void)batManCenterAuthDialogShow;
- (void)batManCenterAuthResult:(long long)arg0;
- (void)batManCenterPay;
- (void)batManCenterViewWillAppear;

@end