//
//     Generated by private class-dump
//

@interface IESLiveKTVOrderPanelRecommendRoomSectionModel : IESLiveKTVOrderPanelBaseSectionModel {
    BOOL _isScrolling;
    BOOL _scrollEnable;
    double _minimumLineSpacing;
    double _minimumInteritemSpacing;
    long long _scrollDirection;
}

@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL scrollEnable;

- (void)setScrollEnable:(BOOL)arg0;
- (BOOL)scrollEnable;
- (long long)scrollDirection;
- (void)setIsScrolling:(BOOL)arg0;
- (unsigned long long)sectionType;
- (void)setScrollDirection:(long long)arg0;
- (BOOL)isScrolling;
- (void)setMinimumInteritemSpacing:(double)arg0;
- (void)setMinimumLineSpacing:(double)arg0;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (Class)sectionClass;

@end