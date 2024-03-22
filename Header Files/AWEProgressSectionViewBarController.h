//
//     Generated by private class-dump
//

@class NSString, AWEProgressSectionViewContext, AWEAwemeModel, UIView;
@protocol AWEModernFeedProgressSectionViewProtocol;

@interface AWEProgressSectionViewBarController : NSObject <AWEAwemeDetailBottomBarController> {
    UIView *_containerView;
    UIView<AWEModernFeedProgressSectionViewProtocol> *_progressSectionView;
    AWEProgressSectionViewContext *_context;
    AWEAwemeModel *_model;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView<AWEModernFeedProgressSectionViewProtocol> *progressSectionView;
@property (retain, nonatomic) AWEProgressSectionViewContext *context;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarWithAweme:(id)arg0 updateTiming:(long long)arg1;
- (BOOL)canShowBottomBarForAweme:(id)arg0;
- (void)updatePlayTime:(double)arg0 canPlayTime:(double)arg1 totalTime:(double)arg2;
- (id)progressSectionView;
- (void)setProgressSectionView:(id)arg0;
- (BOOL)chapterListLegal:(id)arg0;
- (void)videoChapterShowTrack;
- (id)getCommonTrackParams;
- (void)videoChapterClickTrackWithSelectedIndex:(unsigned long long)arg0 currentIndex:(unsigned long long)arg1;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (id)context;
- (Class)contextClass;
- (id)bottomBarView;

@end