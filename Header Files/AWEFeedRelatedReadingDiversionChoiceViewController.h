//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, DUXBasicSheet, NSDictionary, UIImageView, DUXCheckBox, DUXButton, UILabel;

@interface AWEFeedRelatedReadingDiversionChoiceViewController : UIViewController <DUXSheetDelegate> {
    id /* block */ _completion;
    DUXBasicSheet *_sheet;
    UIImageView *_headerImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    DUXButton *_confirmButton;
    DUXButton *_cancelButton;
    DUXCheckBox *_checkBox;
    UILabel *_checkBoxLabel;
    AWEAwemeModel *_model;
    NSDictionary *_trackParams;
    long long _choiceType;
}

@property (copy, nonatomic) id /* block */ completion;
@property (weak, nonatomic) DUXBasicSheet *sheet;
@property (retain, nonatomic) UIImageView *headerImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) DUXButton *confirmButton;
@property (retain, nonatomic) DUXButton *cancelButton;
@property (retain, nonatomic) DUXCheckBox *checkBox;
@property (retain, nonatomic) UILabel *checkBoxLabel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) long long choiceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowDiversionChoicePanel:(id)arg0;
+ (void)showDiversionChoicePanel:(id)arg0 completion:(id /* block */)arg1 trackPrams:(id)arg2;

- (void)sheetWillDismiss:(id)arg0;
- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (void)setCheckBox:(id)arg0;
- (id)checkBox;
- (id)checkBoxLabel;
- (void)setCheckBoxLabel:(id)arg0;
- (id)descText;
- (void)trackPanelShow;
- (void)checkBoxConfirm;
- (void)trackPanelClick;
- (void)setChoiceType:(long long)arg0;
- (void)selectDouyin;
- (void)selectToutiao;
- (id)headerImageUrl;
- (void)setModel:(id)arg0;
- (void)setCancelButton:(id)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (id)cancelButton;
- (void)setCompletion:(id /* block */)arg0;
- (id)model;
- (id)titleLabel;
- (id)titleText;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)setupSubviews;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (id)confirmButtonText;
- (id)headerImageView;
- (void)setHeaderImageView:(id)arg0;
- (id)sheet;
- (long long)choiceType;
- (void)setSheet:(id)arg0;

@end