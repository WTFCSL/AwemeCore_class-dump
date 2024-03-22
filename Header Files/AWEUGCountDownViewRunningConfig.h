//
//     Generated by private class-dump
//

@class NSString;

@interface AWEUGCountDownViewRunningConfig : NSObject {
    BOOL _hasFeedBack;
    long long _resourceType;
    NSString *_iconImageUrl;
    NSString *_iconLottieUrl;
    NSString *_iconLottieMD5;
    long long _lottiePlayType;
    NSString *_expandIconUrl;
    NSString *_foldIconUrl;
    NSString *_labelText;
    NSString *_labelFoldText;
    NSString *_feedBackSchema;
    double _foldAfterTime;
}

@property (nonatomic) long long resourceType;
@property (copy, nonatomic) NSString *iconImageUrl;
@property (copy, nonatomic) NSString *iconLottieUrl;
@property (copy, nonatomic) NSString *iconLottieMD5;
@property (nonatomic) long long lottiePlayType;
@property (copy, nonatomic) NSString *expandIconUrl;
@property (copy, nonatomic) NSString *foldIconUrl;
@property (copy, nonatomic) NSString *labelText;
@property (copy, nonatomic) NSString *labelFoldText;
@property (nonatomic) BOOL hasFeedBack;
@property (copy, nonatomic) NSString *feedBackSchema;
@property (nonatomic) double foldAfterTime;

- (long long)lottiePlayType;
- (void)setLottiePlayType:(long long)arg0;
- (double)foldAfterTime;
- (id)foldIconUrl;
- (void)setFoldIconUrl:(id)arg0;
- (id)expandIconUrl;
- (void)setExpandIconUrl:(id)arg0;
- (void)setFoldAfterTime:(double)arg0;
- (void)setHasFeedBack:(BOOL)arg0;
- (void)setLabelFoldText:(id)arg0;
- (void)setFeedBackSchema:(id)arg0;
- (void)setIconImageUrl:(id)arg0;
- (void)setIconLottieUrl:(id)arg0;
- (void)setIconLottieMD5:(id)arg0;
- (id)labelFoldText;
- (id)iconLottieUrl;
- (id)iconLottieMD5;
- (id)iconImageUrl;
- (BOOL)hasFeedBack;
- (id)feedBackSchema;
- (long long)resourceType;
- (void)setLabelText:(id)arg0;
- (void).cxx_destruct;
- (void)setResourceType:(long long)arg0;
- (id)labelText;

@end