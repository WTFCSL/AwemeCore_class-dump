//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMixVideoStatusModel : AWEBaseApiModel {
    BOOL _isCollected;
    BOOL _isViewed;
    BOOL _isLocatedCell;
    BOOL _currentPlayTip;
    long long _status;
    NSString *_preCompilationId;
}

@property (nonatomic) long long status;
@property (nonatomic) BOOL isCollected;
@property (nonatomic) BOOL isViewed;
@property (nonatomic) BOOL isLocatedCell;
@property (nonatomic) BOOL currentPlayTip;
@property (copy, nonatomic) NSString *preCompilationId;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isCollected;
- (void)setIsCollected:(BOOL)arg0;
- (BOOL)isViewed;
- (void)setIsViewed:(BOOL)arg0;
- (BOOL)isLocatedCell;
- (void)setIsLocatedCell:(BOOL)arg0;
- (BOOL)currentPlayTip;
- (void)setCurrentPlayTip:(BOOL)arg0;
- (id)preCompilationId;
- (void)setPreCompilationId:(id)arg0;
- (void).cxx_destruct;
- (long long)status;
- (void)setStatus:(long long)arg0;

@end