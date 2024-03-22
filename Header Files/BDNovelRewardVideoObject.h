//
//     Generated by private class-dump
//

@class NSString, NSObject;
@protocol BDNovelRewardObjectDelegate;

@interface BDNovelRewardVideoObject : NSObject <BDARewardedVideoAdDelegate, BDARewardedVideoAlertDelegate, BDNovelRewardObjectProtocol> {
    BOOL _isEffective;
    NSString *_alertTitle;
    NSString *_alertIconImageUrl;
    NSObject<BDNovelRewardObjectDelegate> *_delegate;
}

@property (nonatomic) BOOL isEffective;
@property (copy, nonatomic) NSString *alertTitle;
@property (copy, nonatomic) NSString *alertIconImageUrl;
@property (weak, nonatomic) NSObject<BDNovelRewardObjectDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportReward:(long long)arg0;
+ (void)reportReward:(long long)arg0 error:(id)arg1;

- (void)videoAd:(id)arg0 didClickCloseWithInfo:(id)arg1;
- (void)videoAdBecomeEffective:(id)arg0;
- (id)show:(id)arg0 retainTime:(long long)arg1 title:(id)arg2;
- (void)videoAd:(id)arg0 didLoadFailWithError:(id)arg1;
- (void)videoAdDidLoadSuccess:(id)arg0;
- (BOOL)isEffective;
- (void)setIsEffective:(BOOL)arg0;
- (id)alertIconImageUrl;
- (id)showRewardVideoWithCreatorID:(id)arg0 adFrom:(id)arg1;
- (void)setAlertIconImageUrl:(id)arg0;
- (id)alertTitle;
- (void).cxx_destruct;
- (id)delegate;
- (void)setAlertTitle:(id)arg0;
- (void)setDelegate:(id)arg0;

@end