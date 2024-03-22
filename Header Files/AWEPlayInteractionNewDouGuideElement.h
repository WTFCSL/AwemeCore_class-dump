//
//     Generated by private class-dump
//

@class AWEDetailCellTagLabel, NSString, UILabel, UIView;

@interface AWEPlayInteractionNewDouGuideElement : AWEPlayInteractionNewBottomElement {
    BOOL _isFromPublish;
    BOOL _hasJumpToFE;
    UIView *_douGuideBottomView;
    AWEDetailCellTagLabel *_douGuideTag;
    UILabel *_detailLabel;
    NSString *_jumpUrl;
}

@property (retain, nonatomic) UIView *douGuideBottomView;
@property (retain, nonatomic) AWEDetailCellTagLabel *douGuideTag;
@property (retain, nonatomic) UILabel *detailLabel;
@property (nonatomic) BOOL isFromPublish;
@property (nonatomic) BOOL hasJumpToFE;
@property (copy, nonatomic) NSString *jumpUrl;

- (void)viewDidDisposed;
- (id)jumpUrl;
- (unsigned long long)elementVisibleType;
- (void)tapView;
- (void)setJumpUrl:(id)arg0;
- (void)p_setupUI;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)arg0;
- (void)layoutElementView;
- (BOOL)shouldAppearWithData:(id)arg0;
- (id)p_basicTrackParams;
- (id)douGuideTag;
- (void)setDouGuideTag:(id)arg0;
- (id)douGuideBottomView;
- (void)setDouGuideBottomView:(id)arg0;
- (void)trackClickWithEventName:(id)arg0;
- (BOOL)isFromPublish;
- (BOOL)hasJumpToFE;
- (void)p_reportWhenPublishOnAction:(long long)arg0;
- (void)setHasJumpToFE:(BOOL)arg0;
- (void)setIsFromPublish:(BOOL)arg0;
- (void)updateDouGuideBottomView:(id)arg0;
- (void).cxx_destruct;
- (id)identifier;
- (void)viewDidLoad;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg0;

@end
