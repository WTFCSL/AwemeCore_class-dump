//
//     Generated by private class-dump
//

@class NSString, BDNovelComicCoverView;

@interface BDNovelComicCoverViewController : BDNovelComicInsertViewController <BDNovelComicCoverViewDelegate> {
    BDNovelComicCoverView *_coverView;
}

@property (retain, nonatomic) BDNovelComicCoverView *coverView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)coverViewExpand;
- (void)manualLoadView;
- (double)pageViewHeight;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (id)clone;
- (id)createContentView;
- (id)coverView;
- (void)setCoverView:(id)arg0;

@end