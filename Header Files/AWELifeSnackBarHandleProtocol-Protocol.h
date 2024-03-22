//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@protocol AWELifeSnackBarHandleProtocol <NSObject>

@property (retain, nonatomic) NSMutableDictionary *actionTimesRecord;
@property (retain, nonatomic) NSMutableDictionary *inTabActionTimesRecord;
@property (retain, nonatomic) NSMutableDictionary *inTabActionSettings;

- (void)handleVideoPlayFinish:(id)arg0;
- (void)handleLifeAnchorClick:(id)arg0;
- (id)inTabActionSettings;
- (id)inTabActionTimesRecord;
- (id)getSnackBarTitleTextWithAction:(long long)arg0 categoryText:(id)arg1;
- (id)snackIDWithAction:(long long)arg0;
- (void)updateEnable:(BOOL)arg0;
- (void)handleLifePinTop;
- (void)clearLifePinTopDataWhenLeaveTab;
- (void)handleClickDiamondWithParams:(id)arg0;
- (void)handleLynxMakeDealInLife;
- (id)actionTimesRecord;
- (void)setActionTimesRecord:(id)arg0;
- (void)setInTabActionTimesRecord:(id)arg0;
- (void)setInTabActionSettings:(id)arg0;

@end
