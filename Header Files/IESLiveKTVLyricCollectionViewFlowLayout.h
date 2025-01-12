//
//     Generated by private class-dump
//

@class NSMutableArray, IESLiveLyricViewConfig;

@interface IESLiveKTVLyricCollectionViewFlowLayout : UICollectionViewFlowLayout {
    IESLiveLyricViewConfig *_config;
    long long _singingLine;
    NSMutableArray *_allAttributeCache;
}

@property (retain, nonatomic) NSMutableArray *allAttributeCache;
@property (retain, nonatomic) IESLiveLyricViewConfig *config;
@property (nonatomic) long long singingLine;

- (id)allAttributeCache;
- (void)setAllAttributeCache:(id)arg0;
- (long long)singingLine;
- (void)setSingingLine:(long long)arg0;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)init;
- (void)setConfig:(id)arg0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void).cxx_destruct;
- (id)config;

@end
