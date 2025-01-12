//
//     Generated by private class-dump
//

@class NSString, AWETeenGeneralAuthorVideoCardModel;

@interface AWETeenGeneralAuthorVideoSectionController : AWETeenGeneralBaseSectionController <AWETeenGeneralPanelSectionControllerProtocol> {
    AWETeenGeneralAuthorVideoCardModel *_model;
}

@property (retain, nonatomic) AWETeenGeneralAuthorVideoCardModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)currPlaybackTime;
- (id)cellForItemAtIndex:(long long)arg0;
- (void)didUpdateToObject:(id)arg0;
- (BOOL)playEnable;
- (long long)currPlayIndex;
- (void)seekToPlayIndex:(long long)arg0;
- (id)visibleVideoControllers;
- (id)visibleSlidesViews;
- (void)cardShow;
- (void)cellShow:(id)arg0 atIndex:(long long)arg1;
- (void)didClickVideoWithAwemeModel:(id)arg0;
- (void)scrollToItem:(id)arg0;
- (long long)numberOfItems;
- (void)setModel:(id)arg0;
- (BOOL)canPlay;
- (void).cxx_destruct;
- (id)model;
- (void)play;
- (void)pause;
- (void)seekToTime:(double)arg0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0;

@end
