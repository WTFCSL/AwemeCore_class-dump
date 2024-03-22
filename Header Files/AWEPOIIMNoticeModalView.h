//
//     Generated by private class-dump
//

@class UIView, NSString, AWEPOIIMNoticeView, AWEPOIIMNoticeModel, UIImageView, AWEPOICommonModalViewController, UIButton, UILabel;
@protocol AWEPOIModalContentDelegate;

@interface AWEPOIIMNoticeModalView : UIView <AWEPOICommonModalCustomContentProtocol> {
    AWEPOICommonModalViewController *_modalVC;
    AWEPOIIMNoticeModel *_model;
    AWEPOIIMNoticeView *_noticeView;
    UILabel *_titleLabel;
    UIImageView *_closeImageView;
    UIButton *_confirmButton;
}

@property (retain, nonatomic) AWEPOIIMNoticeModel *model;
@property (retain, nonatomic) AWEPOIIMNoticeView *noticeView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (weak, nonatomic) AWEPOICommonModalViewController *modalVC;
@property (readonly, nonatomic) UIView *contentView;
@property (weak, nonatomic) id<AWEPOIModalContentDelegate> modalContentDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)modalViewHeight;
+ (long long)annoumcementViewHeight;

- (void)confirmButtonTapped;
- (void)initView;
- (id)noticeView;
- (void)setNoticeView:(id)arg0;
- (void)setModalVC:(id)arg0;
- (void)enableContentScroll;
- (void)disableContentScroll;
- (id)modalVC;
- (void)closeImageViewTapped;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)titleLabel;
- (id)contentView;
- (void)setTitleLabel:(id)arg0;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (id)closeImageView;
- (void)setCloseImageView:(id)arg0;
- (struct CGPoint { double x0; double x1; })currentContentOffset;

@end