//
//     Generated by private class-dump
//

@class AWEOrangeStoryCellMediaWrapper, AWEOneDayStoryWithCommentModel, NSString;

@interface AWEOneDayFeedCollectionViewCell : UICollectionViewCell <AWEOneDayFeedCollectionCellProtocol> {
    AWEOrangeStoryCellMediaWrapper *_player;
    AWEOneDayStoryWithCommentModel *_model;
}

@property (retain, nonatomic) AWEOrangeStoryCellMediaWrapper *player;
@property (retain, nonatomic) AWEOneDayStoryWithCommentModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setPlayer:(id)arg0;
- (void)prepareForReuse;
- (BOOL)isPlaying;
- (void)play;
- (void)pause;
- (id)player;
- (void)setupUI;

@end