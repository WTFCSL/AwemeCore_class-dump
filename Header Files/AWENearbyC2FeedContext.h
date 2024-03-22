//
//     Generated by private class-dump
//

@class AWENearbySearchTransInfo, NSString, AWEAwemeModel, UIScrollView;

@interface AWENearbyC2FeedContext : NSObject <NSCopying> {
    BOOL _didBackScrollToTop;
    BOOL _isSearchSchemaUndertake;
    long long _maxExposedCellIndex;
    AWEAwemeModel *_model;
    AWENearbySearchTransInfo *_searchTransInfo;
    NSString *_cityCode;
    long long _scrollerDirection;
    UIScrollView *_scrollView;
    struct CGPoint { double x; double y; } _scrollViewContentOffset;
}

@property (nonatomic) long long maxExposedCellIndex;
@property (nonatomic) BOOL didBackScrollToTop;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWENearbySearchTransInfo *searchTransInfo;
@property (retain, nonatomic) NSString *cityCode;
@property (nonatomic) struct CGPoint { double x; double y; } scrollViewContentOffset;
@property (nonatomic) long long scrollerDirection;
@property (nonatomic) BOOL isSearchSchemaUndertake;
@property (weak, nonatomic) UIScrollView *scrollView;

- (id)searchTransInfo;
- (void)setSearchTransInfo:(id)arg0;
- (void)setIsSearchSchemaUndertake:(BOOL)arg0;
- (long long)maxExposedCellIndex;
- (void)setMaxExposedCellIndex:(long long)arg0;
- (void)setDidBackScrollToTop:(BOOL)arg0;
- (void)setScrollViewContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)setScrollerDirection:(long long)arg0;
- (BOOL)isSearchSchemaUndertake;
- (long long)scrollerDirection;
- (BOOL)didBackScrollToTop;
- (void)setModel:(id)arg0;
- (void)setScrollView:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (struct CGPoint { double x0; double x1; })scrollViewContentOffset;
- (id)scrollView;
- (id)cityCode;
- (void)setCityCode:(id)arg0;

@end