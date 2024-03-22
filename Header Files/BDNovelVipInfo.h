//
//     Generated by private class-dump
//

@class NSDictionary;

@interface BDNovelVipInfo : NSObject {
    BOOL _isVip;
    BOOL _showVipEntrance;
    long long _singleAmount;
    NSDictionary *_originDataDic;
}

@property (nonatomic) BOOL isVip;
@property (nonatomic) BOOL showVipEntrance;
@property (nonatomic) long long singleAmount;
@property (readonly, copy, nonatomic) NSDictionary *originDataDic;

+ (id)emptyVipInfo;

- (BOOL)isVip;
- (void)setIsVip:(BOOL)arg0;
- (void)updateWithDic:(id)arg0;
- (void)setShowVipEntrance:(BOOL)arg0;
- (void)setSingleAmount:(long long)arg0;
- (BOOL)showVipEntrance;
- (long long)singleAmount;
- (id)originDataDic;
- (void).cxx_destruct;

@end