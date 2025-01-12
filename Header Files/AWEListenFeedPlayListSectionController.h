//
//     Generated by private class-dump
//

@class AWEListenFeedPlayModel, AWEListenFeedContext;

@interface AWEListenFeedPlayListSectionController : AWEBaseListSectionController {
    BOOL _isSupportedExtendStyleEnterFrom;
    AWEListenFeedPlayModel *_playModel;
    double _cellHeight;
    AWEListenFeedContext *_context;
}

@property (retain, nonatomic) AWEListenFeedContext *context;
@property (retain, nonatomic) AWEListenFeedPlayModel *playModel;
@property (nonatomic) double cellHeight;
@property (nonatomic) BOOL isSupportedExtendStyleEnterFrom;

+ (Class)sectionViewModelClass;

- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (void)handleConnectionChanged:(id)arg0;
- (void)setPlayModel:(id)arg0;
- (id)playModel;
- (void)setIsSupportedExtendStyleEnterFrom:(BOOL)arg0;
- (BOOL)isSupportedExtendStyleEnterFrom;
- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (Class)cellClass;
- (id)context;
- (void)dealloc;
- (double)cellHeight;
- (void)setCellHeight:(double)arg0;
- (void)updateContext:(id)arg0;

@end
