//
//     Generated by private class-dump
//

@class AWEAwemeModel;

@interface AWERelatedVideoContentQualityModel : NSObject {
    BOOL _isScroll;
    AWEAwemeModel *_exitItem;
    long long _sameAuthorCount;
    long long _unCorrelatedCountV2;
    long long _unCorrelatedCountV3;
}

@property (retain, nonatomic) AWEAwemeModel *exitItem;
@property (nonatomic) BOOL isScroll;
@property (nonatomic) long long sameAuthorCount;
@property (nonatomic) long long unCorrelatedCountV2;
@property (nonatomic) long long unCorrelatedCountV3;

- (void)setIsScroll:(BOOL)arg0;
- (id)exitItem;
- (void)setExitItem:(id)arg0;
- (BOOL)isScroll;
- (long long)sameAuthorCount;
- (void)setSameAuthorCount:(long long)arg0;
- (long long)unCorrelatedCountV2;
- (void)setUnCorrelatedCountV2:(long long)arg0;
- (long long)unCorrelatedCountV3;
- (void)setUnCorrelatedCountV3:(long long)arg0;
- (void).cxx_destruct;

@end