//
//     Generated by private class-dump
//

@class AWEDemaciaChapterProgressSlider;

@interface AWEPlayInteractionChapterProgressController : AWEPlayInteractionBaseController {
    AWEDemaciaChapterProgressSlider *_chapterProgressBar;
}

@property (retain, nonatomic) AWEDemaciaChapterProgressSlider *chapterProgressBar;

- (void)setHide:(BOOL)arg0;
- (id)chapterProgressBar;
- (void)setChapterProgressBar:(id)arg0;
- (double)calcuteEntryTopOffset:(BOOL)arg0;
- (void)updateChapterProgressBarPosition:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)viewDidAppear;
- (void)dealloc;
- (void)reset;
- (void)viewDidLoad;
- (void)setupContext;
- (void)willDisplay;

@end
