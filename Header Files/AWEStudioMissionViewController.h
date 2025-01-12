//
//     Generated by private class-dump
//

@class UITableView, NSArray, CAShapeLayer, NSString, UILabel, UIView, UIButton;

@interface AWEStudioMissionViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    float _contentHeight;
    UIView *_contentView;
    UITableView *_tableView;
    id /* block */ _selectCellBlock;
    UILabel *_missionTitleLabel;
    UIButton *_closeButton;
    UIView *_maskView;
    CAShapeLayer *_contentShapeLayer;
    NSArray *_sourceData;
    id /* block */ _disAppearBlock;
}

@property (retain, nonatomic) UILabel *missionTitleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) CAShapeLayer *contentShapeLayer;
@property (copy, nonatomic) NSArray *sourceData;
@property (copy, nonatomic) id /* block */ disAppearBlock;
@property (nonatomic) float contentHeight;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ selectCellBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeButtonClicked:(id)arg0;
- (void)trackPageShow;
- (id)contentShapeLayer;
- (id /* block */)disAppearBlock;
- (void)setDisAppearBlock:(id /* block */)arg0;
- (void)setContentShapeLayer:(id)arg0;
- (id /* block */)selectCellBlock;
- (void)setSelectCellBlock:(id /* block */)arg0;
- (void)p_trackEvent:(id)arg0 params:(id)arg1;
- (id)missionTitleLabel;
- (void)updateSourceData:(id)arg0;
- (void)setMissionTitleLabel:(id)arg0;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (float)contentHeight;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)maskView;
- (id)contentView;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setContentHeight:(float)arg0;
- (void)setMaskView:(id)arg0;
- (void)setContentView:(id)arg0;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (void)setupUI;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)sourceData;
- (void)setSourceData:(id)arg0;

@end
