//
//     Generated by private class-dump
//

@class NSArray;

@interface IESECPDPRefreshConfig : NSObject {
    BOOL _resizeOffset;
    BOOL _forceRefresh;
    BOOL _noMoreRecommend;
    BOOL _needUpdateSections;
    NSArray *_objects;
}

@property (nonatomic) BOOL resizeOffset;
@property (nonatomic) BOOL forceRefresh;
@property (nonatomic) BOOL noMoreRecommend;
@property (nonatomic) BOOL needUpdateSections;
@property (copy, nonatomic) NSArray *objects;

- (BOOL)needUpdateSections;
- (BOOL)resizeOffset;
- (BOOL)noMoreRecommend;
- (void)setResizeOffset:(BOOL)arg0;
- (void)setNoMoreRecommend:(BOOL)arg0;
- (void)setNeedUpdateSections:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)forceRefresh;
- (id)objects;
- (void)setObjects:(id)arg0;
- (void)setForceRefresh:(BOOL)arg0;

@end
