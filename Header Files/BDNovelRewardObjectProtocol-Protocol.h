//
//     Generated by private class-dump
//

@class NSString, NSObject;
@protocol BDNovelRewardObjectDelegate;

@protocol BDNovelRewardObjectProtocol <NSObject>

@property (copy, nonatomic) NSString *alertTitle;
@property (copy, nonatomic) NSString *alertIconImageUrl;
@property (weak, nonatomic) NSObject<BDNovelRewardObjectDelegate> *delegate;

- (id)alertIconImageUrl;
- (id)showRewardVideoWithCreatorID:(id)arg0 adFrom:(id)arg1;
- (void)setAlertIconImageUrl:(id)arg0;
- (id)alertTitle;
- (id)delegate;
- (void)setAlertTitle:(id)arg0;
- (void)setDelegate:(id)arg0;

@end