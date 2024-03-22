//
//     Generated by private class-dump
//

@class UIButton, NSString, IESLiveInteractSelectSeatViewPanelItem, UILabel, NSNumber, UIView;
@protocol IESLiveInteractUserModel, IESLiveInteractEnLargeDoubleCSelectPanelDelegate;

@interface IESLiveInteractEnLargeDoubleCSelectPanel : UIView <IESLiveInteractSelectSeatViewPanelItemDelegate> {
    BOOL _currentSelectRight;
    id<IESLiveInteractUserModel> _leftC;
    id<IESLiveInteractUserModel> _rightC;
    id<IESLiveInteractEnLargeDoubleCSelectPanelDelegate> _delegate;
    NSNumber *_guestID;
    UIView *_topContainer;
    UILabel *_titleLabel;
    UIView *_middleContainer;
    IESLiveInteractSelectSeatViewPanelItem *_leftCView;
    IESLiveInteractSelectSeatViewPanelItem *_rightCView;
    UIView *_bottomontainer;
    UIButton *_bottomBtn;
}

@property (retain, nonatomic) id<IESLiveInteractUserModel> leftC;
@property (retain, nonatomic) id<IESLiveInteractUserModel> rightC;
@property (weak, nonatomic) id<IESLiveInteractEnLargeDoubleCSelectPanelDelegate> delegate;
@property (nonatomic) BOOL currentSelectRight;
@property (retain, nonatomic) NSNumber *guestID;
@property (retain, nonatomic) UIView *topContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *middleContainer;
@property (retain, nonatomic) IESLiveInteractSelectSeatViewPanelItem *leftCView;
@property (retain, nonatomic) IESLiveInteractSelectSeatViewPanelItem *rightCView;
@property (retain, nonatomic) UIView *bottomontainer;
@property (retain, nonatomic) UIButton *bottomBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)topContainer;
- (id)middleContainer;
- (void)setTopContainer:(id)arg0;
- (void)setMiddleContainer:(id)arg0;
- (id)bottomBtn;
- (void)setBottomBtn:(id)arg0;
- (id)initWithLeftC:(id)arg0 rightC:(id)arg1 delegate:(id)arg2 guestID:(id)arg3;
- (void)onItemClick:(id)arg0;
- (id)leftCView;
- (id)rightCView;
- (id)bottomontainer;
- (BOOL)currentSelectRight;
- (id)guestID;
- (void)setCurrentSelectRight:(BOOL)arg0;
- (void)onSendEnlargeInvite;
- (void)onTapLeftC;
- (void)onTapRightC;
- (id)leftC;
- (void)setLeftC:(id)arg0;
- (id)rightC;
- (void)setRightC:(id)arg0;
- (void)setGuestID:(id)arg0;
- (void)setLeftCView:(id)arg0;
- (void)setRightCView:(id)arg0;
- (void)setBottomontainer:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setUpViews;

@end