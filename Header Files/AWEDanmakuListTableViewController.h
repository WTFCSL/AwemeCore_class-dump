//
//     Generated by private class-dump
//

@class AWEAwemeModel, UIView, NSArray, AWELandScapeDanmakuListTableViewCell, AWEVideoPlayDanmakuModel, UIImageView, AWEUILoadingView, UITableView, NSString, DUXPopover, UILabel, AWEDanmakuModel;
@protocol AWEDanmakuListTableViewControllerDelegate;

@interface AWEDanmakuListTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWELandScapeDanmakuListTableViewCellDelegate, DUXActionSheetDelegate, AWEDanmakuOptionBubbleViewDelegate, AWEDanmakuListTableViewControllerProtocol> {
    BOOL _hasFetched;
    BOOL _hasResetNum;
    UITableView *_tableView;
    NSString *_referString;
    NSString *_previousPage;
    id<AWEDanmakuListTableViewControllerDelegate> _delegate;
    id /* block */ _dismissBlock;
    UILabel *_descLabel;
    AWEUILoadingView *_loadingView;
    UIView *_effectView;
    NSArray *_danmakuDataList;
    long long _danmukuOffset;
    AWEAwemeModel *_model;
    UIImageView *_emptyImageView;
    UILabel *_emptyDescLabel;
    UIView *_topLine;
    unsigned long long _danmakuScene;
    DUXPopover *_popover;
    AWEDanmakuModel *_currentSelectDanmakuModel;
    AWEVideoPlayDanmakuModel *_currentDanmakuModel;
    long long _danmakuCountCache;
    AWELandScapeDanmakuListTableViewCell *_currentClickCell;
}

@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) NSArray *danmakuDataList;
@property (nonatomic) long long danmukuOffset;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIImageView *emptyImageView;
@property (retain, nonatomic) UILabel *emptyDescLabel;
@property (retain, nonatomic) UIView *topLine;
@property (nonatomic) unsigned long long danmakuScene;
@property (retain, nonatomic) DUXPopover *popover;
@property (retain, nonatomic) AWEDanmakuModel *currentSelectDanmakuModel;
@property (retain, nonatomic) AWEVideoPlayDanmakuModel *currentDanmakuModel;
@property (nonatomic) BOOL hasFetched;
@property (nonatomic) BOOL hasResetNum;
@property (nonatomic) long long danmakuCountCache;
@property (retain, nonatomic) AWELandScapeDanmakuListTableViewCell *currentClickCell;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *previousPage;
@property (weak, nonatomic) id<AWEDanmakuListTableViewControllerDelegate> delegate;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)referString;
- (void)setReferString:(id)arg0;
- (id)aAWEPadModuleAdapter;
- (void)actionSheet:(id)arg0 didClickButtonAtIndex:(long long)arg1;
- (void)actionSheetDidClickCancelButton:(id)arg0;
- (void)actionSheetDidClickMaskArea:(id)arg0;
- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (void)setHasFetched:(BOOL)arg0;
- (void)p_setupUI;
- (id)emptyImageView;
- (void)setEmptyImageView:(id)arg0;
- (id)initWithDanmakuScene:(unsigned long long)arg0 model:(id)arg1;
- (void)p_loadMoreData;
- (void)p_dismissLoadingWithAnimated:(BOOL)arg0;
- (double)safeAreaOffset;
- (void)updateCountNum:(long long)arg0;
- (id)filteredDuplicateModels:(id)arg0;
- (id)getRequestLogID:(id)arg0;
- (void)setDanmakuScene:(unsigned long long)arg0;
- (id)currentSelectDanmakuModel;
- (void)setCurrentSelectDanmakuModel:(id)arg0;
- (void)hideBubbleIfNeed;
- (void)diggTapAction;
- (void)deleteTapAction;
- (void)reportTapAction;
- (unsigned long long)danmakuScene;
- (void)setDanmukuOffset:(long long)arg0;
- (void)fetchDanmakuData;
- (void)setDanmakuCountCache:(long long)arg0;
- (void)updateLandsacapeUI;
- (id)emptyDescLabel;
- (void)configWithDanmakuScene:(unsigned long long)arg0;
- (void)showEmptyViewWithNoNetWork:(BOOL)arg0;
- (long long)danmukuOffset;
- (id)danmakuDataList;
- (BOOL)hasResetNum;
- (void)setHasResetNum:(BOOL)arg0;
- (void)setDanmakuDataList:(id)arg0;
- (id)configBubbleView:(id)arg0;
- (id)danmakuBubbleViewElementsForModel:(id)arg0;
- (void)setCurrentClickCell:(id)arg0;
- (long long)danmakuCountCache;
- (void)digDanmaku:(id)arg0 cellHadDigged:(BOOL)arg1;
- (void)setCurrentDanmakuModel:(id)arg0;
- (void)showDanmakuPopOverTargetView:(id)arg0 point:(struct CGPoint { double x0; double x1; })arg1;
- (id)currentDanmakuModel;
- (void)deleteDanmaku:(id)arg0;
- (id)currentClickCell;
- (void)handleDigDanmakuListCell:(id)arg0 model:(id)arg1;
- (void)handleDanmakuListCellDescClick:(id)arg0 model:(id)arg1 clickPoint:(struct CGPoint { double x0; double x1; })arg2;
- (void)setEmptyDescLabel:(id)arg0;
- (void)setModel:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (id)effectView;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)popover;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)model;
- (id)delegate;
- (void)setEffectView:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)setPopover:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)reset;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)topLine;
- (void)setTopLine:(id)arg0;
- (BOOL)hasFetched;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;

@end
