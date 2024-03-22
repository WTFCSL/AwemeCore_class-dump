//
//     Generated by private class-dump
//

@class UIImageView, AWELiveHotPointPanelTableViewController, UIView;

@interface AWELiveHotPointPanelViewController : AWEHotPointPanelViewController {
    BOOL _cellEnableClick;
    UIImageView *_backgroundImageView;
    AWELiveHotPointPanelTableViewController *_liveHotVC;
    UIView *_separateLine;
}

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) AWELiveHotPointPanelTableViewController *liveHotVC;
@property (retain, nonatomic) UIView *separateLine;
@property (nonatomic) BOOL cellEnableClick;

- (id)panelViewController;
- (id)separateLine;
- (void)setSeparateLine:(id)arg0;
- (BOOL)shouldShowHotWordsRecommend;
- (void)doSpecificUIConfig;
- (double)totalPanelViewHeight;
- (void)setCellEnableClick:(BOOL)arg0;
- (BOOL)cellEnableClick;
- (id)liveHotVC;
- (void)setLiveHotVC:(id)arg0;
- (double)titleHeight;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg0;
- (double)containerHeight;

@end
