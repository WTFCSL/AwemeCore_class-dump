//
//     Generated by private class-dump
//

@class AWEAwemeModel, UIView, NSString, UIImageView, NSDictionary, UITableView, NSMutableArray, DUXButton, UILabel, DUXDivider;
@protocol AWEMultipleSelectionDislikePanelViewControllerDelegate;

@interface AWEMultipleSelectionDislikePanelViewController : UIViewController <AWEDislikePanelCheckBoxCellDelegate, UITableViewDelegate, UITableViewDataSource> {
    id<AWEMultipleSelectionDislikePanelViewControllerDelegate> _selectDelegate;
    UITableView *_tableView;
    AWEAwemeModel *_awemeModel;
    NSDictionary *_trackExtra;
    UIView *_videoInfoView;
    UIImageView *_videoThumb;
    UILabel *_tipLabel;
    DUXDivider *_line;
    DUXButton *_submitButton;
    DUXButton *_closeButton;
    NSMutableArray *_selectedInfos;
}

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSDictionary *trackExtra;
@property (retain, nonatomic) UIView *videoInfoView;
@property (retain, nonatomic) UIImageView *videoThumb;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) DUXDivider *line;
@property (retain, nonatomic) DUXButton *submitButton;
@property (retain, nonatomic) DUXButton *closeButton;
@property (retain, nonatomic) NSMutableArray *selectedInfos;
@property (weak, nonatomic) id<AWEMultipleSelectionDislikePanelViewControllerDelegate> selectDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (void)setAwemeModel:(id)arg0;
- (id)dux_titleForColoseButton;
- (id)trackExtra;
- (void)setTrackExtra:(id)arg0;
- (void)setSelectDelegate:(id)arg0;
- (id)selectDelegate;
- (void)didClickedSubmit;
- (void)hideLine:(BOOL)arg0;
- (void)stateDidChanged:(id)arg0 checked:(BOOL)arg1;
- (void)didClickedClose;
- (id)videoThumb;
- (void)setVideoThumb:(id)arg0;
- (id)videoInfoView;
- (void)configVideoImage:(id)arg0;
- (id)getDislikeInfoWithIndexPath:(id)arg0;
- (void)addSelectedInfo:(id)arg0;
- (void)deselectedInfo:(id)arg0;
- (id)selectedInfos;
- (id)initWithData:(id)arg0 trackExtra:(id)arg1;
- (void)setVideoInfoView:(id)arg0;
- (void)setSelectedInfos:(id)arg0;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)line;
- (void)viewDidLoad;
- (void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (void)setLine:(id)arg0;
- (void)setupUI;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)submitButton;
- (void)setSubmitButton:(id)arg0;

@end
